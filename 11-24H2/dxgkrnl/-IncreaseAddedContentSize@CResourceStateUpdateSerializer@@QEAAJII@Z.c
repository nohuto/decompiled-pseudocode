/*
 * XREFs of ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14005C0F0
 * Callers:
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400174D0 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009F81C (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009FD8C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::IncreaseAddedContentSize(
        CResourceStateUpdateSerializer *this,
        unsigned int a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edx
  int v6; // eax

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    return 3221225621LL;
  v4 = *((_DWORD *)this + 16);
  v5 = v3 + v4;
  v6 = -1;
  if ( v5 >= v4 )
    v6 = v5;
  *((_DWORD *)this + 16) = v6;
  return v5 < v4 ? 0xC0000095 : 0;
}
