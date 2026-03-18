/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1403B4470
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x140034A0C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004FBB0 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14006CB50 (-RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x14007B57C (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this)
{
  __int64 v2; // r8
  void **v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  DXGK_VIRTUAL_GPU_PARAV *v7; // rcx
  _BYTE *v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 688;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_InDestructor == TRUE", 688LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 239));
  v3 = (void **)((char *)this + 1304);
  v4 = 16LL;
  v5 = (_DWORD *)((char *)this + 1432);
  do
  {
    if ( *(v5 - 112) )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(v3 - 56));
    if ( *v5 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v3);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (*((_BYTE *)this + 1901) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 60);
    if ( v6 )
    {
      v11 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v6, 1, v2, &v11);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
    v7 = (DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)this + 14);
    if ( v7 )
      DXGK_VIRTUAL_GPU_PARAV::RemoveDxgDevice(v7, (struct _LIST_ENTRY *)((char *)this + 120));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 11) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
    KeLeaveCriticalRegion();
    v8 = (char *)this + 1901;
  }
  else
  {
    v8 = (char *)this + 1901;
  }
  v9 = (void *)*((_QWORD *)this + 243);
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 60);
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( v10 )
      CRefCountedBuffer::RefCountedBufferRelease(v10);
  }
  else
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  }
  if ( (*v8 & 4) != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL), 0xFFFFFFFF) == 1 )
  {
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 2) + 176LL), 0LL);
  }
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 70);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 68);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 66);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 64);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 62);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
