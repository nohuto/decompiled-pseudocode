/*
 * XREFs of ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800413B8
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800412A0 (-HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180041594 (CemRcObjectCleanup.c)
 */

void __fastcall HampClientCleanup(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  CemRcObjectCleanup(a1);
  v3 = *((_QWORD *)a1 + 26);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = (void *)*((_QWORD *)a1 + 23);
  if ( v4 )
    NtClose(v4);
  v5 = (void *)*((_QWORD *)a1 + 24);
  if ( v5 )
    NtClose(v5);
  if ( (*((_BYTE *)a1 + 144) & 1) == 0 && (*((_DWORD *)a1 + 30) || *((_DWORD *)a1 + 31)) )
    NtDeleteWnfStateName((char *)a1 + 120, v2);
}
