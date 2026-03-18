/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B664
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

LARGE_INTEGER *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        LARGE_INTEGER *this)
{
  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 112LL);
  this->QuadPart = (LONGLONG)&DirectComposition::CNaturalAnimationMarshaler::`vftable';
  this[22] = KeQueryPerformanceCounter(0LL);
  this[23].QuadPart = 0LL;
  this[24].LowPart = 0;
  return this;
}
