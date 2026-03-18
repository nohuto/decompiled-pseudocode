/*
 * XREFs of ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x14006C7EC
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401BA340 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140031A50 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028F8B0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(ADAPTER_DISPLAY *this, const struct DXGDEVICE *a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(this, a2, i) )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership(this, i);
    }
    else if ( ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(this, a2, i) )
    {
      *(_QWORD *)(4024LL * i + *((_QWORD *)this + 16) + 744) = 0LL;
    }
  }
}
