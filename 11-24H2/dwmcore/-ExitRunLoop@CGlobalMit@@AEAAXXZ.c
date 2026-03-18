/*
 * XREFs of ?ExitRunLoop@CGlobalMit@@AEAAXXZ @ 0x180223F38
 * Callers:
 *     ?OnResetEvent@CGlobalMit@@CAJPEAXK0@Z @ 0x180223F20 (-OnResetEvent@CGlobalMit@@CAJPEAXK0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlobalMit::ExitRunLoop(CGlobalMit *this)
{
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 240LL))(CMit::s_pMessageSession);
}
