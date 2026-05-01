/*
 * XREFs of ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064E3C
 * Callers:
 *     ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x18006D784 (-HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z.c)
 * Callees:
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180013C1C (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180040BC8 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064EF0 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        struct _HAM_SESSION **a3)
{
  void *v5; // rbp
  struct _HAM_SESSION *v6; // rax
  int v7; // eax
  struct _HAM_RC_TREE_NODE *v8; // rdi
  unsigned int v9; // ebx
  struct _HAM_RC_TREE_NODE *v11; // [rsp+30h] [rbp-28h] BYREF
  struct _HAM_RC_TREE_NODE *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v5 = (void *)a2;
  v6 = HampSessionFindInManager(a1, a2);
  if ( v6 )
  {
    *a3 = v6;
    return 0;
  }
  else
  {
    v7 = HampSessionCreate(a1, (unsigned int)v5, &v12);
    v8 = v12;
    v9 = v7;
    if ( v7 >= 0 )
    {
      HamRcNodeFindOrInsertChild(
        (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352),
        v5,
        (int (*)(void *, void *))HampSessionCompareById,
        v12,
        &v11);
      v9 = 0;
      if ( v11 == v8 )
      {
        *a3 = v8;
        return v9;
      }
      *a3 = v11;
    }
    if ( v8 )
      CemRcObjectDereference(v8);
  }
  return v9;
}
