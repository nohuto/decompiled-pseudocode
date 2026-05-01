/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18020FA24
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x180610BE0 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$1 @ 0x1806D0A6F (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$1.c)
 *     _std::basic_fstream_char_std::char_traits_char___::basic_fstream_char_std::char_traits_char____::_1_::dtor$4 @ 0x1806FF79D (_std--basic_fstream_char_std--char_traits_char___--basic_fstream_char_std--char_tra_ea_1806FF79D.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
