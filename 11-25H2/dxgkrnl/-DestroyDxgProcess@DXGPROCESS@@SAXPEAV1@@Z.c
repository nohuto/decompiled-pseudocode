/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x140020420 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401E7CDC (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140210570 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1402140A0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021C190 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1402DDDD0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?RemoveProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140048E80 (-RemoveProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ @ 0x140077120 (-DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x14007719C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401E7B5C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401E8460 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402005A0 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403B87BC (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r14
  DXGGLOBAL *Global; // rax
  struct _KTHREAD **v5; // rdi
  struct DXGVAILOBJECT *v6; // rsi
  __int64 v7; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v9; // rdi
  struct _KTHREAD **v10; // rdi
  _BYTE v11[24]; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int8 v12[8]; // [rsp+48h] [rbp-21h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+Fh] BYREF

  if ( this )
  {
    v12[0] = 0;
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x24u, 0, &v13, v12);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
    v3 = v13;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v2, &ApcState);
    if ( (*((_DWORD *)this + 102) & 0x80) != 0 )
    {
      v5 = (struct _KTHREAD **)*((_QWORD *)this + 74);
      if ( v5 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, v5 + 8);
        v6 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v5);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
        if ( v6 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
          v7 = *((_QWORD *)v6 + 12);
          if ( v7 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v6 + 12)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v7);
              v9 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x800) == 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)&ActivityId,
                    (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ActivityId);
                  DXGPROCESS::SetVailObject(v9, 0LL);
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&ActivityId);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v6);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
        }
      }
    }
    else if ( *((_QWORD *)this + 72) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&ActivityId, (struct DXGPROCESS *)((char *)this + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ActivityId);
      v10 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ActivityId);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&ActivityId);
      if ( v10 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(v10 + 5), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
        DXGVAILOBJECT::DisableVmBusChannel(v10);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v10);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v10);
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGPROCESS *)((char *)this + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DXGPROCESS::Destroy(this, v3, 0);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    KeUnstackDetachProcess(&ApcState);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
    if ( (*((_DWORD *)this + 102) & 0x100) == 0 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      PsSetProcessDxgProcess(*((_QWORD *)this + 7), 0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RemoveProcess(Global, (__int64)this);
    if ( (*((_DWORD *)this + 102) & 0x80) != 0 )
      DXGPROCESSVMWP::DestroyVmWpProcess(this);
    DXGPROCESS::ReleaseReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    if ( v12[0] )
      DisplayScenarioContextDissociate(&v13);
  }
}
