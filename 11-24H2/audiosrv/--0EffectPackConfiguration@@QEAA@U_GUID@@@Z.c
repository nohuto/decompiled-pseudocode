/*
 * XREFs of ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x18008D854
 * Callers:
 *     ??$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration@@AEAU_GUID@@@Z @ 0x180050AD4 (--$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800A31F8 (-terminate@details@gsl@@YAXXZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A42DC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=7
EffectPackConfiguration *__fastcall EffectPackConfiguration::EffectPackConfiguration(
        EffectPackConfiguration *this,
        struct _GUID *a2)
{
  gsl::details *v4; // rcx

  memset_0(this, 0, 0x520uLL);
  `eh vector constructor iterator'(
    (char *)this + 1312,
    0x20uLL,
    0xFuLL,
    (void (*)(void *))EffectPackConfiguration::ApoRegistrationInfo::ApoRegistrationInfo,
    (void (*)(void *))EffectPackConfiguration::ApoRegistrationInfo::~ApoRegistrationInfo);
  *((_DWORD *)this + 448) = 0;
  *((_QWORD *)this + 225) = 0LL;
  *((_DWORD *)this + 452) = 0;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_QWORD *)this + 230) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  *((_QWORD *)this + 234) = 0LL;
  *((_QWORD *)this + 235) = 0LL;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 237) = 0LL;
  *((_QWORD *)this + 238) = 0LL;
  *((_WORD *)this + 956) = 0;
  *((_BYTE *)this + 1914) = 0;
  *(_WORD *)((char *)this + 1915) = 0;
  *((_BYTE *)this + 1917) = 0;
  *((GUID *)this + 120) = GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)this + 121) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 488) = 0;
  `eh vector constructor iterator'(
    (char *)this + 1960,
    0x10uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  *((_QWORD *)this + 255) = 5LL;
  *((_QWORD *)this + 256) = (char *)this + 1960;
  if ( this == (EffectPackConfiguration *)-1960LL )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18008D9C1LL);
  }
  *(struct _GUID *)this = *a2;
  return this;
}
