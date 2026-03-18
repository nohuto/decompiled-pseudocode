/*
 * XREFs of ?RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044200
 * Callers:
 *     ?RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400441A8 (-RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall DispConfigTypes::RequiresAdapterReference(int a1)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v4; // edx

  if ( a1 <= -20 )
  {
    v1 = a1 + 39;
    if ( v1 > 0x13 )
      return 1;
    v2 = 688185;
    return !_bittest(&v2, v1);
  }
  if ( (unsigned int)(a1 + 19) <= 0xE )
  {
    v4 = 24673;
    if ( _bittest(&v4, a1 + 19) )
      return 0;
  }
  return a1 != 3;
}
