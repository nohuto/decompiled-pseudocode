/*
 * XREFs of MiInitializePartialVad @ 0x140A246FC
 * Callers:
 *     MiAllocateSplitVads @ 0x140A245C0 (MiAllocateSplitVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiClearVadTrimBehind @ 0x1403FD3E0 (MiClearVadTrimBehind.c)
 *     MiAdvanceVadView @ 0x14040663C (MiAdvanceVadView.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x14068EBE8 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiFreeRotateView @ 0x1407EDA3C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiResidentPagesForSpan @ 0x1409B0784 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(unsigned __int64 *P, __int64 a2)
{
  __int64 v2; // r13
  int v4; // esi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdi
  char v9; // al
  int PlaceholderStorage; // edi
  int v11; // r15d
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  int v14; // eax
  ULONG *ProcessPartition; // rax
  unsigned __int64 v16; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  memmove(P, (const void *)v2, (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  P[2] = -2LL;
  v8 = 0LL;
  *((_DWORD *)P + 9) = 0;
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
  if ( v9 == 64 && !(unsigned int)MiCreateRotateView(P) )
  {
LABEL_34:
    PlaceholderStorage = -1073741670;
LABEL_35:
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
      goto LABEL_35;
    }
    v8 = 0LL;
    v11 = 1;
  }
  else
  {
    v11 = 0;
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
  v12 = KeAbPreAcquire((__int64)(P + 5), 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 10, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 5, (__int64)v12, (__int64)(P + 5));
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  MiAdvanceVadView((__int64)P, v8);
  if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
  {
    MiClearVadTrimBehind((__int64)P, 0);
    P[15] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)(P + 5));
  if ( !(unsigned int)Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = P[6] & 0x70;
    if ( v14 == 16 || v14 == 64 )
    {
      if ( MiResidentPagesForSpan(
             (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
             ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
             0) )
      {
        ProcessPartition = (ULONG *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !(unsigned int)MiChargeResident(ProcessPartition, v16, 128LL) )
        {
          if ( (P[6] & 0x70) == 0x40 )
            MiFreeRotateView((__int64)P);
          if ( v11 )
            MiFreePlaceholderStorage(P);
          goto LABEL_34;
        }
      }
    }
  }
  *P = *(_QWORD *)a2;
  result = 0LL;
  *(_QWORD *)a2 = P;
  return result;
}
