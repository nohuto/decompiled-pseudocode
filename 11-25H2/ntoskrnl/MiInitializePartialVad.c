/*
 * XREFs of MiInitializePartialVad @ 0x140902310
 * Callers:
 *     MiAllocateSplitVads @ 0x1409021D4 (MiAllocateSplitVads.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiClearVadTrimBehind @ 0x1402A3230 (MiClearVadTrimBehind.c)
 *     MiAdvanceVadView @ 0x1402A4550 (MiAdvanceVadView.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiFreeRotateView @ 0x1407DDB9C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiResidentPagesForSpan @ 0x1409EFD88 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x140A65608 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(unsigned __int64 *P, __int64 a2)
{
  __int64 v2; // r13
  int v4; // esi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdi
  char v9; // al
  int v10; // r15d
  __int64 *v11; // rax
  __int64 *v12; // rbp
  int v13; // eax
  __int64 result; // rax
  int PlaceholderStorage; // edi
  ULONG *ProcessPartition; // rax
  unsigned __int64 v17; // r9

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  memmove(P, (const void *)v2, (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  v8 = 0LL;
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
  v9 = P[6] & 0x70;
  P[5] = 0LL;
  if ( v9 != 64 || (unsigned int)MiCreateRotateView(P) )
  {
    if ( MiLocateLockedVadEvent(v2, 128) )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage((__int64)P);
      if ( PlaceholderStorage < 0 )
      {
        if ( (P[6] & 0x70) == 0x40 )
          MiFreeRotateView((__int64)P);
        goto LABEL_22;
      }
      v8 = 0LL;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( v4 == 1 || v4 == 3 && !*(_QWORD *)a2 )
    {
      v8 = ((unsigned __int64)(v7 + 1) >> 12)
         - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    }
    else
    {
      *((_DWORD *)P + 7) = (unsigned __int64)(v6 - 1) >> 12;
      *((_BYTE *)P + 33) = (unsigned __int64)(v6 - 1) >> 44;
    }
    v11 = KeAbPreAcquire((__int64)(P + 5), 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)P + 10, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 5, v11, (__int64)(P + 5));
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    MiAdvanceVadView((__int64)P, v8);
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      MiClearVadTrimBehind((__int64)P, 0);
      P[15] = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
    KeAbPostRelease((ULONG_PTR)(P + 5));
    v13 = P[6] & 0x70;
    if ( v13 != 16 && v13 != 64
      || !MiResidentPagesForSpan(
            (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL)
      || (ProcessPartition = (ULONG *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process),
          (unsigned int)MiChargeResident(ProcessPartition, v17, 128LL)) )
    {
      *P = *(_QWORD *)a2;
      result = 0LL;
      *(_QWORD *)a2 = P;
      return result;
    }
    if ( (P[6] & 0x70) == 0x40 )
      MiFreeRotateView((__int64)P);
    if ( v10 )
      MiFreePlaceholderStorage(P);
  }
  PlaceholderStorage = -1073741670;
LABEL_22:
  ExFreePoolWithTag(P, 0);
  return (unsigned int)PlaceholderStorage;
}
