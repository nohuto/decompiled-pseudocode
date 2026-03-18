/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403EF250
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1400655F4 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140194478 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401962F4 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035604C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        struct DXGADAPTER *this,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  _BOOL8 v6; // rcx
  bool v7; // zf
  const wchar_t *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  const wchar_t *v14; // r9
  char *v15; // rax
  ADAPTER_DISPLAY *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct ADAPTER_DISPLAY *v20; // rdi
  __int64 v21; // rdx
  NTSTATUS v22; // esi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+20h] [rbp-38h]
  __int64 v27; // [rsp+28h] [rbp-30h]

  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4463;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 4463LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4464;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"o_ppDisplayCore != NULL", 4464LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 77)
    || !*((_QWORD *)this + 78)
    || !*((_QWORD *)this + 79)
    || !*((_QWORD *)this + 81)
    || !*((_QWORD *)this + 82) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(this)
    || !*((_QWORD *)this + 83) && *((int *)this + 751) < 2200
    || !*((_QWORD *)this + 70)
    || !*((_QWORD *)this + 71) )
  {
    if ( *((int *)this + 751) < 1200 && (*((_DWORD *)this + 111) & 0x10) == 0 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v8 = L"Miniport did not provide required DDIs on adapter 0x%I64x (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4592;
      goto LABEL_88;
    }
    if ( *((_QWORD *)this + 77)
      || *((_QWORD *)this + 78)
      || *((_QWORD *)this + 79)
      || *((_QWORD *)this + 80)
      || *((_QWORD *)this + 81)
      || *((_QWORD *)this + 82)
      || *((_QWORD *)this + 83)
      || *((_QWORD *)this + 69)
      || *((_QWORD *)this + 70)
      || *((_QWORD *)this + 71)
      || *((_QWORD *)this + 85)
      || *((_QWORD *)this + 84)
      || *((_QWORD *)this + 99)
      || *((_QWORD *)this + 145)
      || *((_QWORD *)this + 146)
      || *((_QWORD *)this + 147)
      || *((_QWORD *)this + 148) )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v8 = L"Not all the display relevant DDIs on adapter 0x%I64x are NULL (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4557;
      goto LABEL_88;
    }
    if ( *((_DWORD *)this + 464) || *((_DWORD *)this + 465) )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 464), *((unsigned int *)this + 465), -1073741735LL);
      v27 = *((unsigned int *)this + 465);
      v26 = *((unsigned int *)this + 464);
      WdLogGlobalForLineNumber = 4567;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Number of VidPn Source 0x%I64x or Target 0x%I64x are not 0 on render only adapter 0x%I64x (Status = 0x%I64x).",
        v26,
        v27,
        -1073741735LL,
        0LL,
        0LL);
      return 3221225561LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    WdLogGlobalForLineNumber = 4578;
LABEL_85:
    *a2 = 0LL;
    return 0LL;
  }
  if ( *((_QWORD *)this + 391) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) )
      v7 = *((_QWORD *)this + 129) == 0LL;
    else
      v7 = *((_QWORD *)this + 80) == 0LL;
    if ( v7 || !*((_QWORD *)this + 85) || !*((_QWORD *)this + 69) && *((int *)this + 751) < 1200 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v8 = L"Not all the display relevant DDIs for full WDDM on adapter 0x%I64x are implemented 0x%I64x).";
      WdLogGlobalForLineNumber = 4495;
LABEL_88:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, (__int64)this, -1073741735LL, 0LL, 0LL, 0LL);
      return 3221225561LL;
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 104) )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v8 = L"Not all the display only relevant DDIs on adapter 0x%I64x are implemented (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4510;
      goto LABEL_88;
    }
    v6 = *((_QWORD *)this + 87) == 0LL;
    if ( (*((_QWORD *)this + 85) == 0LL) != v6 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v8 = L"Either both GetScanLine & ControlInterrupts must be implemented or neither, on adapter 0x%I64x are implemente"
            "d (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4522;
      goto LABEL_88;
    }
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 4529;
  if ( *((int *)this + 751) >= 1200 && !*((_DWORD *)this + 464) && !*((_DWORD *)this + 465) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = this;
    WdLogGlobalForLineNumber = 4606;
    goto LABEL_85;
  }
  if ( (unsigned int)(*((_DWORD *)this + 464) - 1) > 0xF )
  {
    WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 464));
    v13 = *((unsigned int *)this + 464);
    v14 = L"Adapter 0x%I64x: Incorrect number of outputs 0x%I64x";
    WdLogGlobalForLineNumber = 4616;
    goto LABEL_60;
  }
  if ( !*((_DWORD *)this + 465) )
  {
    WdLogSingleEntry2(2LL, this, 0LL);
    v13 = *((unsigned int *)this + 465);
    v14 = L"Adapter 0x%I64x: Incorrect number of targets 0x%I64x";
    WdLogGlobalForLineNumber = 4624;
LABEL_60:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, (__int64)this, v13, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 3016) && *((int *)this + 684) >= 4608 && (!*((_BYTE *)this + 2936) || !*((_BYTE *)this + 2937)) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4637;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 display features.",
      4637LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)this + 84) )
    *((_QWORD *)this + 84) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)this + 99) )
    *((_QWORD *)this + 99) = ADAPTER_DISPLAY::DefaultDdiSetDisplayPrivateDriverFormat;
  if ( !*((_QWORD *)this + 136) )
    *((_QWORD *)this + 136) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 146) )
    *((_QWORD *)this + 146) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 147) )
    *((_QWORD *)this + 147) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 148) )
    *((_QWORD *)this + 148) = W32kStub_GreSfmOpenTokenEvent;
  v15 = (char *)operator new(0x408uLL, 0x4B677844u, 64LL, v12);
  if ( v15 && (v16 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v15, this), (v20 = v16) != 0LL) )
  {
    v22 = ADAPTER_DISPLAY::Initialize(v16, v17, v18, v19);
    if ( v22 >= 0 )
    {
      WdLogSingleEntry2(4LL, v20, this);
      WdLogGlobalForLineNumber = 4699;
      *a2 = v20;
    }
    else
    {
      ADAPTER_DISPLAY::Destroy((ADAPTER_DISPLAY **)v20, v21, v23, v24);
      ADAPTER_DISPLAY::`scalar deleting destructor'(v20);
    }
    return (unsigned int)v22;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 4683;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating ADAPTER_DISPLAY class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
