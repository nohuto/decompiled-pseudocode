/*
 * XREFs of LsaCallAuthenticationPackage @ 0x14078F340
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall LsaCallAuthenticationPackage(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx

  v8 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v8;
}
