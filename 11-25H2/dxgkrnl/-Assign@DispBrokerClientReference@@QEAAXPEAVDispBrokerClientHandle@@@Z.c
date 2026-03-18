/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1400530AC
 * Callers:
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14006D070 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x140078CB0 (--1DispBrokerClient@@QEAA@XZ.c)
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BB248 (_lambda_ab20bd11cb5e847b50387722fd71407e_--operator().c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403E21A8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403E4028 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8190 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x1403EFACC (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DispBrokerClientHandle@@QEAA@XZ @ 0x14005AB8C (--1DispBrokerClientHandle@@QEAA@XZ.c)
 */

void __fastcall DispBrokerClientReference::Assign(DispBrokerClientHandle **this, struct DispBrokerClientHandle *a2)
{
  DispBrokerClientHandle *v2; // rdi

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        DispBrokerClientHandle::~DispBrokerClientHandle(v2);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
