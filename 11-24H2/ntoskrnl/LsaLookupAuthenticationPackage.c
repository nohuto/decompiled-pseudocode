/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x14078F560
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall LsaLookupAuthenticationPackage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, a2, a3, v7);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
