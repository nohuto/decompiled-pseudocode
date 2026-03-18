/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14
 * Callers:
 *     DxgkDeviceIoctl @ 0x140070210 (DxgkDeviceIoctl.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020C720 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x14020E35C (-PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140216BD0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021A6C0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402212C0 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x14034C300 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x14034CBB0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140048240 (-InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x14004D99C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1400779AC (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140336450 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x14039B41C (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
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
  struct _EPROCESS *v11; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v14; // rax
  DXGPROCESS *v15; // rsi
  struct DXGGLOBAL *v16; // rax
  DXGPROCESSVM *v17; // rax
  __int64 v18; // rsi
  struct DXGGLOBAL *v19; // rax
  DXGPROCESSVM *v20; // rsi
  struct DXGGLOBAL *Global; // rax
  struct _KPROCESS *v22; // rcx
  HANDLE ProcessId; // rax
  __int64 v24; // rcx
  void *v25; // r12
  struct _EPROCESS *v26; // rax
  __int64 ProcessServerSilo; // rax
  int v28; // r14d
  DXGGLOBAL *v29; // rax
  int v30; // ebx
  int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rbp
  _QWORD *v38; // rax
  __int64 v39; // rbx
  _BYTE v40[16]; // [rsp+50h] [rbp-28h] BYREF

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
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v40);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  if ( a2 )
  {
    v20 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(640LL);
    if ( !v20 )
      goto LABEL_36;
    Global = DXGGLOBAL::GetGlobal();
    v17 = DXGPROCESSVM::DXGPROCESSVM(v20, Global, v11, a2, a3);
    goto LABEL_16;
  }
  v14 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v11);
  if ( v14 )
  {
    *a1 = v14;
    goto LABEL_37;
  }
  if ( !a4 )
  {
    v15 = (DXGPROCESS *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(592LL);
    if ( v15 )
    {
      v16 = DXGGLOBAL::GetGlobal();
      v17 = DXGPROCESS::DXGPROCESS(v15, v16, v11);
LABEL_16:
      v18 = (__int64)v17;
LABEL_17:
      if ( v18 )
        goto LABEL_18;
LABEL_36:
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 264;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate DXGPROCESS",
        264LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v10 = -1073741801;
      goto LABEL_37;
    }
LABEL_13:
    v18 = 0LL;
    goto LABEL_17;
  }
  v18 = DXGQUOTAALLOCATOR<256,1348958276>::operator new(624LL);
  if ( !v18 )
    goto LABEL_13;
  v19 = DXGGLOBAL::GetGlobal();
  DXGPROCESS::DXGPROCESS((DXGPROCESS *)v18, v19, v11);
  *(_DWORD *)(v18 + 408) |= 0x80u;
  *(_QWORD *)v18 = &DXGPROCESSVMWP::`vftable';
  *(_QWORD *)(v18 + 592) = 0LL;
  *(_QWORD *)(v18 + 600) = 0LL;
  *(_QWORD *)(v18 + 608) = 0LL;
  *(_BYTE *)(v18 + 616) = 0;
LABEL_18:
  v22 = *(struct _KPROCESS **)(v18 + 56);
  if ( v22 )
  {
    ProcessId = PsGetProcessId(v22);
    v24 = *(_QWORD *)(v18 + 56);
    v25 = ProcessId;
  }
  else
  {
    v25 = 0LL;
    v24 = 0LL;
  }
  if ( a4 )
  {
    v26 = a5;
    if ( !a5 )
      v26 = v11;
    *(_QWORD *)(v18 + 608) = v26;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v24);
  *(_DWORD *)(v18 + 408) = *(_DWORD *)(v18 + 408) & 0xFFFFFDFF | ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0
                                                                ? 0
                                                                : 0x200);
  v28 = DXGPROCESS::Initialize((DXGPROCESS *)v18, v25);
  if ( v28 >= 0 )
  {
    if ( (*(_DWORD *)(v18 + 408) & 2) == 0 )
    {
      v29 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::InsertProcess(v29, (struct DXGPROCESS *)v18);
    }
    if ( a2 )
    {
      v35 = (_QWORD *)(v18 + 608);
      v36 = *(_QWORD *)(*(_QWORD *)(v18 + 592) + 592LL);
      v37 = v36 + 128;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v36 + 128));
      v38 = *(_QWORD **)(v36 + 32);
      v39 = v36 + 24;
      if ( *v38 != v39 )
        __fastfail(3u);
      *v35 = v39;
      *(_QWORD *)(v18 + 616) = v38;
      *v38 = v35;
      *(_QWORD *)(v39 + 8) = v35;
      *(_QWORD *)(v37 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v37, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      PsSetProcessDxgProcess(v11, v18);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v30 = *(_DWORD *)(v18 + 408);
        v31 = *(_DWORD *)(v18 + 488);
        v32 = DXGPROCESS::GetProcessID((DXGPROCESS *)v18);
        McTemplateK0pxqt_EtwWriteTransfer(v33, &EventCreateDxgProcess, v34, v18, v32, v31, v30);
      }
    }
    *a1 = (struct DXGPROCESS *)v18;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
    return 0LL;
  }
  (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
  v10 = v28;
LABEL_37:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
  return v10;
}
