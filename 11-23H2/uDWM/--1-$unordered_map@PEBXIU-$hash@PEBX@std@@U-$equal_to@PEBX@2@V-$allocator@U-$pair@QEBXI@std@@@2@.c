/*
 * XREFs of ??1?$unordered_map@PEBXIU?$hash@PEBX@std@@U?$equal_to@PEBX@2@V?$allocator@U?$pair@QEBXI@std@@@2@@std@@QEAA@XZ @ 0x1800F10F0
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$3 @ 0x1800F0512 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F0512.c)
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$4 @ 0x1800F0522 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F0522.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::unordered_map<void const *,unsigned int>::~unordered_map<void const *,unsigned int>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
