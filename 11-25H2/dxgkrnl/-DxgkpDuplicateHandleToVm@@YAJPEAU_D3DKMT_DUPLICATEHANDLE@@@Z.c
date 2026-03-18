/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401DC00C
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1401DEAC0 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401DBD98 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1401E6DE0 (-FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1402240E4 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x14022C114 (-BeginTransaction@DXGVIRTUALMACHINE@@QEAAXPEAUDXGKVMB_GUEST_TRANSACTION@@@Z.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x14022C308 (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  struct DXGVIRTUALMACHINE *v1; // rsi
  void *v3; // rcx
  unsigned int v4; // r15d
  NTSTATUS v5; // eax
  struct _DXGSHAREDALLOCOBJECT *v6; // r12
  int v7; // ebx
  ACCESS_MASK GrantedAccess; // r14d
  struct DXGVIRTUALMACHINE *VirtualMachineByGuidAndAcquireLock; // rax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD **v12; // rax
  int v13; // eax
  DXGSHAREDVMOBJECT *v14; // r14
  struct DXGSHAREDVMOBJECT *v16; // [rsp+30h] [rbp-39h] BYREF
  union _LARGE_INTEGER v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v19; // [rsp+48h] [rbp-21h]
  signed __int64 v20; // [rsp+50h] [rbp-19h]
  struct _KEVENT Event; // [rsp+58h] [rbp-11h] BYREF
  int v22; // [rsp+70h] [rbp+7h]
  __int64 *v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+80h] [rbp+17h]
  unsigned int v25; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v1 = 0LL;
  v16 = 0LL;
  v3 = *(void **)a1;
  v4 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v25 = 0;
  v5 = ObReferenceObjectByHandle(v3, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v6 = (struct _DXGSHAREDALLOCOBJECT *)Object;
  v7 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)a1);
    WdLogGlobalForLineNumber = 3177;
    goto LABEL_18;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    GrantedAccess = *((_DWORD *)a1 + 10);
  VirtualMachineByGuidAndAcquireLock = FindVirtualMachineByGuidAndAcquireLock((struct _GUID *)((char *)a1 + 8));
  v1 = VirtualMachineByGuidAndAcquireLock;
  if ( !VirtualMachineByGuidAndAcquireLock )
  {
    WdLogSingleEntry4(
      3LL,
      *((unsigned int *)a1 + 2),
      *((unsigned __int16 *)a1 + 6),
      *((unsigned __int16 *)a1 + 7),
      *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 3202;
    v7 = -1073741275;
    goto LABEL_22;
  }
  if ( *((_DWORD *)VirtualMachineByGuidAndAcquireLock + 98) < 0x14u )
  {
    v7 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
    WdLogGlobalForLineNumber = 3214;
LABEL_21:
    _InterlockedDecrement((volatile signed __int32 *)v1 + 20);
    ExReleasePushLockSharedEx((char *)v1 + 64, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  v7 = DxgkpCreateSharedVmObjectsForExistingResource(
         *((struct DXGPROCESSVMWP **)VirtualMachineByGuidAndAcquireLock + 7),
         *(void **)a1,
         v6,
         &v16,
         &v25);
  if ( v7 < 0 )
  {
    v4 = v25;
  }
  else
  {
    v22 = 258;
    v20 = _InterlockedIncrement64(&qword_14015DC68);
    v24 = 8;
    v23 = &v26;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DXGVIRTUALMACHINE::BeginTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)&v18);
    v4 = v25;
    v10 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
            (struct DXGVIRTUALMACHINE *)((char *)v1 + 160),
            v6,
            v25,
            *((void **)a1 + 3),
            GrantedAccess,
            (struct DXGKVMB_GUEST_TRANSACTION *)&v18);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v17.QuadPart = -50000000LL;
      v13 = DXGVIRTUALMACHINE::EndTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)&v18, &v17);
      v7 = v13;
      if ( v13 >= 0 )
        goto LABEL_21;
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 3255;
    }
    else
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 3245;
      DXGPUSHLOCK::AcquireExclusive((struct DXGVIRTUALMACHINE *)((char *)v1 + 344));
      v11 = v18;
      v12 = v19;
      if ( *(__int64 **)(v18 + 8) != &v18 || *v19 != &v18 )
        __fastfail(3u);
      *v19 = (_QWORD *)v18;
      *(_QWORD *)(v11 + 8) = v12;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v1 + 44) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v1 + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
LABEL_18:
  v26 = 0LL;
  v14 = v16;
  if ( v16 )
  {
    DXGPROCESS::FreeResourceHandleNoRefSafe(*((DXGPROCESS **)v1 + 7), v4);
    DXGSHAREDVMOBJECT::ReleaseReference(v14);
  }
  if ( v1 )
    goto LABEL_21;
LABEL_22:
  *((_QWORD *)a1 + 4) = v26;
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
