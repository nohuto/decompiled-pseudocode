/*
 * XREFs of ??1CResourceStateUpdateSerializer@@QEAA@XZ @ 0x140050DC0
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009F81C (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009FD8C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

void __fastcall CResourceStateUpdateSerializer::~CResourceStateUpdateSerializer(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
