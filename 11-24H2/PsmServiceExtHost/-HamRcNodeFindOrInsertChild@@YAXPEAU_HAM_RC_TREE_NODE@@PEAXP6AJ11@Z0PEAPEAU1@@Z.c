/*
 * XREFs of ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180040BC8
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014BA8 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064E3C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180040C00 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HamRcNodeFindOrInsertChild(
        struct _HAM_RC_TREE_NODE *a1,
        void *a2,
        int (*a3)(void *, void *),
        struct _HAM_RC_TREE_NODE *a4,
        struct _HAM_RC_TREE_NODE **a5)
{
  CemRcTableFindOrInsertEx((_DWORD)a1 + 40, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
  *a5 = 0LL;
}
