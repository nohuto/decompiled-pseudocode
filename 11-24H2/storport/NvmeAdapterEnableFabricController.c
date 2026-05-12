/*
 * XREFs of NvmeAdapterEnableFabricController @ 0x1400E20B4
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E3D90 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400E7BA0 (NvmeAdapterSetFabricControllerProperty.c)
 */

__int64 __fastcall NvmeAdapterEnableFabricController(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  unsigned int v3; // edi
  __int64 v6; // rdx
  int FabricControllerProperty; // ebp
  __int64 v9; // [rsp+C0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 500 * *(unsigned __int8 *)(a1 + 587);
  v9 = 0LL;
  if ( !v3 )
    v3 = 10;
  FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 20LL, &v9);
  if ( FabricControllerProperty >= 0 )
  {
    FabricControllerProperty = NvmeAdapterSetFabricControllerProperty(a1, v6, (unsigned int)v9 | 1LL);
    if ( FabricControllerProperty >= 0 )
    {
      while ( v3 )
      {
        FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 28LL, &v9);
        if ( FabricControllerProperty < 0 )
        {
          *a2 = 18;
          return (unsigned int)FabricControllerProperty;
        }
        v2 = v9;
        if ( (v9 & 1) != 0 )
          goto LABEL_18;
        StorDelayExecution(0x2710u);
        if ( v3 == 10 )
        {
          v3 = 1;
        }
        else if ( v3 <= 0xA )
        {
          v3 = 0;
        }
        else
        {
          v3 -= 10;
        }
      }
      if ( (v2 & 1) == 0 )
      {
        FabricControllerProperty = -1056964607;
        *a2 = 19;
        StorEtwNvmeControllerEvent(
          a1,
          1,
          3,
          (__int64)L"Enable controller - Ready timeout",
          (void *)&word_140150F48,
          0,
          &word_140150F48,
          0,
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
        return (unsigned int)FabricControllerProperty;
      }
LABEL_18:
      *(_QWORD *)(a1 + 136) |= 0x100uLL;
    }
    else
    {
      *a2 = 16;
    }
  }
  else
  {
    *a2 = 17;
  }
  return (unsigned int)FabricControllerProperty;
}
