/*
 * XREFs of ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x1800434C4
 * Callers:
 *     ?HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@@Z @ 0x180043320 (-HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18006A35C (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 *     ?HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_USER_ENTRY@@@Z @ 0x18006E9E4 (-HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KE.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall HamRcNodeInitialize(
        void (*a1)(struct _CEM_RC_OBJECT *),
        struct _HAM_RC_TREE_NODE *a2,
        struct _HAM_RC_TREE_NODE *a3)
{
  memset_0(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 4) = (char *)a2 + 40;
  *(_OWORD *)((char *)a3 + 40) = 0LL;
  *(_OWORD *)((char *)a3 + 56) = 0LL;
  *(_OWORD *)((char *)a3 + 72) = 0LL;
  *((_QWORD *)a3 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 56);
  RtlInitializeConditionVariable((char *)a3 + 72);
  *((_QWORD *)a3 + 8) = a1;
}
