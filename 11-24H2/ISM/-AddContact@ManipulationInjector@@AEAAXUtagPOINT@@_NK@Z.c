/*
 * XREFs of ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x180110AAC
 * Callers:
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x180110BD0 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180112018 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180112158 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801128EC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180112DC4 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1801110A8 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::AddContact(struct tagPOINT *this, struct tagPOINT a2, char a3, const char *a4)
{
  struct tagPOINT *v5; // r11
  struct tagPOINT *v6; // rax
  __int64 v7; // rcx
  unsigned int i; // ecx
  __int64 v9; // rdx
  __int64 y; // rax
  LONG v11; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  if ( this[6].x >= 4u )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x44F,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
  this[19 * (unsigned int)this[6].x + 18] = a2;
  if ( this->x == 2 )
  {
    v6 = (struct tagPOINT *)ManipulationInjector::DeskToDigiPt((ManipulationInjector *)this, (struct tagPOINT)&v13);
    v5[19 * *(unsigned int *)(v7 + 48) + 19] = *v6;
  }
  for ( i = 0; i < v5[6].x + 1; ++i )
  {
    v9 = ((_BYTE)i + (unsigned __int8)v5[5].y) & 3;
    if ( *((_BYTE *)&v5[91].x + v9) )
    {
      v5[5].y = v9;
      break;
    }
  }
  y = (unsigned int)v5[5].y;
  if ( !*((_BYTE *)&v5[91].x + y) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x461,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
  *((_BYTE *)&v5[91].x + y) = 0;
  v11 = v5[5].y;
  v5[5].y = v11 + 1;
  v5[19 * (unsigned int)v5[6].x + 14].y = v11;
  if ( v5[5].y == 4 )
    v5[5].y = 0;
  v5[19 * (unsigned int)v5[6].x + 15].y = a3 != 0 ? 131074 : 65542;
  *(&v5[89].x + (unsigned int)v5[6].x++) = (int)a4;
}
