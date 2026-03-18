/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceDriverPage @ 0x1403FF148 (MiReferenceDriverPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  ULONG_PTR *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r13
  __int64 v10; // r15
  ULONG_PTR v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // edi
  int updated; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  int v22; // eax
  ULONG_PTR *v23; // [rsp+70h] [rbp+8h]

  v3 = a3;
  v4 = 0LL;
  v5 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (ULONG_PTR *)(v5 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 64) >> 12));
  v23 = v6;
  v9 = MiLockWorkingSetShared((__int64)&unk_140E37B00);
  v10 = 0LL;
  while ( v5 < (unsigned __int64)v6 )
  {
    if ( !v4 )
      goto LABEL_19;
    if ( (v5 & 0xFFF) == 0 )
    {
      MiUnlockPageTable((__int64)&unk_140E37B00, v4);
LABEL_19:
      v4 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37B00, v4, v7, v8);
    }
    v11 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_8;
    if ( (v11 & 1) != 0 )
    {
      v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
      v13 = 48 * v12 - 0x220000000000LL;
      if ( *(__int64 *)(v13 + 40) < 0 )
      {
        v6 = v23;
        v5 += 8LL;
        v10 += 8LL;
      }
      else
      {
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait();
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v12 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTable((__int64)&unk_140E37B00, v4);
        v4 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v9);
        updated = MiUpdateImagePfnImportRelocations(a2, v3, v10 >> 3, v12);
        MiLockPageInline(48 * v12 - 0x220000000000LL);
        v19 = 0LL;
        v20 = 0LL;
        if ( updated != 1 )
        {
          v19 = MiCaptureDirtyBitToPfn(v13);
          v20 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v13, v16, v17, v18);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v19 )
          MiReleasePageFileInfo(v20, v19, 1);
        MiLockWorkingSetSharedAtDpc((__int64)&unk_140E37B00);
        v3 = a3;
        v5 += 8LL;
        v10 += 8LL;
LABEL_17:
        v6 = v23;
      }
    }
    else
    {
      if ( (v11 & 0x400) == 0 )
      {
        MiUnlockPageTable((__int64)&unk_140E37B00, v4);
        v4 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v9);
        v22 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16, 0, 0LL);
        if ( v22 < 0 )
          KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v5 << 25) >> 16, v11, v22);
        MiLockWorkingSetShared((__int64)&unk_140E37B00);
        goto LABEL_17;
      }
LABEL_8:
      v6 = v23;
      v5 += 8LL;
      v10 += 8LL;
    }
  }
  if ( v4 )
    MiUnlockPageTable((__int64)&unk_140E37B00, v4);
  return MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v9);
}
