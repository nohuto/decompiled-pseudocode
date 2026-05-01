/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1802C19F0
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$14 @ 0x1806DC63B (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$14.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1802C1A08 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
