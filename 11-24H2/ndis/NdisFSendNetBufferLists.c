/*
 * XREFs of NdisFSendNetBufferLists @ 0x1400192A0
 * Callers:
 *     ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400A2910 (-SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140019670 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     NdisAllocateNetBufferListContext @ 0x1400433B0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140073CE0 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008ADA0 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400A2970 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v5; // rcx
  void (*v9)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  int v10; // eax
  struct _NET_BUFFER_LIST *v11; // r15
  int v12; // r9d
  struct _NET_BUFFER_LIST *v13; // r12
  PNET_BUFFER_LIST v14; // r13
  char v15; // al
  PNET_BUFFER_LIST Alignment; // r15
  char v17; // r13
  __int64 v18; // rax
  int v19; // r15d
  bool v20; // zf
  __int64 v21; // rdx
  struct _NDIS_OBJECT_HEADER *v22; // r9
  void *v23; // rax
  void (*v24)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx
  NDIS_HANDLE v25; // r8
  unsigned int Flags; // eax
  unsigned int v27; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r12
  struct _NET_BUFFER_LIST *v29; // [rsp+40h] [rbp-C0h] BYREF
  PNET_BUFFER_LIST v30; // [rsp+48h] [rbp-B8h]
  __int16 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+52h] [rbp-AEh]
  __int16 v33; // [rsp+56h] [rbp-AAh]
  PNET_BUFFER_LIST v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  _QWORD v40[48]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+230h] [rbp+130h]

  v5 = *((_QWORD *)NdisFilterHandle + 57);
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !v5 )
    goto LABEL_2;
  switch ( *(_BYTE *)v5 )
  {
    case 5:
      LOBYTE(v10) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 0x400u) != 0;
      break;
    case 0x11:
      LOBYTE(v10) = (*(_DWORD *)(v5 + 3688) & 0x1000) != 0;
      break;
    case 0x12:
      v10 = *(_DWORD *)(v5 + 224) >> 31;
      break;
    default:
      goto LABEL_2;
  }
  if ( (_BYTE)v10 )
  {
    v41 = *((_QWORD *)NdisFilterHandle + 57);
    v29 = 0LL;
    v30 = (PNET_BUFFER_LIST)&v29;
    v11 = 0LL;
    memset(&v40[1], 0, 0x178uLL);
    v40[0] = NetBufferList;
    v13 = NetBufferList;
    v14 = (PNET_BUFFER_LIST)v40;
    if ( NetBufferList )
    {
      do
      {
        if ( NdisAllocateNetBufferListContext(NetBufferList, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(NetBufferList, v41);
          v14->Link.Alignment = NetBufferList->Link.Alignment;
          NetBufferList->Link.Alignment = 0LL;
          v30->Link.Alignment = (unsigned __int64)NetBufferList;
          v30 = NetBufferList;
          NetBufferList = (PNET_BUFFER_LIST)v14->Link.Alignment;
        }
        else
        {
          v14 = NetBufferList;
          *(_QWORD *)&NetBufferList->Context->ContextData[NetBufferList->Context->Offset] = v41;
          NetBufferList = (PNET_BUFFER_LIST)NetBufferList->Link.Alignment;
        }
      }
      while ( NetBufferList );
      v11 = v29;
      v13 = (struct _NET_BUFFER_LIST *)v40[0];
    }
    v29 = 0LL;
    v30 = (PNET_BUFFER_LIST)&v29;
    NetBufferList = v13;
    if ( v11 )
    {
      if ( byte_14011D800 && (*((_DWORD *)NdisFilterHandle + 210) & 2) != 0 )
        PktMonClientNblDrop((_DWORD)NdisFilterHandle + 784, (_DWORD)v11, *((_DWORD *)NdisFilterHandle + 209), v12);
      v15 = *(_BYTE *)NdisFilterHandle;
      if ( *(_BYTE *)NdisFilterHandle == 5 )
      {
        v25 = (NDIS_HANDLE)*((_QWORD *)NdisFilterHandle + 57);
      }
      else
      {
        if ( v15 != 17 )
          goto LABEL_23;
        v25 = (NDIS_HANDLE)*((_QWORD *)NdisFilterHandle + 321);
      }
      if ( v25 )
      {
        if ( *(_BYTE *)v25 != 5 )
        {
          if ( *(_BYTE *)v25 == 17 )
          {
            v22 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v25 + 324);
            v23 = (void *)*((_QWORD *)v25 + 322);
            v24 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v25 + 327);
            goto LABEL_33;
          }
LABEL_23:
          NblContextVerifierBugcheckInternalError((ULONG_PTR)NdisFilterHandle, (ULONG_PTR)v11);
        }
        v22 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v25 + 61);
        v23 = (void *)*((_QWORD *)v25 + 59);
        v24 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v25 + 58);
      }
      else
      {
        if ( v15 != 17 )
          goto LABEL_23;
        v22 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)NdisFilterHandle + 301);
        v25 = NdisFilterHandle;
        v23 = (void *)*((_QWORD *)NdisFilterHandle + 299);
        v24 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)NdisFilterHandle + 304);
      }
LABEL_33:
      ndisInvokeNextSendCompleteHandler(v11, SendFlags & 1, (struct _NDIS_OBJECT_HEADER *)v25, v22, v23, v24);
      if ( !v13 )
        return;
    }
  }
LABEL_2:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 0x200u) )
  {
    ndisNblVerifyTxIndication(
      NetBufferList,
      PortNumber,
      SendFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle);
    Alignment = NetBufferList;
    if ( NetBufferList )
    {
      v17 = byte_14011CEC0;
      do
      {
        Alignment->Scratch = MmBadPointer;
        Flags = Alignment->Flags;
        Alignment->ChildRefCount = -892679478;
        if ( v17 )
        {
          v17 = 0;
          v27 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v17 = 1;
          v27 = Flags | 0xF0000;
        }
        byte_14011CEC0 = v17;
        Alignment->Flags = v27;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 56),
      NdisNblTrackerEvent_FilterSent,
      SendFlags & 1);
  if ( byte_14011D800 )
  {
    v18 = *((_QWORD *)NdisFilterHandle + 109);
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 56) & 1) != 0 )
      {
        v19 = *((_DWORD *)NdisFilterHandle + 220);
        v20 = (NetBufferList->NblFlags & 0x8000) == 0;
        v32 = 0;
        v33 = 0;
        v38 = 0;
        if ( v20 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v21 = *((_QWORD *)NdisFilterHandle + 108);
            v31 = 40;
            v34 = NetBufferList;
            v35 = 1;
            v36 = v19;
            v37 = 2;
            v39 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1) + 40LL))(
              xmmword_14011D820,
              v21,
              &v31,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v9 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle + 78);
  if ( v9 == ndisFilterSendNetBufferLists )
    ndisFilterSendNetBufferLists(NdisFilterHandle, NetBufferList, PortNumber, SendFlags);
  else
    ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))v9)(
      NdisFilterHandle,
      NetBufferList,
      PortNumber,
      SendFlags);
}
