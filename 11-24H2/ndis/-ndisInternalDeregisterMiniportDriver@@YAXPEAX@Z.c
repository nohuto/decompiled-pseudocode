/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140136BAC
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x140093170 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x140093A20 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006A450 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x140091330 (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(_NDIS_M_DRIVER_BLOCK *this)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      111,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)this);
  MiniportQueue = this->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      this,
      MiniportQueue);
    if ( SLOBYTE(this->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)this, 0LL, 0LL);
  }
  AssociatedProtocol = this->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    this->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&this->Ref.SpinLock) )
  {
    ndisDereferenceDriver(this, 0, 0xFFu);
    if ( (this->Flags & 0xC0) != 0 )
    {
      ndisWaitForKernelObject(&this->MiniportsRemovedEvent);
      KeClearEvent(&this->MiniportsRemovedEvent);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        112,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)this);
    _NDIS_M_DRIVER_BLOCK::~_NDIS_M_DRIVER_BLOCK(this);
  }
}
