/*
 * XREFs of ?Release@GameControllerRawInputProvider@@UEAAKXZ @ 0x180035A60
 * Callers:
 *     ?Release@GameControllerRawInputProvider@@W7EAAKXZ @ 0x1800CE640 (-Release@GameControllerRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CE650 (-Release@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800CE660 (-Release@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x1800CE670 (-Release@GameControllerRawInputProvider@@WCA@EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameControllerRawInputProvider::Release(GameControllerRawInputProvider *this)
{
  return InputContext::Release((GameControllerRawInputProvider *)((char *)this + 32));
}
