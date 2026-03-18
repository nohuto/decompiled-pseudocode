/*
 * XREFs of UsbhWmiDoNothing @ 0x1C004A0C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhWmiDoNothing(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // r10
  unsigned int v7; // r11d

  Log(a1, 64, 1299474532, 0xFFFFFFFFLL, a5);
  *v6 = 0;
  if ( v7 >= 0x18 )
    return UsbhGetPortData(a1, *(_WORD *)(a5 + 4)) == 0 ? 0xC000000D : 0;
  else
    return 3221225507LL;
}
