/*
 * XREFs of ?IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ @ 0x14006BA50
 * Callers:
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1403313C0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_RENDER::IsOverlayEnabled(DXGADAPTER **this)
{
  unsigned __int8 IsFullWDDMAdapter; // al
  __int64 v2; // rcx
  char v3; // dl

  IsFullWDDMAdapter = DXGADAPTER::IsFullWDDMAdapter(this[2]);
  v3 = 0;
  if ( IsFullWDDMAdapter
    && *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v2 + 704) != ADAPTER_RENDER::DefaultDdiCreateOverlay
    && *(__int64 (__fastcall **)(void *const))(v2 + 768) != ADAPTER_RENDER::DefaultDdiDestroyOverlay
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v2 + 760) != ADAPTER_RENDER::DefaultDdiFlipOverlay )
  {
    return *(_QWORD *)(v2 + 752) != (_QWORD)ADAPTER_RENDER::DefaultDdiUpdateOverlay;
  }
  return v3;
}
