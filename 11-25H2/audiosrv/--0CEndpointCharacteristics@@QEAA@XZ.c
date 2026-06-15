/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800794E0
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x180078944 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpoin.c)
 * Callees:
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x1800A2D3C (--0CSpatialProperties@@QEAA@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800A6E48 (-terminate@details@gsl@@YAXXZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A7FEC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  gsl::details *v2; // rcx

  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 1) = &CEndpointCharacteristics::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 15) = 5LL;
  *((_QWORD *)this + 16) = (char *)this + 96;
  if ( this == (CEndpointCharacteristics *)-96LL
    || (`eh vector constructor iterator'(
          (char *)this + 136,
          0x10uLL,
          5uLL,
          (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
          (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll),
        *((_QWORD *)this + 27) = 5LL,
        *((_QWORD *)this + 28) = (char *)this + 136,
        this == (CEndpointCharacteristics *)-136LL) )
  {
    gsl::details::terminate(v2);
    JUMPOUT(0x1800796F8LL);
  }
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *(GUID *)((char *)this + 424) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 55) = 1LL;
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 448));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 0x2000), 0, 0);
  *((_DWORD *)this + 2058) = 0;
  *((_BYTE *)this + 8236) = 1;
  *((_QWORD *)this + 1030) = 0LL;
  *((_DWORD *)this + 2062) = 0;
  *(GUID *)((char *)this + 8252) = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)((char *)this + 8268) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 1036) = 0LL;
  *(_WORD *)((char *)this + 8297) = 0;
  return this;
}
