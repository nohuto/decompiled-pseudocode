/*
 * XREFs of ??_G?$codecvt@_WDU_Mbstatet@@@std@@MEAAPEAXI@Z @ 0x18001ED80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall std::codecvt<wchar_t,char,_Mbstatet>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Utils::PerformanceLogger>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
