/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x14007922C
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1401F96AC (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140022E74 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(struct _KTHREAD **this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign(this + 6, 0LL);
}
