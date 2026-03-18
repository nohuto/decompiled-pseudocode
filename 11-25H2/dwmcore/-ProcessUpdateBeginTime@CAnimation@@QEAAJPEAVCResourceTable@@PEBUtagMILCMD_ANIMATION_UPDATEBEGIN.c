/*
 * XREFs of ?ProcessUpdateBeginTime@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_UPDATEBEGINTIME@@@Z @ 0x180231EAC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessUpdateBeginTime(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_UPDATEBEGINTIME *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 17) = v3;
  *((_QWORD *)this + 25) = v3;
  return 0LL;
}
