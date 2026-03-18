/*
 * XREFs of IoSaveInitialBugCheckProgress @ 0x14058E8F0
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x14058FFC0 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
      guard_dispatch_icall_no_overrides(L"BugCheckCode");
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
      guard_dispatch_icall_no_overrides(L"BugCheckCode");
      guard_dispatch_icall_no_overrides(L"BugCheckParameter1");
      v2 = L"BugCheckProgress";
    }
    guard_dispatch_icall_no_overrides(v2);
    goto LABEL_9;
  }
}
