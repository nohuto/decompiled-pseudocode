/*
 * XREFs of ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180093454
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093350 (--1DWMCursor@@MEAA@XZ.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$5 @ 0x1801D9AD2 (_DWMCursor--DWMCursor_--_1_--dtor$5.c)
 * Callees:
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x18010B06C (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 */

void __fastcall TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken(
        TestCommandHost::CommandRegistrationToken *this)
{
  if ( *((_BYTE *)this + 24) )
    TestCommandHost::UnregisterForTestCommandMessage(
      *(unsigned int *)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 2));
}
