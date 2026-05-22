/*
 * XREFs of ??1InputSite@@UEAA@XZ @ 0x18003B25C
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x18003B220 (--_EInputSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ @ 0x18003B338 (--1-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAXXZ @ 0x18003B358 (-_Tidy@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18003B958 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 *     __std_find_trivial_8 @ 0x18009E460 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSite::~InputSite(InputSite *this)
{
  __int64 v2; // rbx
  __int64 trivial_8; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &InputSite::`vftable';
  v2 = *((_QWORD *)this + 64);
  trivial_8 = _std_find_trivial_8(*(_QWORD *)(v2 + 56), *(_QWORD *)(v2 + 64), this);
  memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), *(_QWORD *)(v2 + 64) - (trivial_8 + 8));
  *(_QWORD *)(v2 + 64) -= 8LL;
  v4 = *((_QWORD *)this + 64);
  if ( v4 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *((_QWORD *)this + 61);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      v5,
      *((_QWORD *)this + 62));
    std::_Deallocate<16,0>(
      *((char **)this + 61),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 63) - *((_QWORD *)this + 61)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
  }
  std::_Optional_destruct_base<LegacyInputSinkData,0>::~_Optional_destruct_base<LegacyInputSinkData,0>((char *)this + 48);
  std::vector<InputSiteId>::_Tidy((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
