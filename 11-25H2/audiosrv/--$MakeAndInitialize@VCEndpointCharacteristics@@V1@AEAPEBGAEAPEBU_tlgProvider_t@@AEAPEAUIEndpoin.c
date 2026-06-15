/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x180078944
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180014FC0 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180078A24 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800794E0 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,_tlgProvider_t const * &,IEndpointResourceManagerProvider * &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        const struct _tlgProvider_t **a3,
        struct IEndpointResourceManagerProvider **a4)
{
  CEndpointCharacteristics *v8; // rax
  CEndpointCharacteristics *v9; // rbx
  int v10; // edi

  *a1 = 0LL;
  v8 = (CEndpointCharacteristics *)operator new(0x2070uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return 2147942414LL;
  v9 = CEndpointCharacteristics::CEndpointCharacteristics(v8);
  v10 = CEndpointCharacteristics::RuntimeClassInitialize(v9, *a2, *a3, *a4);
  if ( v10 >= 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 8LL))(v9);
    *a1 = v9;
    if ( v9 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
    return 0;
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v10;
}
