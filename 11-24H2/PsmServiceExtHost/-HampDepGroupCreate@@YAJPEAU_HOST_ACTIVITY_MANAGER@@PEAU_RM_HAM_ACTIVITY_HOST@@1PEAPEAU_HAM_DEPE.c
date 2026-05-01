/*
 * XREFs of ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034838
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035034 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035260 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974 (-HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800707D0 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800711E0 (-HampDepGroupInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_DEPENDENCY_GROUP **a4)
{
  struct _HAM_DEPENDENCY_GROUP *Heap; // rax
  unsigned int v9; // edi
  struct _HAM_DEPENDENCY_GROUP *v10; // rbx
  int v11; // eax
  int v12; // esi

  Heap = (struct _HAM_DEPENDENCY_GROUP *)HampAllocateHeap(0x88uLL);
  v9 = 0;
  v10 = Heap;
  if ( Heap )
  {
    HampDepGroupInitialize(a1, Heap);
    v11 = TpAllocWork((char *)v10 + 120, HampDepGroupStateWorker, v10, *((_QWORD *)v10 + 4) + 976LL);
    v12 = 0;
    if ( v11 < 0 )
      v12 = v11;
    if ( v12 < 0 )
    {
      HampDepGroupDereference(v10);
      return (unsigned int)v12;
    }
    else
    {
      HampDepGroupEnterStateChangeUnsafe(v10);
      ++*((_QWORD *)v10 + 14);
      HampDepGroupAddHost(v10, a2);
      HampDepGroupAddHost(v10, a3);
      HampManagerAddDependencyGroup(a1, v10);
      *a4 = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
