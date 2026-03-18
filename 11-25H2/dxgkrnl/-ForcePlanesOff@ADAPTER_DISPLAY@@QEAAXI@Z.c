/*
 * XREFs of ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140316348
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005385C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140316398 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ForcePlanesOff(DXGADAPTER **this)
{
  __int64 v1; // r8
  ADAPTER_DISPLAY *v2; // r9
  unsigned int v3; // r10d
  unsigned __int8 v4; // r8

  if ( *((_QWORD *)this[2] + 391) )
  {
    if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(this[2]) )
    {
      v4 = 1;
LABEL_4:
      ADAPTER_DISPLAY::DisableMPOPlanes(v2, v3, v4);
      return;
    }
    if ( *(_DWORD *)(v1 + 3004) == 2200 )
    {
      v4 = 0;
      goto LABEL_4;
    }
  }
}
