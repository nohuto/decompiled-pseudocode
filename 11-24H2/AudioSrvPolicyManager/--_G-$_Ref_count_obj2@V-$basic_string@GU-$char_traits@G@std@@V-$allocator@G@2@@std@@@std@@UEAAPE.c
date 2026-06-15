/*
 * XREFs of ??_G?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@UEAAPEAXI@Z @ 0x180017D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<std::wstring>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<std::wstring>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
