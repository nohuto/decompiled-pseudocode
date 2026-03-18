/*
 * XREFs of ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403DBB1C
 * Callers:
 *     _lambda_d15561d970b8cd1158562b53bc5433ff_::operator() @ 0x1401BDBC0 (_lambda_d15561d970b8cd1158562b53bc5433ff_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1840 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x1403E9CAC (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403DBB8C (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
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
