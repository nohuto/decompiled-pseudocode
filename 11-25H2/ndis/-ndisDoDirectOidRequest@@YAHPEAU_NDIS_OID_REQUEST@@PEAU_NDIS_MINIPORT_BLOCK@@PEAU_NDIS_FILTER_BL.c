/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005B6B0 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x14006C720 (NdisFDirectOidRequest.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x14000E770 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x140027570 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // rsi
  struct _NDIS_OID_REQUEST *v8; // r12
  KIRQL v9; // r15
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rdi
  int v11; // ebp
  int v12; // edx
  unsigned int v13; // edi
  unsigned int v15; // edi
  KIRQL v16; // al
  bool v17; // zf
  KIRQL v18; // r12
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  _QWORD Parameter[11]; // [rsp+50h] [rbp-58h] BYREF
  int v23; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0LL;
  v23 = 0;
  v8 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  if ( a3 )
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextDirectRequestHandle;
  else
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a2->Next.DirectRequestHandle;
  if ( a4 )
  {
    if ( ndisReferenceRefEx(&a4->PnPRef.SpinLock, 0x12u, (enum _NDIS_REFERENCE_STATUS *)&v23) )
    {
      if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      {
        NextDirectRequestHandle = a4;
      }
      else if ( a4->NextDirectRequestHandle )
      {
        NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
      }
      ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
    }
    else if ( v23 != 1 )
    {
      v17 = v23 == 2;
      a2->MiniportThread = 0LL;
      v13 = -1073741823;
      if ( v17 )
        v13 = -1073741670;
      KeReleaseSpinLock(&a2->Lock, v9);
      goto LABEL_14;
    }
    v11 = 0;
  }
  else
  {
    v11 = v23;
  }
  if ( NextDirectRequestHandle->Header.Type == 5 )
  {
    while ( 1 )
    {
      v4 = NextDirectRequestHandle;
      v16 = KeAcquireSpinLockRaiseToDpc(&NextDirectRequestHandle->PnPRef.SpinLock);
      v17 = NextDirectRequestHandle->PnPRef.Closing == 0;
      v18 = v16;
      v23 = 1;
      if ( v17 )
        break;
      KeReleaseSpinLock(&NextDirectRequestHandle->PnPRef.SpinLock, v16);
      NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
      v4 = 0LL;
      v11 = 0;
      if ( NextDirectRequestHandle->Header.Type != 5 )
        goto LABEL_29;
    }
    ReferenceCount = NextDirectRequestHandle->PnPRef.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v11 = 2;
    }
    else
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)NextDirectRequestHandle->PnPRef.RefCountTracker;
      NextDirectRequestHandle->PnPRef.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(RefCountTracker, 0x10u);
      v11 = 0;
    }
    KeReleaseSpinLock(&NextDirectRequestHandle->PnPRef.SpinLock, v18);
LABEL_29:
    v8 = a1;
  }
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v9);
  if ( !v11 )
  {
    if ( v4 && !v4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler
      || !a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
      v13 = -1073741637;
LABEL_18:
      if ( !v4 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( v4 )
    {
      Parameter[1] = v4;
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[3] = v8;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisFDoDirectOidRequestInternal,
             Parameter,
             (unsigned int)Size,
             0,
             0LL) < 0 )
      {
        v13 = -1073741670;
LABEL_19:
        ndisDereferenceRef(&v4->PnPRef.SpinLock, 0x10u);
        goto LABEL_20;
      }
      v13 = Parameter[0];
    }
    else
    {
      v15 = a2->Flags & 0x80;
      if ( !(unsigned __int8)ndisReferenceMiniport(a2, 0x49u) )
      {
        v13 = -1073741823;
        goto LABEL_20;
      }
      v13 = ndisMDoDirectOidRequest(a2, v8, v15 != 0);
      ndisDereferenceMiniport(a2, 0x49u);
    }
LABEL_14:
    if ( v13 == 259 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v13 = -1073741823;
  if ( v11 == 2 )
    v13 = -1073741670;
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      29,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v8,
      (char)a2,
      v13);
  }
  return v13;
}
