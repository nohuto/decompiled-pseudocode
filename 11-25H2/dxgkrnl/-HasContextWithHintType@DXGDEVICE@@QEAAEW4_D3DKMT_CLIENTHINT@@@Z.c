/*
 * XREFs of ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1403E9824
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040FD98 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasContextWithHintType(ADAPTER_RENDER **this, enum _D3DKMT_CLIENTHINT a2)
{
  ADAPTER_RENDER **i; // rax

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5370;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5370LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = (ADAPTER_RENDER **)this[62]; ; i = (ADAPTER_RENDER **)*i )
  {
    if ( i == this + 62 || !i )
      return 0;
    if ( *((_DWORD *)i + 36) == a2 )
      break;
  }
  return 1;
}
