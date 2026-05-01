/*
 * XREFs of ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003639C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180035BBC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035C10 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupProcessTerminations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_HOST_DEPENDENCY *i; // rax
  struct _HAM_HOST_DEPENDENCY *v2; // rbx
  unsigned int v3; // [rsp+58h] [rbp+10h] BYREF

  for ( i = HampDepGroupGetFirstDependency(a1); ; i = HampDepGroupGetNextDependency(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    if ( (*((_BYTE *)i + 32) & 7) == 5 )
    {
      v3 = 0;
      HampHostQueueTerminateEx(*((_QWORD *)i + 7), *((_DWORD *)i + 21), *((_DWORD *)i + 20), 0LL, 2, 0, 0LL, &v3);
    }
  }
}
