/*
 * XREFs of ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0
 * Callers:
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004AF60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14004B900 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009F190 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x14009F2E0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D3350 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1400D3F08 (ndisNsiEnumerateAllIfRcvAddressesInOneInterface.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D4020 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D4310 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x14015A5C0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIfQueryObject @ 0x14015A900 (ndisIfQueryObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x14015C090 (ndisNsiGetInterfaceRosInformation.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned __int8 a3)
{
  ULONG_PTR v4; // rbx
  KIRQL v5; // al
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // r8
  KIRQL v7; // bp
  __int64 v8; // r9
  unsigned __int8 j; // al
  _BYTE *v11; // rdx
  char v12; // cl
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v15; // rsi
  unsigned int v16; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx

  v4 = a3;
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  MpRefCountTracker = a1->MpRefCountTracker;
  v7 = v5;
  if ( (unsigned __int64)MpRefCountTracker - 2 > 1 )
  {
    if ( (unsigned __int64)MpRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)MpRefCountTracker, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)MpRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, 0xFFuLL);
      *(_BYTE *)MpRefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)MpRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)MpRefCountTracker, v4);
      if ( *((_BYTE *)MpRefCountTracker + 1) )
      {
        if ( *((_BYTE *)MpRefCountTracker + 1) != 1 )
          goto LABEL_8;
        v15 = MpRefCountTracker + 16 * v4;
        v16 = *((_DWORD *)v15 + 16);
        if ( v16 >> 17 >= 0x3FFE || (unsigned __int16)v16 >> 1 != (v16 >> 17) + 1 )
        {
          if ( (unsigned __int16)v16 >> 1 || (v16 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
            goto LABEL_8;
          }
          goto LABEL_17;
        }
        for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1);
              i;
              i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1) )
        {
          *((_QWORD *)v15 + 1) = i->Next;
          ndisFreeRefCountStacksInBlock(i);
          ExFreePoolWithTag(i, 0);
        }
        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
        *((_DWORD *)v15 + 16) &= 0x10001u;
      }
      else
      {
        v8 = *((_QWORD *)MpRefCountTracker + 1);
        if ( !v8 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)MpRefCountTracker + 4, v4) )
            goto LABEL_8;
LABEL_17:
          ndisReportRefcountImbalance((ULONG_PTR)MpRefCountTracker, v4);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *((_BYTE *)MpRefCountTracker + 3) )
            goto LABEL_7;
          v11 = (_BYTE *)(v8 + 2LL * j);
          if ( *v11 == (_BYTE)v4 )
          {
            v12 = v11[1];
            if ( v12 )
              break;
          }
        }
        v11[1] = v12 - 1;
      }
    }
  }
LABEL_8:
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v7);
}
