/*
 * XREFs of MiInitializePartialVad @ 0x14091A104
 * Callers:
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiAdvanceVadView @ 0x1403C8DEC (MiAdvanceVadView.c)
 *     MiClearVadTrimBehind @ 0x1403DAD00 (MiClearVadTrimBehind.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiFreeRotateView @ 0x1407EE00C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiCreateRotateView @ 0x140A615A8 (MiCreateRotateView.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(unsigned __int64 *P, __int64 a2)
{
  __int64 v2; // r15
  int v4; // esi
  __int64 v6; // rbp
  __int64 v7; // r13
  int v8; // eax
  int PlaceholderStorage; // edi
  __int64 result; // rax
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // rbp

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  memmove(P, (const void *)v2, (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  *((_DWORD *)P + 9) = 0;
  P[2] = -2LL;
  P[7] &= 0xFuLL;
  if ( (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    *((_DWORD *)P + 13) = -3;
    *((_BYTE *)P + 34) = 7;
  }
  else
  {
    *((_DWORD *)P + 13) = 0;
    *((_BYTE *)P + 34) = 0;
  }
  v8 = *((_DWORD *)P + 12);
  P[5] = 0LL;
  if ( (v8 & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(P) )
  {
    PlaceholderStorage = -1073741670;
LABEL_11:
    ExFreePoolWithTag(P, 0);
    return (unsigned int)PlaceholderStorage;
  }
  if ( MiLocateLockedVadEvent(v2, 128) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage((__int64)P);
    if ( PlaceholderStorage < 0 )
    {
      if ( (P[6] & 0x70) == 0x40 )
        MiFreeRotateView((__int64)P);
      goto LABEL_11;
    }
  }
  if ( v4 == 1 || v4 == 3 && !*(_QWORD *)a2 )
  {
    v11 = ((unsigned __int64)(v7 + 1) >> 12)
        - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
  }
  else
  {
    *((_DWORD *)P + 7) = (unsigned __int64)(v6 - 1) >> 12;
    *((_BYTE *)P + 33) = (unsigned __int64)(v6 - 1) >> 44;
    v11 = 0LL;
  }
  v12 = (char *)KeAbPreAcquire((__int64)(P + 5), 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 10, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 5, v12, (__int64)(P + 5));
  if ( v13 )
    v13[10] = 1;
  MiAdvanceVadView((__int64)P, v11);
  if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
  {
    MiClearVadTrimBehind((__int64)P, 0);
    P[15] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)(P + 5));
  *P = *(_QWORD *)a2;
  result = 0LL;
  *(_QWORD *)a2 = P;
  return result;
}
