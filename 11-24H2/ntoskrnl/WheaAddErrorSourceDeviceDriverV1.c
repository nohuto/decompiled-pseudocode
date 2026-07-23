/*
 * XREFs of WheaAddErrorSourceDeviceDriverV1 @ 0x14065A630
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x1407C7280 (WheaAddErrorSourceDeviceDriver.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriverV1(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v9; // eax
  __int128 v10; // xmm1
  _OWORD v11[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  int v15; // [rsp+50h] [rbp-38h]
  __int128 v16; // [rsp+54h] [rbp-34h]
  GUID v17; // [rsp+64h] [rbp-24h]

  memset_0(v11, 0, 0x54uLL);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225712LL;
  v9 = *(_DWORD *)(a2 + 40);
  v10 = *(_OWORD *)(a2 + 16);
  v11[0] = *(_OWORD *)a2;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = v9;
  v11[1] = v10;
  v14 = a4;
  v16 = DEFAULT_DEVICE_DRIVER_CREATOR_GUID;
  v15 = 1;
  v17 = CPER_EMPTY_GUID;
  LODWORD(v11[0]) = 2;
  return WheaAddErrorSourceDeviceDriver(a1, v11, a3);
}
