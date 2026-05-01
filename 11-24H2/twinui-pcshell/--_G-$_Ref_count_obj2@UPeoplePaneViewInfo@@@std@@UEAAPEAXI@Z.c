/*
 * XREFs of ??_G?$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@UEAAPEAXI@Z @ 0x1804100F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<PeoplePaneViewInfo>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
