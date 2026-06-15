/*
 * XREFs of ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x18001AF80
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800333C4 (--1CProcess@@MEAA@XZ.c)
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180036680 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 */

__int64 __fastcall std::wstring::`scalar deleting destructor'(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1, a2, a3, a4) )
    std::wstring::_Deallocate_for_capacity(v5, *v5, v5[3]);
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 7LL;
  return result;
}
