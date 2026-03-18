/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x140196BEC
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403FAC10 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400677C4 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // eax

  v4 = 0;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1509;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      1509LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1510;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 1510LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale(this, v5)
    || (v9 = *((_QWORD *)this + 16), (v10 = *(_QWORD *)(3984 * v5 + v9 + 88)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) & 0x10) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(3984 * v5 + v9 + 600) + 16LL);
    v11 = *(_DWORD *)(v10 + 16);
  }
  *a3 = v11;
  *a4 = v4;
}
