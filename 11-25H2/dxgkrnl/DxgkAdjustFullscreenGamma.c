/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1401A92D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14004443C (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006B3BC (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401B9234 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402D78FC (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGPROCESS *Current; // rdi
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
  __int64 v17; // r9
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm8_4
  float v24; // xmm7_4
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-138h] BYREF
  __int64 v32; // [rsp+58h] [rbp-130h]
  char v33; // [rsp+60h] [rbp-128h]
  unsigned int v34; // [rsp+68h] [rbp-120h] BYREF
  DXGADAPTER *v35[2]; // [rsp+70h] [rbp-118h] BYREF
  struct DXGADAPTER *v36; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v37[4]; // [rsp+88h] [rbp-100h] BYREF
  float v38[6]; // [rsp+98h] [rbp-F0h]
  _BYTE v39[144]; // [rsp+B0h] [rbp-D8h] BYREF

  v3 = (const void *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2127);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2127);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11122;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 11122LL, 0LL, 0LL, 0LL, 0LL);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v37 = 0LL;
  *(_OWORD *)v38 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v37, v3, 0x20uLL);
  v36 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v35, v37[0], Current, &v36, 1);
  v5 = (ADAPTER_DISPLAY **)v36;
  if ( !v36 )
  {
    WdLogSingleEntry2(2LL, Current, v37[0]);
    WdLogGlobalForLineNumber = 11146;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v37[0],
      0LL,
      0LL,
      0LL);
LABEL_60:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v35, v6);
    goto LABEL_61;
  }
  if ( !*((_QWORD *)v36 + 390) )
  {
    WdLogSingleEntry2(3LL, v36, -1073741811LL);
    WdLogGlobalForLineNumber = 11155;
    goto LABEL_60;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v36, 0LL);
  v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v39, v7 + 1, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 11169;
    v10 = L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!";
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  v15 = v5[390];
  if ( v37[1] >= *((_DWORD *)v15 + 24) )
  {
    WdLogSingleEntry2(3LL, v37[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11178;
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    goto LABEL_60;
  }
  v16 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, v37[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v5[390], v37[1]) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v5[390], v37[1]);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(v5[390], v37[1]) )
      goto LABEL_28;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v5[390], v37[1]);
  }
  v16 = VidPnSourceOwner;
LABEL_28:
  if ( !v16 )
  {
    WdLogSingleEntry2(3LL, v37[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11197;
    goto LABEL_21;
  }
  LODWORD(v9) = 0;
  v19 = *(float *)&v37[2];
  if ( *(float *)&v37[2] > 4.0
    || *(float *)&v37[2] < 0.2
    || (v20 = *(float *)&v37[3], *(float *)&v37[3] > 4.0)
    || *(float *)&v37[3] < 0.2
    || (v21 = v38[0], v38[0] > 4.0)
    || v38[0] < 0.2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11225;
    LODWORD(v9) = -1073741811;
    v21 = v38[0];
    v20 = *(float *)&v37[3];
    v19 = *(float *)&v37[2];
  }
  v22 = v38[1];
  if ( v38[1] > 0.6
    || v38[1] < -0.6
    || (v23 = v38[2], v38[2] > 0.6)
    || v38[2] < -0.6
    || (v24 = v38[3], v38[3] > 0.6)
    || v38[3] < -0.6 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11238;
    LODWORD(v9) = -1073741811;
    v24 = v38[3];
    v23 = v38[2];
    v22 = v38[1];
    v21 = v38[0];
    v20 = *(float *)&v37[3];
    v19 = *(float *)&v37[2];
  }
  v25 = 0LL;
  if ( (int)v9 >= 0 )
  {
    if ( v19 != 1.0 || v20 != 1.0 || v21 != 1.0 || v22 != 0.0 || v23 != 0.0 || v24 != 0.0 )
    {
      v25 = operator new(0x18uLL, 0x4B677844u, 256LL, v17);
      if ( !v25 )
      {
        LODWORD(v9) = -1073741801;
        WdLogSingleEntry2(3LL, v16, -1073741801LL);
        WdLogGlobalForLineNumber = 11259;
        goto LABEL_15;
      }
      *(_DWORD *)v25 = v37[2];
      *(_DWORD *)(v25 + 4) = v37[3];
      *(_OWORD *)(v25 + 8) = *(_OWORD *)v38;
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v16, v37[1], (struct DXGK_GAMMA_ADJUSTMENT *)v25);
    v26 = 0LL;
    v34 = -1;
    while ( 1 )
    {
      v27 = v26++;
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v5, v37[1], v27, &v34) < 0 || v34 == -1 )
        break;
      v28 = MonitorNotifyDXGIGammaRampChange(v5, v34);
      v9 = v28;
      if ( v28 < 0 )
      {
        WdLogSingleEntry1(2LL, v28);
        WdLogGlobalForLineNumber = 11297;
        v10 = L"Failed to setfullscreen gamma ramp, (Status == 0x%I64x)!";
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v35, v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v31);
  return (unsigned int)v9;
}
