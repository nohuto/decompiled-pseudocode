/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1403C8D1C
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x140022588 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140046860 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(ADAPTER_RENDER **this, const struct DXGALLOCATION *a2)
{
  unsigned int v4; // ebx
  struct DXGALLOCATION *v5; // r9

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3890;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocation->m_pAllocation->m_Primary",
      3890LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3891;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3891LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[237]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3895;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceSharedOwner()",
      3895LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v4 >= *((_DWORD *)this + 476) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3896;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      3896LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::TestAndSetDisplayedPrimary(this, v4, a2, v5);
  DXGDEVICE::RemovePrimaryAllocation((DXGDEVICE *)this, v4, a2);
}
