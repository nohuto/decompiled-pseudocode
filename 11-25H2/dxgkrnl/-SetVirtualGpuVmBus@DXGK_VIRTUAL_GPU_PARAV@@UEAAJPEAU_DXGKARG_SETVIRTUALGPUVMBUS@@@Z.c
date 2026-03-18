/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140210570
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x14007A6A8 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14007A6DC (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401E7624 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401E786C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1401E8568 (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x140215920 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // rdi
  int VmBusChannel; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _EPROCESS *v10; // r14
  struct DXGVIRTUALMACHINE *v11; // r15
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  int DxgProcess; // eax
  __int64 v20; // rdi
  const wchar_t *v21; // r9
  int v22; // edx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  DXGPROCESSVMWP *v29; // rdi
  unsigned __int8 v30; // bl
  __int64 v31; // rcx
  struct _EPROCESS *v32; // rax
  int v33; // eax
  struct DXGPROCESSVMWP **v34; // rcx
  __int64 v35; // rax
  _BYTE v36[32]; // [rsp+50h] [rbp-20h] BYREF
  struct DXGPROCESS *v37; // [rsp+B0h] [rbp+40h] BYREF
  struct _EPROCESS *v38; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  VmBusChannel = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 22, a2->VmBusHandle, this);
  if ( VmBusChannel < 0 )
    return (unsigned int)VmBusChannel;
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v36, (struct _KTHREAD **)Global + 57);
  v7 = *((_QWORD *)this + 12);
  if ( !v7 )
  {
    v8 = *v2;
    v38 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (int)((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_14015D5C8)(v8, &v38) < 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    else
    {
      v10 = v38;
      v11 = 0LL;
      if ( v38 )
      {
        CurrentProcess = PsGetCurrentProcess(v9);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( ProcessDxgProcess )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v16, v17) + 24) = ProcessDxgProcess;
          v18 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
          WdLogGlobalForLineNumber = 311;
          if ( (v18 & 1) == 0 )
          {
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            goto LABEL_13;
          }
          *((_QWORD *)this + 12) = ProcessDxgProcess;
          v11 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 592);
          if ( !v11 )
            goto LABEL_11;
          if ( !*((_QWORD *)v11 + 34) )
          {
            *(_QWORD *)(ProcessDxgProcess + 592) = 0LL;
            *((_QWORD *)v11 + 7) = 0LL;
LABEL_11:
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            *((_QWORD *)this + 12) = 0LL;
          }
        }
LABEL_13:
        if ( !*((_QWORD *)this + 12) )
        {
          DxgProcess = DXGPROCESS::CreateDxgProcess(
                         (struct DXGPROCESS **)this + 12,
                         0LL,
                         0LL,
                         a2->VmBusHandle != 0LL,
                         v10);
          v20 = DxgProcess;
          if ( DxgProcess < 0 )
          {
            WdLogSingleEntry1(6LL, DxgProcess);
            WdLogGlobalForLineNumber = 362;
LABEL_16:
            v21 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
            v22 = 262145;
LABEL_17:
            DxgkLogInternalTriageEvent(0LL, v22, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
            return (unsigned int)v20;
          }
        }
        goto LABEL_29;
      }
    }
    Current = DXGPROCESS::GetCurrent();
    v37 = Current;
    v25 = Current;
    if ( Current )
    {
      if ( (*((_DWORD *)Current + 102) & 0x80) != 0 )
      {
LABEL_25:
        v27 = *((_DWORD *)v25 + 102);
        if ( (v27 & 0x100) != 0 )
          v28 = *((_QWORD *)v25 + 74);
        else
          v28 = (unsigned __int64)v25 & -(__int64)((v27 & 0x80u) != 0);
        *((_QWORD *)this + 12) = v28;
LABEL_29:
        DXGPROCESS::AcquireReference(*((DXGPROCESS **)this + 12));
        v29 = (DXGPROCESSVMWP *)*((_QWORD *)this + 12);
        v30 = *((_BYTE *)this + 153);
        v32 = (struct _EPROCESS *)PsGetCurrentProcess(v31);
        v33 = DXGPROCESSVMWP::InitializeVmwpProcess(
                v29,
                a2->VmBusHandle,
                *((struct DXGPROCESS **)this + 11),
                v32,
                v10,
                v30,
                v11);
        v20 = v33;
        if ( v33 < 0 )
        {
          WdLogSingleEntry1(2LL, v33);
          v21 = L"Failed to setup VM worker process: 0x%I64x";
          WdLogGlobalForLineNumber = 399;
          v22 = 0x40000;
          goto LABEL_17;
        }
        v34 = *(struct DXGPROCESSVMWP ***)(*((_QWORD *)this + 12) + 592LL);
        *((_QWORD *)this + 13) = v34;
        VmBusChannel = DXGVIRTUALMACHINE::InitializeVirtualMachine(v34, a2->VmBusHandle, 1);
        if ( VmBusChannel < 0 )
        {
          WdLogSingleEntry0(2LL);
          v35 = 411LL;
LABEL_38:
          WdLogGlobalForLineNumber = v35;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to initalize virtual machine",
            v35,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_41;
        }
        DXGVIRTUALMACHINE::SetVmGuid(*((struct _GUID **)this + 13), (const struct _GUID *)this + 22);
        DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
        goto LABEL_40;
      }
      DXGPROCESS::DestroyDxgProcess(Current);
      v37 = 0LL;
    }
    v26 = DXGPROCESS::CreateDxgProcess(&v37, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL);
    v20 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(6LL, v26);
      WdLogGlobalForLineNumber = 380;
      goto LABEL_16;
    }
    v25 = v37;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v7 + 616) )
  {
    VmBusChannel = DXGVIRTUALMACHINE::InitializeVirtualMachine(
                     *((struct DXGPROCESSVMWP ***)this + 13),
                     a2->VmBusHandle,
                     1);
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry0(2LL);
      v35 = 438LL;
      goto LABEL_38;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
LABEL_40:
    *((_BYTE *)this + 156) = 0;
    goto LABEL_41;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 426;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"VMWP process failed to reset", 426LL, 0LL, 0LL, 0LL, 0LL);
  VmBusChannel = -1073741823;
LABEL_41:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
  return (unsigned int)VmBusChannel;
}
