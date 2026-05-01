/*
 * XREFs of ?UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180255C48
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ??4MonitorInformation@KeyboardHosting@@QEAAAEAU01@AEBU01@@Z @ 0x180479F1C (--4MonitorInformation@KeyboardHosting@@QEAAAEAU01@AEBU01@@Z.c)
 */

void __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::UpdateMonitorInfo(
        KeyboardHosting::PositionAndSizeOptionsProvider *this,
        const struct KeyboardHosting::MonitorInformation *a2,
        const struct KeyboardHosting::MonitorInformation *a3,
        const struct KeyboardHosting::MonitorInformation *a4)
{
  KeyboardHosting::MonitorInformation::operator=((char *)this + 40, a2);
  KeyboardHosting::MonitorInformation::operator=((char *)this + 208, a3);
  KeyboardHosting::MonitorInformation::operator=((char *)this + 376, a4);
}
