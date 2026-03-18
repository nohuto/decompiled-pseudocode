/*
 * XREFs of ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403E4028
 * Callers:
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8190 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x1403EFACC (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1400530AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403E4098 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

DispBrokerClientHandle **__fastcall DispBrokerClient::ReferencePort(struct _KTHREAD **a1, DispBrokerClientHandle **a2)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  DispBrokerClientReference::Assign(a2, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, a1 + 2, 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v5);
  if ( DispBrokerClient::IsClientHandleValid((DispBrokerClient *)a1) )
    DispBrokerClientReference::Assign(a2, a1[6]);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  return a2;
}
