/*
 * XREFs of ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x1801B123C
 * Callers:
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800F9D64 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FB9A4 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1800FC6EC (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801B0A50 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  void *v5; // rax
  void *v6; // rax

  v2 = a2;
  if ( a2 < 0 || a2 + 1 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * a2));
  v4 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 + 1 != v4 )
  {
    memmove_0((void *)(*(_QWORD *)a1 + 4 * v2), (const void *)(*(_QWORD *)a1 + 4 * (v2 + 1)), 4LL * (v4 - (int)v2 - 1));
    memmove_0(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
  }
  v5 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v5 )
    *(_QWORD *)a1 = v5;
  v6 = DefaultHeap::Realloc(*(void **)(a1 + 8), 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
