/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1403F1314
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401AF390 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1403F1670 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1403F172C (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1403F2ACC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

int __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, unsigned int a2, void *a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  struct DXGSWAPCHAIN_CONTAINER *v7; // rax
  struct _LUID v8; // rbx
  OUTPUTDUPL_MGR_INDIRECT *v10; // rsi
  int updated; // r15d
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a2;
  if ( !*((_QWORD *)this + 58) )
    return -1073741811;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 8770;
    return -1073741811;
  }
  v6 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v6 + 444) & 0x100) == 0 )
  {
    WdLogSingleEntry1(3LL, v6);
    WdLogGlobalForLineNumber = 8776;
    return -1073741811;
  }
  v7 = SwapChainOpenInternal(a3);
  if ( !v7 || !*(_QWORD *)v7 )
  {
    WdLogSingleEntry1(2LL, a3);
    WdLogGlobalForLineNumber = 8784;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Swap-chain handle (0x%I64x) is invalid",
      (__int64)a3,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  v8 = *(struct _LUID *)(*(_QWORD *)v7 + 204LL);
  if ( v8 )
  {
    ObfDereferenceObject(v7);
    v10 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL));
    if ( v8 == *((_QWORD *)v10 + 16)
      || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v10, v8), updated >= 0) )
    {
      v12 = *((_QWORD *)this + 2);
      v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v12 + 2320);
      if ( v13 )
      {
        v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v13)(
                *(_QWORD *)(v12 + 2296),
                (unsigned int)v3,
                a3,
                v8);
        v15 = v14;
        if ( v14 >= 0 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
          *((struct _LUID *)this + 35) = v8;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
          return BLTQUEUE::SetIndirectSwapChainHandles(
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 3040 * v3),
                   a3);
        }
        else
        {
          WdLogSingleEntry2(2LL, v14, *((_QWORD *)this + 2));
          v17 = *((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 8819;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Dod driver failed SetSwapChainHandle call with 0x%I64x",
            v15,
            v17,
            0LL,
            0LL,
            0LL);
          return v15;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v12);
        v16 = *((_QWORD *)this + 2);
        WdLogGlobalForLineNumber = 8825;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"SetSwapChain function not supported by Dod driver",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741637;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 8807;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reconfigure the OUTPUTDUPL_MGR_INDIRECT (0xI64x) for a new render adapter.",
        (__int64)v10,
        0LL,
        0LL,
        0LL,
        0LL);
      return updated;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8792;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Got zero LUID for swapchain render adapter Luid ",
      8792LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741595;
  }
}
