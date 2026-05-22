/*
 * XREFs of ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18009B270
 * Callers:
 *     ?Release@MouseProcessor@@W7EAAKXZ @ 0x1800A32B0 (-Release@MouseProcessor@@W7EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x1800A32C0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A32D0 (-Release@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x180192460 (-Release@MouseProcessor@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::Release(OneCoreUAPInputHost *this)
{
  return InputContext::Release((OneCoreUAPInputHost *)((char *)this + 32));
}
