/*
 * XREFs of ExpCreateCrossVmEvent @ 0x1407B5B94
 * Callers:
 *     NtCreateCrossVmEvent @ 0x1407ABF10 (NtCreateCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCreateCrossVmEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EX_RUNDOWN_REF *v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( !a6 )
    v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v7) )
  {
    v8 = guard_dispatch_icall_no_overrides(&v10);
    if ( v8 >= 0 )
      *a1 = v10;
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v8;
}
