/*
 * XREFs of ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x1800849F8
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001E70C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall HampTerminateDepInitialize(
        __int64 a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST *a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        void *a8)
{
  __int64 result; // rax

  memset_0(a8, 0, 0x58uLL);
  *((_BYTE *)a8 + 40) = 3;
  *((_QWORD *)a8 + 1) = a1;
  RmpAcquireGlobalLock();
  *((_QWORD *)a8 + 6) = RmHamHostReference(a2);
  *((_QWORD *)a8 + 7) = RmHamHostReference(a4);
  RmpReleaseGlobalLock();
  *((_QWORD *)a8 + 9) = a5;
  *((_DWORD *)a8 + 20) = a6;
  result = a7;
  *((_QWORD *)a8 + 8) = a3;
  *((_DWORD *)a8 + 21) = a7;
  return result;
}
