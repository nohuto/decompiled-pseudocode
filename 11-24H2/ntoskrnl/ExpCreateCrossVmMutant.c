/*
 * XREFs of ExpCreateCrossVmMutant @ 0x1407C5428
 * Callers:
 *     NtCreateCrossVmMutant @ 0x1407C3B80 (NtCreateCrossVmMutant.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCreateCrossVmMutant(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  struct _EX_RUNDOWN_REF *v7; // rdi
  int v11; // ebx
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF

  v13 = 0LL;
  v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( !a6 )
    v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v7) )
  {
    v11 = guard_dispatch_icall_no_overrides(&v13, a2, a3, a4);
    if ( v11 >= 0 )
      *a1 = v13;
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v11;
}
