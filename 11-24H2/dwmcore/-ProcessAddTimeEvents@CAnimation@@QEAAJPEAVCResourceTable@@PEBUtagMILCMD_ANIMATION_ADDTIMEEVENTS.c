/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x180292F08
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJPEFBUDwmAnimationTimeEventData@@I@Z @ 0x180292E44 (-AddMultipleAndSet@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJPEFBUDwmAnimationTimeEventD.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = DynArray<DwmAnimationTimeEventData,0>::AddMultipleAndSet((__int64)this + 152, a4, a5 >> 4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1C8u, 0LL);
  return v6;
}
