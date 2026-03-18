/*
 * XREFs of DpiPdoRemovePdoObjects @ 0x1402558C8
 * Callers:
 *     DpiFdoDestroyRelatedObjects @ 0x14023D714 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiPdoDestroyPendingPdoObjects @ 0x140254E40 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoRemovePdo @ 0x14042BBC4 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  bool v14; // si
  __int64 v15; // rax

  v3 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v7 = (struct _ERESOURCE *)(v3 + 3440);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3440), 1u);
  LOBYTE(v8) = 1;
  v9 = DpiAcquireCoreSyncAccessSafe(a1, v8);
  v12 = (_QWORD *)(v3 + 3600);
  v13 = *(_QWORD **)(v3 + 3600);
  v14 = v9 >= 0;
  while ( v13 != v12 )
  {
    v10 = v13 - 4;
    v13 = (_QWORD *)*v13;
    v15 = v10[6];
    if ( v15 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v15 + 64) + 509LL) = 0;
      LOBYTE(v11) = v14;
      DpiPdoRemovePdo(a1, v10, v11, 0LL, a3);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  if ( v14 )
  {
    LOBYTE(v10) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v10);
  }
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return 0LL;
}
