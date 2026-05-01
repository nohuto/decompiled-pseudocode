/*
 * XREFs of ?LostCapture@ElementDragData@@UEAAXXZ @ 0x1804DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804DCA6C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::LostCapture(ElementDragData *this)
{
  _BYTE v2[88]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)this + 184,
    (__int64)v2);
  if ( (unsigned int)(*((_DWORD *)this + 130) - 2) > 1 )
    ElementDragData::CancelDrag(this);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v2);
}
