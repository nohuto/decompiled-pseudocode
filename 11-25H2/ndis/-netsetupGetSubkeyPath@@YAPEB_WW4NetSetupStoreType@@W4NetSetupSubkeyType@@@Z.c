/*
 * XREFs of ?netsetupGetSubkeyPath@@YAPEB_WW4NetSetupStoreType@@W4NetSetupSubkeyType@@@Z @ 0x140169B80
 * Callers:
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall netsetupGetSubkeyPath(int a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  const wchar_t *result; // rax

  if ( !a2 )
    return &word_1400FF1B8;
  v2 = a2 - 1;
  if ( !v2 )
    return L"\\Properties";
  v3 = v2 - 1;
  if ( !v3 )
    return L"\\Kernel";
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return L"\\Keywords";
    else
      return 0LL;
  }
  else
  {
    result = L"\\Kernel";
    if ( a1 )
      return L"\\CachedRuntimeProperties";
  }
  return result;
}
