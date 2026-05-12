/*
 * XREFs of NvmeAdapterConfigureFabricController @ 0x1400DFB98
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400E7BA0 (NvmeAdapterSetFabricControllerProperty.c)
 */

__int64 __fastcall NvmeAdapterConfigureFabricController(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 584), 0x2Cu) )
  {
    v3 = 112LL;
    v4 = 4587632LL;
  }
  else
  {
    *(_QWORD *)(a1 + 136) &= ~0x8000uLL;
    v4 = 4587520LL;
    v3 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 572) != 1 )
    v4 = v3;
  result = NvmeAdapterSetFabricControllerProperty(a1, a2, v4);
  if ( (int)result < 0 )
    *a2 = 16;
  return result;
}
