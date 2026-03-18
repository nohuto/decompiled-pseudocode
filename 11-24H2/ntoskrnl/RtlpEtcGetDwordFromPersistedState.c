/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x1405EF1AC
 * Callers:
 *     RtlpEcReadPolicyState @ 0x1405EF108 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140476998 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EF278 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405EF3DC (RtlpGetPersistedRegistryLocation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS PersistedRegistryLocation; // ebx
  size_t v9; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v11; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = a3;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( Pool2 )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Pool2, v9, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}
