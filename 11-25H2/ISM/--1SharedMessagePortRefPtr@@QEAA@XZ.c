/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801C59B8
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$7 @ 0x1801D2126 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801C5BAC (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
