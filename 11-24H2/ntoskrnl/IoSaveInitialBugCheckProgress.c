/*
 * XREFs of IoSaveInitialBugCheckProgress @ 0x14058F140
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405907DC (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoSaveInitialBugCheckProgress(int a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0LL;
  v4 = 8;
  if ( !BugCheckSaveInitialProgressCalled
    && IopReportBugCheckProgress
    && (unsigned __int8)IopBugCheckProgressEfiVariableServicesAvailable() )
  {
    BugCheckProgressEfiCalled = 1;
    if ( CrashdmpDumpBlock )
    {
      LODWORD(v3) = a1;
      WORD2(v3) = MEMORY[0xFFFFF780000002C4];
      HIWORD(v3) = *(_WORD *)(CrashdmpDumpBlock + 1408) + 1;
      guard_dispatch_icall_no_overrides(L"BugCheckCode", BUGCHECK_EFI_GUID);
      v2 = L"BugCheckParameter1";
    }
    else
    {
      if ( (unsigned int)HalGetEnvironmentVariableEx(
                           L"BugCheckCode",
                           (__int64)BUGCHECK_EFI_GUID,
                           (__int64)&v3,
                           &v4,
                           0LL) )
      {
LABEL_9:
        BugCheckProgressEfiCalled = 0;
        BugCheckSaveInitialProgressCalled = 1;
        return;
      }
      LODWORD(v3) = a1;
      ++HIWORD(v3);
      WORD2(v3) = MEMORY[0xFFFFF780000002C4];
      guard_dispatch_icall_no_overrides(L"BugCheckCode", BUGCHECK_EFI_GUID);
      guard_dispatch_icall_no_overrides(L"BugCheckParameter1", BUGCHECK_EFI_GUID);
      v2 = L"BugCheckProgress";
    }
    guard_dispatch_icall_no_overrides(v2, BUGCHECK_EFI_GUID);
    goto LABEL_9;
  }
}
