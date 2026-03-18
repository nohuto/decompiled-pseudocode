/*
 * XREFs of ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x140315444
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x140314560 (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x140314E34 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::ClearAllQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int i; // edx
  __int64 v2; // rax

  for ( i = 0; i < *((_DWORD *)this + 937); *((_BYTE *)this + v2 + 2888) = 0 )
    v2 = i++;
  *((_DWORD *)this + 937) = 0;
  *((_BYTE *)this + 3704) = 0;
}
