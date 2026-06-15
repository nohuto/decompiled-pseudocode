/*
 * XREFs of ??_E?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@UEAAPEAXI@Z @ 0x140043E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CSerialWorkQueue>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CSerialWorkQueue>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
