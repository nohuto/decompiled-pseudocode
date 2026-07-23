/*
 * XREFs of ExpCreateCrossVmMutant @ 0x1407C5888
 * Callers:
 *     NtCreateCrossVmMutant @ 0x1407C2780 (NtCreateCrossVmMutant.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCreateCrossVmMutant(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EX_RUNDOWN_REF *v7; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( !a6 )
    v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v7) )
  {
    v9 = guard_dispatch_icall_no_overrides(&v11, a2);
    if ( v9 >= 0 )
      *a1 = v11;
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v9;
}
