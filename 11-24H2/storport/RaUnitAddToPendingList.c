/*
 * XREFs of RaUnitAddToPendingList @ 0x14004D5D0
 * Callers:
 *     RaidUnitClaimIrp @ 0x14004FB60 (RaidUnitClaimIrp.c)
 * Callees:
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidUnitReenablePendingTimer @ 0x14002E7B0 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaUnitAddToPendingList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 *v9; // r14
  ULONGLONG UnbiasedInterruptTime; // r15
  __int64 v11; // r14
  __int64 v12; // rdi
  ULONG v13; // edx
  __int64 v14; // rbp
  int v15; // esi
  _QWORD *v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  char v24; // al
  struct _PROCESSOR_NUMBER v25; // ecx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-70h] BYREF
  __int128 v28; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v5 + 168);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(_DWORD *)(v6 + 40);
  else
    v7 = *(_DWORD *)(v6 + 20);
  if ( !*(_BYTE *)(a1 + 3368) && v7 <= 2 )
    v7 = 3;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 && *(_QWORD *)(v8 + 4904) )
  {
    v9 = (__int64 *)(a1 + 560);
LABEL_13:
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    goto LABEL_14;
  }
  v9 = (__int64 *)(a1 + 560);
  if ( (**(_BYTE **)(a1 + 560) & 1) != 0 )
    goto LABEL_13;
  UnbiasedInterruptTime = 0LL;
LABEL_14:
  *(_BYTE *)(v5 + 16) |= 2u;
  v11 = *v9;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ProcNumber = 0;
  v12 = v5 + 48;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  v13 = KeGetProcessorIndexFromNumber(&ProcNumber) % *(_DWORD *)(v11 + 8);
  *(_QWORD *)(v12 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v12 + 36) = v13;
  v14 = v11 + ((v13 + 1LL) << 6);
  if ( v7 - 1 > 0xFFFFFFFC )
    v7 = 10;
  v15 = 2 * v7;
  *(_DWORD *)(v12 + 32) = v15;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 40), &LockHandle);
  v16 = *(_QWORD **)(v14 + 8);
  if ( *v16 != v14 )
    goto LABEL_45;
  *(_QWORD *)v12 = v14;
  *(_QWORD *)(v12 + 8) = v16;
  *v16 = v12;
  *(_QWORD *)(v14 + 8) = v12;
  if ( *(_DWORD *)(v14 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v14 + 48) = v15;
  if ( (*(_BYTE *)v11 & 1) == 0 )
  {
    *(_DWORD *)(v12 + 48) &= ~1u;
    goto LABEL_29;
  }
  v17 = (__int64 *)(v14 + 16);
  v18 = *(_QWORD *)(v14 + 24);
  if ( v18 == v14 + 16 )
  {
LABEL_23:
    v19 = *v17;
    v20 = (_QWORD *)(v12 + 16);
    if ( *(__int64 **)(*v17 + 8) == v17 )
    {
      *v20 = v19;
      *(_QWORD *)(v12 + 24) = v17;
      *(_QWORD *)(v19 + 8) = v20;
      *v17 = (__int64)v20;
      *(_DWORD *)(v12 + 48) |= 1u;
      goto LABEL_29;
    }
LABEL_45:
    __fastfail(3u);
  }
  while ( *(_QWORD *)(v12 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v12 + 32)) < *(_QWORD *)(v18 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v18 + 16)) )
  {
    v18 = *(_QWORD *)(v18 + 8);
    if ( (__int64 *)v18 == v17 )
      goto LABEL_23;
  }
  *(_QWORD *)(v12 + 16) = *(_QWORD *)v18;
  *(_QWORD *)(*(_QWORD *)v18 + 8LL) = v12 + 16;
  *(_QWORD *)v18 = v12 + 16;
  *(_DWORD *)(v12 + 48) |= 1u;
  *(_QWORD *)(v12 + 24) = v18;
LABEL_29:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    v28 = 0LL;
    IoGetActivityIdIrp(a2, &v28);
    if ( byte_140171462 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v22, v21, (__int64)&v28, v23, 3);
  }
  if ( FeatureFixKcsanRacyAccessV2 )
    v24 = (*(_DWORD *)(a1 + 504) & 0x8000) != 0;
  else
    v24 = *(_BYTE *)(a1 + 505) >> 7;
  if ( !v24 && !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 4960LL) )
  {
    if ( !*(_BYTE *)(a1 + 3396) )
      return;
    goto LABEL_38;
  }
  v25 = (struct _PROCESSOR_NUMBER)1;
  if ( (*(_DWORD *)(a1 + 512) & 4) == 0 )
  {
    v25 = (struct _PROCESSOR_NUMBER)(unsigned __int8)_interlockedbittestandset(
                                                       (volatile signed __int32 *)(a1 + 512),
                                                       2u);
    ProcNumber = v25;
  }
  if ( *(_BYTE *)(a1 + 3396) )
  {
LABEL_38:
    RaidUnitReenablePendingTimer(a1, 1);
    *(_BYTE *)(a1 + 3396) = 0;
    return;
  }
  if ( !*(_DWORD *)&v25 )
    RaidUnitReenablePendingTimer(a1, 0);
}
