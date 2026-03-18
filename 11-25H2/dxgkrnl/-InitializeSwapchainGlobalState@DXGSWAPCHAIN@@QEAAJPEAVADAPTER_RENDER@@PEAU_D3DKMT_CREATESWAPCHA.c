/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401F8554
 * Callers:
 *     DxgkCreateSwapChain @ 0x1401FAC90 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x140078E14 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  __int64 Value; // r9
  _DWORD *v7; // rax
  UINT v8; // ecx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdi
  struct DXGPROCESS *Current; // rax

  Value = a3->Flags.Value;
  *((_DWORD *)this + 58) = (a3->Flags.Value & 2) != 0;
  if ( (Value & 2) == 0 )
  {
    v7 = (_DWORD *)operator new(8uLL, 0x4B677844u, 256LL, Value);
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
      v9 = 1840LL;
      v10 = L"Out of memory allocating ROTATING_BUFFER_IDX class";
LABEL_7:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v12 = operator new(0x18uLL, 0x4B677844u, 256LL, Value);
  if ( v12 )
  {
    v16 = *((_DWORD *)this + 53);
    *(_DWORD *)v12 = 20;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 4) = v16;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    v9 = 1849LL;
    v10 = L"Failed to allocate surface queue";
    goto LABEL_7;
  }
  v17 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12, v13, v14, v15);
  v18 = v17;
  if ( v17 >= 0 )
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
    WdLogGlobalForLineNumber = 1878;
  }
  else
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 1855;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to init queue. Returning 0x%I64x",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v18;
  }
  return result;
}
