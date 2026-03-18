/*
 * XREFs of ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403058DC
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403047EC (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x140305744 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

void __fastcall BLTQUEUE::SetVisibilityIfDeferred(BLTQUEUE *this)
{
  struct DXGADAPTER *Adapter; // rsi
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h]

  if ( _InterlockedExchange((volatile __int32 *)this + 252, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    v3 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
           *((ADAPTER_DISPLAY **)Adapter + 390),
           *((_DWORD *)this + 64),
           1u,
           0x4000u,
           0);
    if ( v3 < 0 )
    {
      v4 = v3;
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 64), Adapter, v3);
      v5 = *((unsigned int *)this + 64);
      WdLogGlobalForLineNumber = 3728;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to enable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
        v5,
        (__int64)Adapter,
        v4,
        0LL,
        0LL);
    }
  }
}
