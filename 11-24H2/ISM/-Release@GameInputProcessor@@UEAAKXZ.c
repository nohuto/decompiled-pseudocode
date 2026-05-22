/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x180035CC0
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x1801ACB40 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  return InputContext::Release((GameInputProcessor *)((char *)this + 8));
}
