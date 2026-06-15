/*
 * XREFs of ??1EffectPack@@QEAA@XZ @ 0x180066898
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VEffectPack@@@std@@EEAAXXZ @ 0x1800A19D0 (-_Destroy@-$_Ref_count_obj2@VEffectPack@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1800669A0 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3DC4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall EffectPack::~EffectPack(EffectPack *this)
{
  std::_Ref_count_base *v2; // rcx

  SystemEffectDescriptor::~SystemEffectDescriptor((EffectPack *)((char *)this + 2016));
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)this + 500);
  `eh vector destructor iterator'(
    (char *)this + 1904,
    0x10uLL,
    5uLL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  `eh vector destructor iterator'(
    (char *)this + 1768,
    0x18uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1632,
    0x10uLL,
    5uLL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 197);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  `eh vector destructor iterator'(
    (char *)this + 1512,
    8uLL,
    5uLL,
    std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>);
  `eh vector destructor iterator'(
    (char *)this + 960,
    0x60uLL,
    5uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 480,
    0x60uLL,
    5uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    this,
    0x60uLL,
    5uLL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
}
