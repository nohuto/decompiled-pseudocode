/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x14017CA80
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int16 a5)
{
  __int16 result; // ax

  if ( a3 == 13 && a4 == 48 )
  {
    result = a5 - 4;
    if ( (unsigned __int16)(a5 - 4) <= 1u || a5 == 1 )
    {
      if ( *(_BYTE *)(a1 + 1041) )
        *(_DWORD *)(a2 + 368) |= 0x4000u;
    }
  }
  return result;
}
