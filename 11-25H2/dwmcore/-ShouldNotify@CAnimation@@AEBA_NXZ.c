/*
 * XREFs of ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1801CE8C0
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801CE830 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18029E8E0 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::ShouldNotify(CAnimation *this)
{
  return *((_DWORD *)this + 72) && *((_DWORD *)this + 71);
}
