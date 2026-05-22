/*
 * XREFs of ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x18009B410
 * Callers:
 *     ?Release@OneCoreUAPInputHost@@W7EAAKXZ @ 0x1800A3680 (-Release@OneCoreUAPInputHost@@W7EAAKXZ.c)
 *     ?Release@OneCoreUAPInputHost@@WBI@EAAKXZ @ 0x1800A3690 (-Release@OneCoreUAPInputHost@@WBI@EAAKXZ.c)
 *     ?Release@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A36A0 (-Release@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::Release(OneCoreUAPInputHost *this)
{
  return InputContext::Release((OneCoreUAPInputHost *)((char *)this + 32));
}
