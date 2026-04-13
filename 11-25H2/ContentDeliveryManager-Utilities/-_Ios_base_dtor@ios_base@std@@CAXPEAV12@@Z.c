/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000567C
 * Callers:
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004C1F4 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CEB8 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x18004D7F0 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_istream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x18004D838 (--_G-$basic_istream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180060580 (--_D-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ??_G?$basic_iostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x1800606D4 (--_G-$basic_iostream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180060734 (--_G-$basic_ostream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180084180 (--_D-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x1800056FC (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 || (--byte_180178520[v2], byte_180178520[v2] <= 0) )
  {
    std::ios_base::_Tidy(this);
    v3 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
        if ( v4 )
          (**v4)(v4, 1LL);
      }
      operator delete(v3);
    }
  }
}
