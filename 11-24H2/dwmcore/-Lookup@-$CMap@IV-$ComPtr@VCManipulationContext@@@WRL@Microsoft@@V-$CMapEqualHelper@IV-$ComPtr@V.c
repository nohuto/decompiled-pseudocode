/*
 * XREFs of ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18018ED38
 * Callers:
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18012C534 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190EF4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v5; // rcx
  int v6; // edx
  __int64 i; // r9

  v5 = *(int *)(a1 + 16);
  v6 = 0;
  for ( i = 0LL; i < v5; ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 4 * i) == *a3 )
    {
      if ( v6 != -1 )
      {
        *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v6);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a2);
        return a2;
      }
      break;
    }
    ++v6;
  }
  *a2 = 0LL;
  return a2;
}
