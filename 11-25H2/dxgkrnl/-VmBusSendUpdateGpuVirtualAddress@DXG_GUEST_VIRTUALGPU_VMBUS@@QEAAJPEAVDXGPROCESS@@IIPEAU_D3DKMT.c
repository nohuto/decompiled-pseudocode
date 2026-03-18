/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x14032AE48
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x14032B360 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1400344F4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // edi
  struct DXGKVMB_COMMAND_BASE *v12; // rbx
  int HostProcess; // eax
  D3DKMT_HANDLE v15; // eax
  __int64 v16; // r9
  unsigned int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v22; // r12d
  int Ptr_high; // r15d
  UINT i; // r14d
  unsigned __int64 v25; // rdi
  int v26; // eax
  unsigned int v27; // r8d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  struct _EX_RUNDOWN_REF *v30; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+68h] [rbp-190h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-188h] BYREF
  __int64 v34; // [rsp+78h] [rbp-180h]
  char v35; // [rsp+80h] [rbp-178h]
  _BYTE v36[24]; // [rsp+88h] [rbp-170h] BYREF
  struct DXGKVMB_COMMAND_BASE *v37[2]; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp-148h]

  v34 = *((_QWORD *)this + 9);
  v35 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    v8 = -1073741130;
LABEL_9:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    return v8;
  }
  v9 = (unsigned __int64)a5->NumOperations << 6;
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v31 = v11;
  if ( (unsigned int)v10 >= 0x20000 || (unsigned int)(v10 + 56) > 0x20000 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    return 3221225659LL;
  }
  *(_OWORD *)v37 = 0LL;
  v38 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v37, this, v10 + 56, 0LL, 0LL, 0LL);
  v12 = v37[0];
  if ( !v37[0] )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
    v8 = -1073741801;
    goto LABEL_9;
  }
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  *(_QWORD *)v12 = 0LL;
  *((_DWORD *)v12 + 2) = HostProcess;
  *((_BYTE *)v12 + 12) = 0;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *((_QWORD *)v12 + 2) = 19LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, a2);
  v15 = (a5->hFenceObject >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)a2 + 74) )
  {
    v16 = *((_QWORD *)a2 + 35);
    v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
    if ( a5->hFenceObject >> 30 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 )
    {
      v18 = v17 & 0x1F;
      if ( v18 )
      {
        if ( v18 == 11 )
        {
          v19 = *(_QWORD *)(v16 + 16LL * v15);
          goto LABEL_17;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v19 = 0LL;
LABEL_17:
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 44);
    *((_QWORD *)v12 + 3) = a5->FenceValue;
    *((_DWORD *)v12 + 12) = a5->Flags.Value;
    *((_DWORD *)v12 + 9) = a4;
    *((_DWORD *)v12 + 8) = a3;
    *((_DWORD *)v12 + 10) = v20;
    *((_DWORD *)v12 + 11) = a5->NumOperations;
    Operations = a5->Operations;
    if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v10) < Operations
      || (unsigned __int64)Operations + v10 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove((char *)v12 + 56, Operations, (unsigned int)v10);
    v22 = 0;
    Ptr_high = 0;
    for ( i = 0; i < a5->NumOperations; ++i )
    {
      v25 = (unsigned __int64)i << 6;
      v26 = *(_DWORD *)((char *)v12 + v25 + 56);
      if ( !v26 || v26 == 3 )
      {
        v27 = *(_DWORD *)((char *)v12 + v25 + 80);
        if ( v27 == v22 )
        {
          *(_DWORD *)((char *)v12 + v25 + 80) = Ptr_high;
        }
        else
        {
          v30 = 0LL;
          AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                          (__int64)a2,
                                                          (DXGALLOCATIONREFERENCE *)&v32,
                                                          v27);
          DXGALLOCATIONREFERENCE::MoveAssign(&v30, AllocationUnsafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
          if ( !v30 )
          {
            v11 = -1073741811;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
            goto LABEL_19;
          }
          v22 = *(_DWORD *)((char *)v12 + v25 + 80);
          Ptr_high = HIDWORD(v30[2].Ptr);
          *(_DWORD *)((char *)v12 + v25 + 80) = Ptr_high;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
        }
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v37[1], v37[0], v38);
  }
  else
  {
    WdLogSingleEntry2(3LL, a5->hFenceObject, -1073741811LL);
    WdLogGlobalForLineNumber = 12635;
LABEL_19:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  return v11;
}
