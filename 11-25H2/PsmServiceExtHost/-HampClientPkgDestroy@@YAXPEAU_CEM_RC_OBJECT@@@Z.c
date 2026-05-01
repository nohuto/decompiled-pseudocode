/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800679B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EDC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009F6C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x180041614 (CemRcObjectCleanup.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800835B4 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _HAM_PACKAGE *v2; // rbx
  char v3; // si
  _DWORD *v4; // rdx

  CemRcObjectCleanup(a1);
  v2 = (struct _HAM_PACKAGE *)*((_QWORD *)a1 + 7);
  HampPkgAcquireLockExclusive(v2);
  v3 = 1;
  v4 = (_DWORD *)((char *)v2 + 340);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
    *v4 &= 0xFFFFFFFC;
  if ( (*((_BYTE *)a1 + 64) & 2) != 0 )
    *v4 &= ~4u;
  else
    v3 = 0;
  HampPkgReleaseLockExclusive(v2);
  if ( v3 )
    HampPkgNotifyDebugModeChanged(v2);
  CemRcObjectDereference(v2);
  HampFreeHeap(a1);
}
