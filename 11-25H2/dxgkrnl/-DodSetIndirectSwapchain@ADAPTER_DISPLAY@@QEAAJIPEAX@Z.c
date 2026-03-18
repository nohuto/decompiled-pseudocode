/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1403F7524
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401ACEB0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1403F7880 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1403F793C (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1403F8CDC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
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
  if ( !*((_QWORD *)this + 57) )
    return -1073741811;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 8625;
    return -1073741811;
  }
  v6 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v6 + 444) & 0x100) == 0 )
  {
    WdLogSingleEntry1(3LL, v6);
    WdLogGlobalForLineNumber = 8631;
    return -1073741811;
  }
  v7 = SwapChainOpenInternal(a3);
  if ( !v7 || !*(_QWORD *)v7 )
  {
    WdLogSingleEntry1(2LL, a3);
    WdLogGlobalForLineNumber = 8639;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 57) + 8LL) + 2968 * v3),
                   a3);
        }
        else
        {
          WdLogSingleEntry2(2LL, v14, *((_QWORD *)this + 2));
          v17 = *((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 8674;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
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
        WdLogGlobalForLineNumber = 8680;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
      WdLogGlobalForLineNumber = 8662;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
    WdLogGlobalForLineNumber = 8647;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Got zero LUID for swapchain render adapter Luid ",
      8647LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741595;
  }
}
