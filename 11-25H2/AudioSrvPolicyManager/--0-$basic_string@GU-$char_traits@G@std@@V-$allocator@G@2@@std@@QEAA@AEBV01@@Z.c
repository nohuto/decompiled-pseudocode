/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18002EAC0
 * Callers:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002EB00 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180033A9C (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18002E258 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v5; // rax
  __int64 v6; // rdx

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = (_OWORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a2, a2, a3, a4);
  std::wstring::_Construct<2,unsigned short const *>(a1, v5, *(_QWORD *)(v6 + 16));
  return a1;
}
