/*
 * XREFs of CemRcTableInitialize @ 0x180065344
 * Callers:
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180065234 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800780C4 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081334 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x180083FB4 (-HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableInitialize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  a2[5] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  RtlInitializeSRWLock(a2 + 2);
  result = RtlInitializeConditionVariable(a2 + 4);
  a2[3] = a1;
  return result;
}
