/*
 * XREFs of ?FindKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1800FA938
 * Callers:
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800F9D64 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FB9A4 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1800FC6EC (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::FindKey(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // r9d
  __int64 i; // r10

  v2 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(int *)(a1 + 16) )
      return 0xFFFFFFFFLL;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 4 * i) == *a2 )
      break;
    ++v2;
  }
  return v2;
}
