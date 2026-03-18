/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1401AB7D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14004411C (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006AFDC (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401BB9F0 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402DFBB8 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct _KTHREAD **Current; // rdi
  ADAPTER_DISPLAY **v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  const wchar_t *v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ADAPTER_DISPLAY *v15; // rcx
  DXGDEVICE *v16; // rsi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+50h] [rbp-138h] BYREF
  __int64 v31; // [rsp+58h] [rbp-130h]
  char v32; // [rsp+60h] [rbp-128h]
  unsigned int v33; // [rsp+68h] [rbp-120h] BYREF
  DXGADAPTER *v34[2]; // [rsp+70h] [rbp-118h] BYREF
  struct DXGADAPTER *v35; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v36[4]; // [rsp+88h] [rbp-100h] BYREF
  float v37[6]; // [rsp+98h] [rbp-F0h]
  _BYTE v38[144]; // [rsp+B0h] [rbp-D8h] BYREF

  v3 = (const void *)a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2127);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11183;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 11183LL, 0LL, 0LL, 0LL, 0LL);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v30);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v36 = 0LL;
  *(_OWORD *)v37 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v36, v3, 0x20uLL);
  v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v34, v36[0], Current, &v35, 1);
  v5 = (ADAPTER_DISPLAY **)v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(2LL, Current, v36[0]);
    WdLogGlobalForLineNumber = 11207;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v36[0],
      0LL,
      0LL,
      0LL);
LABEL_60:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v6);
    goto LABEL_61;
  }
  if ( !*((_QWORD *)v35 + 390) )
  {
    WdLogSingleEntry2(3LL, v35, -1073741811LL);
    WdLogGlobalForLineNumber = 11216;
    goto LABEL_60;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v35, 0LL);
  v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v38, v7 + 1, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 11230;
    v10 = L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!";
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  v15 = v5[390];
  if ( v36[1] >= *((_DWORD *)v15 + 24) )
  {
    WdLogSingleEntry2(3LL, v36[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11239;
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    goto LABEL_60;
  }
  v16 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, v36[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v5[390], v36[1]) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v5[390], v36[1]);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(v5[390], v36[1]) )
      goto LABEL_28;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v5[390], v36[1]);
  }
  v16 = VidPnSourceOwner;
LABEL_28:
  if ( !v16 )
  {
    WdLogSingleEntry2(3LL, v36[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11258;
    goto LABEL_21;
  }
  LODWORD(v9) = 0;
  v18 = *(float *)&v36[2];
  if ( *(float *)&v36[2] > 4.0
    || *(float *)&v36[2] < 0.2
    || (v19 = *(float *)&v36[3], *(float *)&v36[3] > 4.0)
    || *(float *)&v36[3] < 0.2
    || (v20 = v37[0], v37[0] > 4.0)
    || v37[0] < 0.2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11286;
    LODWORD(v9) = -1073741811;
    v20 = v37[0];
    v19 = *(float *)&v36[3];
    v18 = *(float *)&v36[2];
  }
  v21 = v37[1];
  if ( v37[1] > 0.6
    || v37[1] < -0.6
    || (v22 = v37[2], v37[2] > 0.6)
    || v37[2] < -0.6
    || (v23 = v37[3], v37[3] > 0.6)
    || v37[3] < -0.6 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11299;
    LODWORD(v9) = -1073741811;
    v23 = v37[3];
    v22 = v37[2];
    v21 = v37[1];
    v20 = v37[0];
    v19 = *(float *)&v36[3];
    v18 = *(float *)&v36[2];
  }
  v24 = 0LL;
  if ( (int)v9 >= 0 )
  {
    if ( v18 != 1.0 || v19 != 1.0 || v20 != 1.0 || v21 != 0.0 || v22 != 0.0 || v23 != 0.0 )
    {
      v24 = operator new(0x18uLL, 0x4B677844u, 256LL);
      if ( !v24 )
      {
        LODWORD(v9) = -1073741801;
        WdLogSingleEntry2(3LL, v16, -1073741801LL);
        WdLogGlobalForLineNumber = 11320;
        goto LABEL_15;
      }
      *(_DWORD *)v24 = v36[2];
      *(_DWORD *)(v24 + 4) = v36[3];
      *(_OWORD *)(v24 + 8) = *(_OWORD *)v37;
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v16, v36[1], (struct DXGK_GAMMA_ADJUSTMENT *)v24);
    v25 = 0LL;
    v33 = -1;
    while ( 1 )
    {
      v26 = v25++;
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v5, v36[1], v26, &v33) < 0 || v33 == -1 )
        break;
      v27 = MonitorNotifyDXGIGammaRampChange(v5, v33);
      v9 = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(2LL, v27);
        WdLogGlobalForLineNumber = 11358;
        v10 = L"Failed to setfullscreen gamma ramp, (Status == 0x%I64x)!";
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v30);
  return (unsigned int)v9;
}
