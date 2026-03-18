/*
 * XREFs of UsbhWmiDoNothing @ 0x1400555C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhWmiDoNothing(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // r11d

  Log(a1, 64, 1299474532, 0xFFFFFFFFLL, a5);
  *v8 = 0;
  if ( v9 >= 0x18 )
    return UsbhGetPortData(a1, *(unsigned __int16 *)(a5 + 4), v6, v7) == 0 ? 0xC000000D : 0;
  else
    return 3221225507LL;
}
