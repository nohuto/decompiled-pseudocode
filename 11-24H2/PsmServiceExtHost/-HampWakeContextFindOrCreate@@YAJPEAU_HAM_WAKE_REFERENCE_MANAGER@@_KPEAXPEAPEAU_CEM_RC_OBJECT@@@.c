/*
 * XREFs of ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x1800405B0
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800416F8 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C00 (CemRcTableFindOrInsertEx.c)
 *     ?HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180040E30 (-HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@.c)
 *     ?HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z @ 0x180040F00 (-HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180041038 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800410B0 (-HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18004116C (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextFindOrCreate(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        unsigned __int64 a2,
        void *a3,
        struct _CEM_RC_OBJECT **a4)
{
  struct _HAM_HOST_WAKE_CONTEXT *Heap; // rdi
  unsigned int v9; // r12d
  int State; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-50h] BYREF
  struct _CEM_RC_OBJECT *v13; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  _OWORD JobInformation[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+70h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  Heap = (struct _HAM_HOST_WAKE_CONTEXT *)HampAllocateHeap(0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  ReturnLength = 0;
  v16 = 0;
  memset(JobInformation, 0, sizeof(JobInformation));
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &ReturnLength);
  v9 = v16;
  HampWakeContextInitialize(a1, a2, v16, Heap);
  State = HampWakeContextAllocateState(Heap, a3);
  if ( State < 0 )
    goto LABEL_8;
  HampWakeManagerAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
  {
    State = -1073741077;
    HampWakeManagerReleaseLockShared(a1);
    goto LABEL_8;
  }
  *(_QWORD *)&v14 = a2;
  DWORD2(v14) = v9;
  CemRcTableFindOrInsertEx(
    (_DWORD)a1 + 32,
    (unsigned int)&v14,
    (unsigned int)HampWakeContextTreeCompareByHostId,
    (_DWORD)Heap);
  HampWakeManagerReleaseLockShared(a1);
  if ( v13 != Heap )
  {
    *a4 = v13;
    State = 0;
    goto LABEL_8;
  }
  State = HampWakeContextStart(Heap);
  if ( State < 0 )
  {
LABEL_8:
    CemRcObjectDereference(Heap);
    return (unsigned int)State;
  }
  *a4 = Heap;
  return 0;
}
