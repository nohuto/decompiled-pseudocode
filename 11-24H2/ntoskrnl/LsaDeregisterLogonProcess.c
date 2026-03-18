/*
 * XREFs of LsaDeregisterLogonProcess @ 0x14078F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall LsaDeregisterLogonProcess(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v2 = guard_dispatch_icall_no_overrides(a1, v3, v4, v5);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
