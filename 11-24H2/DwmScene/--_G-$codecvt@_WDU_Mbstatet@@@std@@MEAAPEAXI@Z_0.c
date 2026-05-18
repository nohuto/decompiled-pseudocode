/*
 * XREFs of ??_G?$codecvt@_WDU_Mbstatet@@@std@@MEAAPEAXI@Z_0 @ 0x1800942D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall std::codecvt<wchar_t,char,_Mbstatet>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
