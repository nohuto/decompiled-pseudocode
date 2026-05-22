/*
 * XREFs of ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x18017C2BC
 * Callers:
 *     ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x18017C350 (--_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXXZ @ 0x18006A3D4 (-_Tidy@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ViewMenuChordedKeyHandler::~ViewMenuChordedKeyHandler(ViewMenuChordedKeyHandler *this)
{
  __int64 v2; // rcx
  char *v3; // rcx

  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  std::vector<std::pair<unsigned short,bool>>::_Tidy((__int64)this + 80);
  v3 = (char *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
