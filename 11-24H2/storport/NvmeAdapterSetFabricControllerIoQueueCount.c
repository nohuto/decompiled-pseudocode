/*
 * XREFs of NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400E7998
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterSetFabricControllerIoQueueCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // ebx
  int v7; // esi
  unsigned int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  int v16; // [rsp+B0h] [rbp+8h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 20);
  v16 = 0;
  v6 = (unsigned __int16)(v4 - 1) | ((v4 - 1) << 16);
  v7 = NvmeAdapterSetFabricControllerFeature(a1, 0, 7, a4, v6, v10, v11, v12, v13, v14, v15, &v16);
  if ( v7 < 0 )
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2,
      (__int64)L"Set IO queue count",
      L"NSQ",
      v6,
      L"NCQ",
      SBYTE2(v6),
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 20);
    if ( v8 >= (unsigned int)(unsigned __int16)v16 + 1 )
      LOWORD(v8) = v16 + 1;
    *(_WORD *)(a1 + 20) = v8;
  }
  return (unsigned int)v7;
}
