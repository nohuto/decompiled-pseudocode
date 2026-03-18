/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427920
 * Callers:
 *     <none>
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x140037C48 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400559B8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14009A078 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14028943C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403B4660 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1403B86F4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403D7C7C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // r13d
  void *v13; // rsi
  struct _KTHREAD **v14; // r12
  unsigned int v15; // ecx
  __int64 RefCountedBuffer; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-49h]
  int v20; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+6Ch] [rbp-5h] BYREF
  _BYTE v22[24]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+17h] BYREF
  int v24; // [rsp+90h] [rbp+1Fh]

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6209;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Presentation is disabled", 6209LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6213;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      6213LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_6:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    return 0;
  }
  v20 = -1073741637;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) < 0x18u )
    goto LABEL_34;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  v7 = *((unsigned int *)a1 + 36) - 1160LL;
  if ( v7 < *(unsigned int *)(v5 + 1152) )
    v20 = -1073741811;
  if ( *(_DWORD *)(v5 + 72) != 9 )
  {
    Current = DXGPROCESS::GetCurrent(v7);
    if ( v20 != -1073741637 )
    {
LABEL_34:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
      v2 = 1;
      goto LABEL_35;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled() )
      goto LABEL_32;
    if ( !CIFlipPresentHistoryToken::IsIFlipSupported((const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72)) )
      goto LABEL_32;
    v10 = *((_DWORD *)Current + 102);
    if ( (v10 & 0x100) == 0 || (v10 & 4) == 0 || !*(_DWORD *)(v6 + 68) || !*(_QWORD *)(v6 + 96) )
      goto LABEL_32;
    v11 = *((_QWORD *)a1 + 12);
    v12 = *(_DWORD *)(v6 + 96);
    v13 = 0LL;
    v21 = 0;
    v14 = *(struct _KTHREAD ***)(v11 + 592);
    *(_DWORD *)(v6 + 132) &= ~0x2000000u;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 136) = 0LL;
    *(_QWORD *)(v6 + 120) = 0LL;
    *(_QWORD *)(v6 + 144) = 0LL;
    *(_DWORD *)(v6 + 884) = 0;
    *(_OWORD *)(v6 + 168) = 0LL;
    v15 = *(_DWORD *)(v6 + 1152);
    if ( v15 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v15, v9, 64LL);
      v13 = (void *)RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *(_DWORD *)(RefCountedBuffer + 8) = *(_DWORD *)(v6 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *(_DWORD *)(RefCountedBuffer + 12) = 1;
        memmove((void *)(RefCountedBuffer + 16), (const void *)(v6 + 1160), *(unsigned int *)(v6 + 1152));
      }
    }
    if ( *(_DWORD *)(v6 + 1152) && !v13 )
    {
LABEL_32:
      if ( v20 == -1073741637 )
        v20 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL),
                *(_DWORD *)(v6 + 24),
                *(_QWORD *)(v6 + 56),
                *(_QWORD *)(v6 + 32),
                *(_QWORD *)(v6 + 40),
                0LL,
                *(_QWORD *)(v6 + 48),
                *(_DWORD *)(v6 + 64),
                0,
                0LL,
                0xFFFFFFFF);
      goto LABEL_34;
    }
    v17 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v14,
            v12,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72),
            &v21);
    v20 = v17;
    if ( v17 >= 0 )
    {
      v18 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL),
              *(_DWORD *)(v6 + 24),
              *(_QWORD *)(v6 + 56),
              *(_QWORD *)(v6 + 32),
              *(_QWORD *)(v6 + 40),
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72),
              *(_QWORD *)(v6 + 48),
              *(_DWORD *)(v6 + 64),
              *(_DWORD *)(v6 + 68),
              v13,
              v21);
      v20 = v18;
      if ( v18 >= 0 )
        goto LABEL_30;
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 6292;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"SubmitPresentHistoryTokenFromVm failed",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72));
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 80), v17);
      v19 = *(_QWORD *)(v6 + 80);
      WdLogGlobalForLineNumber = 6274;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"QuerySwapChainBindingStatusFromVm failed. BindId = 0x%I64x, Status = 0x%I64x",
        v19,
        v20,
        0LL,
        0LL,
        0LL);
    }
    v20 = -1073741637;
LABEL_30:
    if ( v13 )
      CRefCountedBuffer::RefCountedBufferRelease(v13);
    goto LABEL_32;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6228;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Token of type D3DKMT_PM_FLIPMANAGER is unsupported for VAIL",
    6228LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v23 = 55580588LL;
  v24 = 0;
  RtlLogUnexpectedCodepath(&v23);
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  return v2;
}
