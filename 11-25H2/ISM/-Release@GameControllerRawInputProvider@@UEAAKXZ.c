/*
 * XREFs of ?Release@GameControllerRawInputProvider@@UEAAKXZ @ 0x180038FD0
 * Callers:
 *     ?Release@GameControllerRawInputProvider@@W7EAAKXZ @ 0x1800CBD80 (-Release@GameControllerRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CBD90 (-Release@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800CBDA0 (-Release@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x1800CBDB0 (-Release@GameControllerRawInputProvider@@WCA@EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameControllerRawInputProvider::Release(GameControllerRawInputProvider *this)
{
  return InputContext::Release((GameControllerRawInputProvider *)((char *)this + 32));
}
