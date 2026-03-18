/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EEE1C
 * Callers:
 *     DxgkDisplayOnOff @ 0x1402DAD00 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140310950 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x140412150 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403325A8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  ADAPTER_DISPLAY *v5; // rbx
  int v6; // eax
  __int64 v7; // r14
  int v9; // eax

  v2 = *((_QWORD *)a1 + 235);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13748;
  }
  v5 = *(ADAPTER_DISPLAY **)(v2 + 3120);
  if ( (*(_DWORD *)(v2 + 444) & 0x100) != 0
    || (v6 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v5, v4, 0, 0x40u, 0), v7 = v6, v6 >= 0) )
  {
    v9 = ADAPTER_DISPLAY::DestroyCddAllocations(v5, a1, v4);
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, v4, v2, v9);
      WdLogGlobalForLineNumber = 13789;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, v2, v6);
    WdLogGlobalForLineNumber = 13771;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to disable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
      v4,
      v2,
      v7,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
}
