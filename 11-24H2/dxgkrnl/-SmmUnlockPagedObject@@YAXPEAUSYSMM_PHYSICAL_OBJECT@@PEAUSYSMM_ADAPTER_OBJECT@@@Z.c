/*
 * XREFs of ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140287C84
 * Callers:
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140048860 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DA@@@@Z @ 0x140050A70 (--$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DA@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140051190 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x140095AD0 (SmmUnmapLockedPagesFromIommu.c)
 *     SmmUnlockPages @ 0x140287DE0 (SmmUnlockPages.c)
 */

void __fastcall SmmUnlockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // rbp

  v2 = *((_QWORD *)a2 + 2);
  SmmAcquirePushLockExclusive<48>((__int64)a1 + 32);
  if ( !*((_DWORD *)a1 + 12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 476;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pPhysicalObject->PagedData.LockData.LockCount > 0",
      476LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 477;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a1 + 12))-- == 1 )
  {
    if ( *((_DWORD *)a2 + 8) )
    {
      WdLogSingleEntry5(0LL, 484LL, 5LL, a2, v2, *((_QWORD *)a1 + 7));
      WdLogGlobalForLineNumber = 491;
    }
    SmmUnmapLockedPagesFromIommu(v2, (__int64)a1, (__int64)a2, *((struct _MDL **)a1 + 7));
    SmmUnlockPages(*((PMDL *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
  }
  SmmReleasePushLockExclusive<1>((__int64)a1 + 32);
}
