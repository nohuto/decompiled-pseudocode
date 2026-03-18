/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1800FAAB0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1800FB684 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x1800FB884 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801B1654 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r14d
  __int64 v15; // rcx
  char v16; // bl
  __int64 i; // rbp
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0;
  v19 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
          a1 + 56,
          &v20,
          &v19);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v14 )
  {
    InputTraceLogging::GestureTargeting::SetInteractionChain(a3, *(const struct CInteraction **)(a2 + 8));
    v15 = *(_QWORD *)(a2 + 8);
    if ( (*(_BYTE *)(v15 + 200) & 0x20) != 0
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v15 + 72) + 80LL))(v15 + 72, a4, 0LL) )
    {
      *(_BYTE *)(a1 + 28) |= 2u;
    }
    if ( a6 )
      NtDCompositionUpdatePointerCapture(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 196LL), a3);
    if ( !*(_QWORD *)(a1 + 48) )
      Microsoft::WRL::ComPtr<CVisual>::operator=(a1 + 48, *(_QWORD *)a2);
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0xF7 | (8
                                                      * CManipulationContext::CheckForSingleTarget(
                                                          *(const struct CInteraction **)(a1 + 48),
                                                          (const struct InputSinks *)(*(_QWORD *)(a1 + 48) + 80LL)));
  }
  else
  {
    v7 = -2147024882;
  }
  v16 = a5;
  if ( !a5 || (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(i + 224) )
    {
      LOBYTE(v13) = *(_BYTE *)(a1 + 28) & 1;
      LOBYTE(v12) = v16 ^ 1;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(i + 72) + 40LL))(i + 72, v12, v13, a4);
    }
    LOBYTE(v12) = v16 ^ 1;
    LOBYTE(v13) = *(_BYTE *)(a1 + 28) & 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 136) + 40LL))(
      *(_QWORD *)(a1 + 136),
      v12,
      v13,
      a4);
  }
  return v7;
}
