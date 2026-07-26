/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140050D80
 * Callers:
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140007790 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisFDirectOidRequest @ 0x140050C10 (NdisFDirectOidRequest.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_qqqq @ 0x14003D840 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v5; // rsi
  struct _NDIS_OID_REQUEST *v8; // r15
  KIRQL v9; // r13
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rbx
  KIRQL v11; // al
  KIRQL v12; // r15
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KSPIN_LOCK *p_SpinLock; // rdi
  KIRQL v16; // al
  KIRQL v17; // r14
  unsigned int v18; // ebx
  _REFERENCE_EX *p_PnPRef; // rcx
  int v20; // r14d
  unsigned __int16 v21; // ax
  struct _NDIS_REFCOUNT_BLOCK *v22; // rcx
  unsigned __int8 v23; // bl
  __int64 v25; // [rsp+38h] [rbp-60h]
  _QWORD Parameter[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0LL;
  v8 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
    v11 = KeAcquireSpinLockRaiseToDpc(&a4->PnPRef.SpinLock);
    v12 = v11;
    if ( a4->PnPRef.Closing )
    {
      KeReleaseSpinLock(&a4->PnPRef.SpinLock, v11);
      v20 = 1;
    }
    else
    {
      ReferenceCount = a4->PnPRef.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = a4->PnPRef.RefCountTracker;
        a4->PnPRef.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x12u);
        KeReleaseSpinLock(&a4->PnPRef.SpinLock, v12);
        if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
        {
          NextDirectRequestHandle = a4;
        }
        else if ( a4->NextDirectRequestHandle )
        {
          NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
        }
        ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
LABEL_14:
        v8 = a1;
        goto LABEL_15;
      }
      ndisRefCountReferenceCountOverflow = 1;
      p_PnPRef = &a4->PnPRef;
      v20 = 2;
      KeReleaseSpinLock(&p_PnPRef->SpinLock, v12);
    }
    if ( v20 != 1 )
    {
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v9);
      v18 = -1073741670;
      goto LABEL_36;
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( NextDirectRequestHandle->Header.Type != 5 )
  {
LABEL_18:
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v9);
    goto LABEL_19;
  }
  while ( 1 )
  {
    p_SpinLock = &NextDirectRequestHandle->PnPRef.SpinLock;
    v5 = NextDirectRequestHandle;
    v16 = KeAcquireSpinLockRaiseToDpc(&NextDirectRequestHandle->PnPRef.SpinLock);
    v17 = v16;
    if ( !NextDirectRequestHandle->PnPRef.Closing )
      break;
    KeReleaseSpinLock(p_SpinLock, v16);
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
    v5 = 0LL;
    if ( NextDirectRequestHandle->Header.Type != 5 )
      goto LABEL_18;
  }
  v21 = NextDirectRequestHandle->PnPRef.ReferenceCount;
  if ( v21 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    KeReleaseSpinLock(p_SpinLock, v17);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v9);
    v5 = 0LL;
    v18 = -1073741670;
LABEL_36:
    if ( v18 == 259 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v22 = (struct _NDIS_REFCOUNT_BLOCK *)NextDirectRequestHandle->PnPRef.RefCountTracker;
  NextDirectRequestHandle->PnPRef.ReferenceCount = v21 + 1;
  NdisReferenceWithTag(v22, 0x10u);
  KeReleaseSpinLock(p_SpinLock, v17);
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v9);
  if ( NextDirectRequestHandle
    && !NextDirectRequestHandle->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
  {
    goto LABEL_20;
  }
LABEL_19:
  if ( a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
  {
    if ( v5 )
    {
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[1] = v5;
      Parameter[3] = v8;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisFDoDirectOidRequestInternal,
             Parameter,
             (unsigned int)Size,
             0,
             0LL) < 0 )
      {
        v18 = -1073741670;
        ndisDereferenceRef(&v5->PnPRef.SpinLock, 0x10u);
        goto LABEL_40;
      }
      v18 = Parameter[0];
    }
    else
    {
      v23 = (a2->Flags & 0x80) != 0;
      if ( !(unsigned __int8)ndisReferenceMiniport(a2, 0x49u) )
      {
        v18 = -1073741823;
        goto LABEL_40;
      }
      v18 = ndisMDoDirectOidRequest(a2, v8, v23);
      ndisDereferenceMiniport(a2, 0x49u);
    }
    goto LABEL_36;
  }
LABEL_20:
  v18 = -1073741637;
LABEL_37:
  if ( v5 )
    ndisDereferenceRef(&v5->PnPRef.SpinLock, 0x10u);
LABEL_40:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v18;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      v25);
  }
  return v18;
}
