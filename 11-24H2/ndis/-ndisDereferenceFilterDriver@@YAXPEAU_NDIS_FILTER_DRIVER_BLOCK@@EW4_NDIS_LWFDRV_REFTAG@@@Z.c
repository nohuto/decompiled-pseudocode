/*
 * XREFs of ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14004EE60
 * Callers:
 *     NdisFreeIoWorkItem @ 0x14004EA30 (NdisFreeIoWorkItem.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x14004EC40 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x140057270 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x14009ABF0 (NdisFDeregisterFilterDriver.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x14013D5D8 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FD60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x1400999E4 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this, char a2, unsigned __int8 a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v5; // rbx
  KIRQL v6; // bp
  PVOID *i; // rcx
  _NDIS_FILTER_DRIVER_BLOCK *v8; // rax
  wchar_t *Buffer; // rcx

  v5 = this;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      57,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)this);
  if ( (unsigned __int8)ndisDereferenceRef(&v5->Ref.SpinLock, a3) )
  {
    if ( !a2 )
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    for ( i = &ndisFilterDriverList; ; i = (PVOID *)&v8->NextFilterDriver )
    {
      v8 = (_NDIS_FILTER_DRIVER_BLOCK *)*i;
      if ( !*i )
        break;
      if ( v8 == v5 )
      {
        *i = v5->NextFilterDriver;
        ObfDereferenceObject(ndisDriverObject);
        break;
      }
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisFilterDriverListLock, v6);
    Buffer = v5->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v5->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::~_NDIS_FILTER_DRIVER_BLOCK(v5);
    ExFreePoolWithTag(v5, 0);
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      58,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)v5);
}
