/*
 * XREFs of ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisFreeIoWorkItem @ 0x140019680 (NdisFreeIoWorkItem.c)
 *     NdisAllocateIoWorkItem @ 0x1400721D0 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1400A3DC0 (NdisFDeregisterFilterDriver.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1401484B8 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015E430 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall ndisDereferenceFilterDriver(struct _NDIS_FILTER_DRIVER_BLOCK *a1, char a2, unsigned __int8 a3)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v5; // rbx
  KIRQL v6; // bp
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID *i; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK *v10; // rax
  wchar_t *Buffer; // rcx

  v5 = a1;
  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      56,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  if ( (unsigned __int8)ndisDereferenceRef(&v5->Ref.SpinLock, a3) )
  {
    if ( !a2 )
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    for ( i = &ndisFilterDriverList; ; i = (PVOID *)&v10->NextFilterDriver )
    {
      v10 = (struct _NDIS_FILTER_DRIVER_BLOCK *)*i;
      if ( !*i )
        break;
      if ( v10 == v5 )
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
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v5->Bind, v7, v8);
    ExFreePoolWithTag(v5, 0);
    LOBYTE(v5) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      57,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)v5);
}
