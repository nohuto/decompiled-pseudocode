/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DA1C
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18000CCD0 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DBAC (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DCC8 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z @ 0x180035798 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180041778 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800610E0 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180062A2C (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        struct _HAM_APPLICATION *a4,
        unsigned int a5,
        struct _RM_ACTIVITY_HOST **a6)
{
  char *Heap; // rax
  char *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  int State; // edi
  void *v18; // rdx

  Heap = (char *)HampAllocateHeap(0x5B8uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x5B8uLL);
    *((_QWORD *)v11 + 6) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)v11 + 7) = a2;
    RmpObjectHeaderInitialize(v11, *((_QWORD *)a3 + 68), 0LL);
    HampHostInitialize(a5, a3, a4, (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64));
    v12 = v11 + 1136;
    v13 = 2LL;
    do
    {
      v12[2] = 0LL;
      v12[1] = v12;
      *v12 = v12;
      v12 += 3;
      --v13;
    }
    while ( v13 );
    v14 = *((_DWORD *)a3 + 133);
    v15 = RmpPolicyResizeScratchBuffers((struct _RTL_BITMAP *)a2 + 10, ++*((_DWORD *)a2 + 52), v14);
    State = 0;
    if ( v15 < 0 )
      State = v15;
    if ( State < 0
      || (State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v11), State < 0)
      || (*((_DWORD *)v11 + 317) |= 0x180u,
          State = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v11, 2 * (a5 & 1) + 1, (void **)v11 + 153),
          State < 0)
      || (State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64),
                    a5),
          State < 0) )
    {
      v18 = (void *)*((_QWORD *)v11 + 153);
      if ( v18 )
        RmpSystemDereferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v11, v18);
      HampFreeHeap(v11);
    }
    else
    {
      State = 0;
      *a6 = (struct _RM_ACTIVITY_HOST *)v11;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
