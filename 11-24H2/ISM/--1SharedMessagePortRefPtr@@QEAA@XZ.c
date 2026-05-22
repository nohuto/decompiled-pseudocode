/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801CD248
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$7 @ 0x1801D9C09 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801CD43C (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
