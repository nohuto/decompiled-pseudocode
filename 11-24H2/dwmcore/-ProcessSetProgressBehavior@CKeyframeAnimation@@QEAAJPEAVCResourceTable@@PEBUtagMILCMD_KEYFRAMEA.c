/*
 * XREFs of ?ProcessSetProgressBehavior@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR@@@Z @ 0x1801F9020
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgressBehavior(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR *a3)
{
  *((_DWORD *)this + 122) = *((_DWORD *)a3 + 2);
  return 0LL;
}
