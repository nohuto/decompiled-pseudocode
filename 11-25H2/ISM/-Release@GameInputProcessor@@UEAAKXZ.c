/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x180039230
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x1801A5530 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  return InputContext::Release((GameInputProcessor *)((char *)this + 8));
}
