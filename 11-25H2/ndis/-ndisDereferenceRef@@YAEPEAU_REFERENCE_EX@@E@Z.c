/*
 * XREFs of ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003424 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140015040 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140056D10 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140068C70 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x140068E40 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140089250 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McGenControlCallbackV2 @ 0x140091C20 (McGenControlCallbackV2.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0AFC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400C50C0 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CE0FC (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1400CE290 (ndisFCancelDirectOidRequestInternal.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400CE770 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x140173120 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  ULONG_PTR v2; // rbx
  KIRQL v4; // al
  ULONG_PTR v5; // r10
  KIRQL v6; // bp
  __int64 v7; // r8
  unsigned __int8 v9; // bl
  unsigned __int8 j; // al
  _BYTE *v12; // rdx
  char v13; // cl
  ULONG_PTR v14; // rsi
  unsigned int v15; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx
  ULONG_PTR v17; // rsi
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v19; // rax
  struct _NDIS_REFCOUNT_BLOCK *v20; // rsi

  v2 = a2;
  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[2];
  v6 = v4;
  if ( v5 - 2 > 1 )
  {
    if ( v5 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, SpinLock[2], 0LL);
    if ( (_BYTE)v2 == 0xFF )
    {
      if ( (*(_BYTE *)v5 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, SpinLock[2], 0xFFuLL);
      *(_BYTE *)v5 &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v2 >= *(_BYTE *)(v5 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, SpinLock[2], v2);
      if ( *(_BYTE *)(v5 + 1) )
      {
        if ( *(_BYTE *)(v5 + 1) == 1 )
        {
          v14 = v5 + (v2 << 6);
          v15 = *(_DWORD *)(v14 + 64);
          if ( v15 >> 17 < 0x3FFE && (unsigned __int16)v15 >> 1 == (v15 >> 17) + 1 )
          {
            for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v14 + 8);
                  i;
                  i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v14 + 8) )
            {
              *(_QWORD *)(v14 + 8) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 8));
            *(_DWORD *)(v14 + 64) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v15 >> 1) && (v15 & 1) == 0 )
              goto LABEL_18;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 8), 0);
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( !v7 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)(v5 + 16), v2) )
            goto LABEL_8;
LABEL_18:
          ndisReportRefcountImbalance(v5, v2);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_BYTE *)(v5 + 3) )
            goto LABEL_7;
          v12 = (_BYTE *)(v7 + 2LL * j);
          if ( *v12 == (_BYTE)v2 )
          {
            v13 = v12[1];
            if ( v13 )
              break;
          }
        }
        v12[1] = v13 - 1;
      }
    }
  }
LABEL_8:
  if ( (*((_WORD *)SpinLock + 4))-- == 1 )
  {
    v9 = 1;
    if ( !*((_BYTE *)SpinLock + 11) )
    {
      v17 = SpinLock[2];
      if ( v17 )
      {
        AnyActiveRefTag = ndisGetAnyActiveRefTag((struct NDIS_REFCOUNT_HANDLE__ *)SpinLock[2]);
        if ( AnyActiveRefTag != -2 )
          ndisBugCheckEx(0x1EuLL, 4uLL, v17, AnyActiveRefTag);
        v19 = ndisRefCountBlockFromRefCountHandle(v17);
        v20 = v19;
        if ( v19 )
        {
          ndisFreeRefCountAuxiliaryMemory(v19);
          ExFreePoolWithTag(v20, 0);
        }
      }
      SpinLock[2] = 1LL;
    }
  }
  else
  {
    v9 = 0;
  }
  KeReleaseSpinLock(SpinLock, v6);
  return v9;
}
