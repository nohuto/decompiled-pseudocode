/*
 * XREFs of ??0CManipulationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B61C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CManipulationMarshaler *__fastcall DirectComposition::CManipulationMarshaler::CManipulationMarshaler(
        DirectComposition::CManipulationMarshaler *this)
{
  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 105LL);
  *((_BYTE *)this + 108) &= 0xF8u;
  *(_QWORD *)this = &DirectComposition::CManipulationMarshaler::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
