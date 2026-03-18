/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x140078CB0
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1401F2E60 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1400530AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140057354 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(struct _KTHREAD **this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign(this + 6, 0LL);
}
