/*
 * XREFs of ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1801BD030
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BCFA0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180292F90 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::ShouldNotify(CAnimation *this)
{
  return *((_DWORD *)this + 72) && *((_DWORD *)this + 71);
}
