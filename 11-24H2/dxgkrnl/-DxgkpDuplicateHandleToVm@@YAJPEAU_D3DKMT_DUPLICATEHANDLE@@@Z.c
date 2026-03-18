/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E129C
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1401E3CC0 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E1028 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1401EC7F0 (-FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x14022A9D0 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x140232B68 (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  struct DXGVIRTUALMACHINE *v1; // rsi
  void *v3; // rcx
  unsigned int v4; // r15d
  NTSTATUS v5; // eax
  struct _DXGSHAREDALLOCOBJECT *v6; // r12
  int v7; // ebx
  ACCESS_MASK GrantedAccess; // r15d
  struct DXGVIRTUALMACHINE *VirtualMachineByGuidAndAcquireLock; // rax
  struct DXGVIRTUALMACHINE **v10; // rcx
  int v11; // eax
  char ***v12; // rcx
  char **v13; // rax
  int v14; // eax
  DXGSHAREDVMOBJECT *v15; // r14
  unsigned int Object; // [rsp+20h] [rbp-49h]
  struct DXGSHAREDVMOBJECT *v18; // [rsp+30h] [rbp-39h] BYREF
  union _LARGE_INTEGER v19; // [rsp+38h] [rbp-31h] BYREF
  char ***v20; // [rsp+40h] [rbp-29h] BYREF
  char ****v21; // [rsp+48h] [rbp-21h]
  signed __int64 v22; // [rsp+50h] [rbp-19h]
  struct _KEVENT Event; // [rsp+58h] [rbp-11h] BYREF
  int v24; // [rsp+70h] [rbp+7h]
  __int64 *v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+80h] [rbp+17h]
  unsigned int v27; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID v29; // [rsp+E0h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v1 = 0LL;
  v18 = 0LL;
  v3 = *(void **)a1;
  v4 = 0;
  HandleInformation = 0LL;
  v29 = 0LL;
  v27 = 0;
  v5 = ObReferenceObjectByHandle(v3, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v29, &HandleInformation);
  v6 = (struct _DXGSHAREDALLOCOBJECT *)v29;
  v7 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)a1);
    WdLogGlobalForLineNumber = 3151;
    goto LABEL_19;
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
    WdLogGlobalForLineNumber = 3176;
    v7 = -1073741275;
    goto LABEL_23;
  }
  if ( *((_DWORD *)VirtualMachineByGuidAndAcquireLock + 98) < 0x14u )
  {
    v7 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
    WdLogGlobalForLineNumber = 3188;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)v1 + 20);
    ExReleasePushLockSharedEx((char *)v1 + 64, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  v7 = DxgkpCreateSharedVmObjectsForExistingResource(
         *((struct DXGPROCESSVMWP **)VirtualMachineByGuidAndAcquireLock + 7),
         *(void **)a1,
         v6,
         &v18,
         &v27);
  if ( v7 < 0 )
  {
    v4 = v27;
  }
  else
  {
    v24 = 258;
    v22 = _InterlockedIncrement64(&qword_140160C50);
    v26 = 8;
    v25 = &v28;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DXGPUSHLOCK::AcquireExclusive((struct DXGVIRTUALMACHINE *)((char *)v1 + 344));
    v10 = (struct DXGVIRTUALMACHINE **)*((_QWORD *)v1 + 48);
    if ( *v10 != (struct DXGVIRTUALMACHINE *)((char *)v1 + 376) )
      goto LABEL_17;
    v21 = (char ****)*((_QWORD *)v1 + 48);
    v20 = (char ***)((char *)v1 + 376);
    *v10 = (struct DXGVIRTUALMACHINE *)&v20;
    *((_QWORD *)v1 + 48) = &v20;
    *((_QWORD *)v1 + 44) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v1 + 344, 0LL);
    KeLeaveCriticalRegion();
    Object = GrantedAccess;
    v4 = v27;
    v11 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
            (struct DXGVIRTUALMACHINE *)((char *)v1 + 160),
            v6,
            v27,
            *((void **)a1 + 3),
            Object,
            (struct DXGKVMB_GUEST_TRANSACTION *)&v20);
    v7 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 3219;
      DXGPUSHLOCK::AcquireExclusive((struct DXGVIRTUALMACHINE *)((char *)v1 + 344));
      v12 = v20;
      v13 = (char **)v21;
      if ( v20[1] == (char **)&v20 && *v21 == (char ***)&v20 )
      {
        *v21 = v20;
        v12[1] = v13;
        *((_QWORD *)v1 + 44) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v1 + 344, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_19;
      }
LABEL_17:
      __fastfail(3u);
    }
    v19.QuadPart = -50000000LL;
    v14 = DXGVIRTUALMACHINE::EndTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)&v20, &v19);
    v7 = v14;
    if ( v14 >= 0 )
      goto LABEL_22;
    WdLogSingleEntry1(3LL, v14);
    WdLogGlobalForLineNumber = 3229;
  }
LABEL_19:
  v28 = 0LL;
  v15 = v18;
  if ( v18 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)v1 + 7), v4);
    DXGSHAREDVMOBJECT::ReleaseReference(v15);
  }
  if ( v1 )
    goto LABEL_22;
LABEL_23:
  *((_QWORD *)a1 + 4) = v28;
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
