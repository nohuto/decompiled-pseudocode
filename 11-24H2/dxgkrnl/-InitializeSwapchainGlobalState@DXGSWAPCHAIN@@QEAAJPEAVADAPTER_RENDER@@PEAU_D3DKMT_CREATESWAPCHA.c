/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401FEC30
 * Callers:
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x140079348 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE Value; // r9d
  _DWORD *v7; // rax
  UINT v8; // ecx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdi
  struct DXGPROCESS *Current; // rax

  Value = (struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE)a3->Flags.Value;
  *((_DWORD *)this + 58) = (*(_BYTE *)&Value & 2) != 0;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    v7 = (_DWORD *)operator new(8uLL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = a3->SurfaceCount - 1;
      *v7 = 0;
      v7[1] = v8;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      v9 = 1850LL;
      v10 = L"Out of memory allocating ROTATING_BUFFER_IDX class";
LABEL_7:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v12 = operator new(0x18uLL, 0x4B677844u, 256LL);
  if ( v12 )
  {
    v13 = *((_DWORD *)this + 53);
    *(_DWORD *)v12 = 20;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 4) = v13;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    v9 = 1859LL;
    v10 = L"Failed to allocate surface queue";
    goto LABEL_7;
  }
  v14 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)((char *)this + 204) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 412LL);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 444LL) & 0x10) != 0 )
      *((_DWORD *)this + 50) = 1;
    if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a2 + 2)) )
        *((_DWORD *)this + 59) = 1;
    }
    Current = DXGPROCESS::GetCurrent();
    WdLogSingleEntry2(4LL, this, Current);
    result = 0LL;
    WdLogGlobalForLineNumber = 1888;
  }
  else
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 1865;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to init queue. Returning 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  return result;
}
