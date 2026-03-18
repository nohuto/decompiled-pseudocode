/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034
 * Callers:
 *     DxgkDeviceIoctl @ 0x14006F840 (DxgkDeviceIoctl.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140206050 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140207C98 (-PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140210570 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1402140A0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1402DD520 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1402DDDD0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140047F78 (-InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x14004DFFC (--2-$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x140076F6C (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1403A495C (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        char a4,
        struct _EPROCESS *a5)
{
  __int64 CurrentProcess; // rax
  unsigned int v10; // edi
  struct _EPROCESS *v11; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGPROCESS *v21; // rbx
  struct DXGGLOBAL *v22; // rax
  DXGPROCESSVM *v23; // rax
  __int64 v24; // rbx
  struct DXGGLOBAL *v25; // rax
  __int64 v26; // rbp
  DXGPROCESSVM *v27; // rbx
  struct DXGGLOBAL *Global; // rax
  struct _KPROCESS *v29; // rcx
  HANDLE ProcessId; // rax
  __int64 v31; // rcx
  void *v32; // r13
  struct _EPROCESS *v33; // rax
  __int64 ProcessServerSilo; // rax
  int v35; // r12d
  DXGGLOBAL *v36; // rax
  __int64 v37; // r8
  _QWORD *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rsi
  _QWORD *v41; // rax
  __int64 v42; // rbx
  _BYTE v43[16]; // [rsp+50h] [rbp-38h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  v10 = 0;
  v11 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v43);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  if ( a2 )
  {
    v27 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(640LL, v14, v15, v16);
    if ( !v27 )
      goto LABEL_36;
    Global = DXGGLOBAL::GetGlobal();
    v23 = DXGPROCESSVM::DXGPROCESSVM(v27, Global, v11, a2, a3);
    goto LABEL_16;
  }
  v17 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v11);
  if ( v17 )
  {
    *a1 = v17;
    goto LABEL_37;
  }
  if ( !a4 )
  {
    v21 = (DXGPROCESS *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(592LL, v18, v19, v20);
    if ( v21 )
    {
      v22 = DXGGLOBAL::GetGlobal();
      v23 = DXGPROCESS::DXGPROCESS(v21, v22, v11);
LABEL_16:
      v24 = (__int64)v23;
LABEL_17:
      v26 = v24;
      if ( v24 )
        goto LABEL_18;
LABEL_36:
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 263;
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to allocate DXGPROCESS", 263LL, 0LL, 0LL, 0LL, 0LL);
      v10 = -1073741801;
      goto LABEL_37;
    }
LABEL_13:
    v24 = 0LL;
    goto LABEL_17;
  }
  v24 = DXGQUOTAALLOCATOR<256,1348958276>::operator new(624LL, v18, v19, v20);
  if ( !v24 )
    goto LABEL_13;
  v25 = DXGGLOBAL::GetGlobal();
  DXGPROCESS::DXGPROCESS((DXGPROCESS *)v24, v25, v11);
  *(_DWORD *)(v24 + 408) |= 0x80u;
  *(_QWORD *)v24 = &DXGPROCESSVMWP::`vftable';
  v26 = v24;
  *(_QWORD *)(v24 + 592) = 0LL;
  *(_QWORD *)(v24 + 600) = 0LL;
  *(_QWORD *)(v24 + 608) = 0LL;
  *(_BYTE *)(v24 + 616) = 0;
LABEL_18:
  v29 = *(struct _KPROCESS **)(v24 + 56);
  if ( v29 )
  {
    ProcessId = PsGetProcessId(v29);
    v31 = *(_QWORD *)(v24 + 56);
    v32 = ProcessId;
  }
  else
  {
    v32 = 0LL;
    v31 = 0LL;
  }
  if ( a4 )
  {
    v33 = a5;
    if ( !a5 )
      v33 = v11;
    *(_QWORD *)(v24 + 608) = v33;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v31);
  *(_DWORD *)(v24 + 408) = *(_DWORD *)(v24 + 408) & 0xFFFFFDFF | ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0
                                                                ? 0
                                                                : 0x200);
  v35 = DXGPROCESS::Initialize((DXGPROCESS *)v24, v32);
  if ( v35 >= 0 )
  {
    if ( (*(_DWORD *)(v24 + 408) & 2) == 0 )
    {
      v36 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::InsertProcess(v36, (struct DXGPROCESS *)v24);
    }
    if ( a2 )
    {
      v38 = (_QWORD *)(v24 + 608);
      v39 = *(_QWORD *)(*(_QWORD *)(v24 + 592) + 592LL);
      v40 = v39 + 128;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v39 + 128));
      v41 = *(_QWORD **)(v39 + 32);
      v42 = v39 + 24;
      if ( *v41 != v42 )
        __fastfail(3u);
      *v38 = v42;
      v38[1] = v41;
      *v41 = v38;
      *(_QWORD *)(v42 + 8) = v38;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v40 + 8) = 0LL;
      v24 = v26;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      PsSetProcessDxgProcess(v11, v24);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pxqt_EtwWriteTransfer(
          *(_QWORD *)(v24 + 64),
          &EventCreateDxgProcess,
          v37,
          v24,
          *(_QWORD *)(*(_QWORD *)(v24 + 64) + 80LL),
          *(_DWORD *)(v24 + 488),
          *(_DWORD *)(v24 + 408));
    }
    *a1 = (struct DXGPROCESS *)v24;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
    return 0LL;
  }
  (**(void (__fastcall ***)(__int64, __int64))v24)(v24, 1LL);
  v10 = v35;
LABEL_37:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  return v10;
}
