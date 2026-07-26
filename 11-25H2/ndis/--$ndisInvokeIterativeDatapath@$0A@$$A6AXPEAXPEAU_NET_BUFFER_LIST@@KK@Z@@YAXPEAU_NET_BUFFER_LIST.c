/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003C590
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14001F9A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 * Callees:
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

int __fastcall ndisInvokeIterativeDatapath<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *NextSendNetBufferListsContext,
        void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))
{
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v12; // rbp
  struct _NDIS_FILTER_BLOCK *v13; // r14
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *v14; // rsi
  __int64 v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // rsi
  unsigned int v18; // r13d
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // rdi
  unsigned int v22; // r14d
  unsigned int v23; // r13d
  unsigned int v24; // ecx
  __int64 v25; // rdi
  _PKTMON_COMPONENT_CONTEXT *v26; // rax
  bool v27; // zf
  void *EdgeHandle; // rdx
  _PKTMON_COMPONENT_CONTEXT *v29; // rax
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  void *VerifierContext; // rdx
  void *v32; // rcx
  unsigned int v34; // [rsp+40h] [rbp-78h]
  _QWORD v35[3]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v36; // [rsp+68h] [rbp-50h] BYREF
  __int128 v37; // [rsp+78h] [rbp-40h]
  __int64 v38; // [rsp+88h] [rbp-30h]
  unsigned int v39; // [rsp+C8h] [rbp+10h]
  _PKTMON_PACKET_TYPE PacketType; // [rsp+E0h] [rbp+28h]

  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v8 = v35;
  v34 = v7;
  v35[2] = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v35[0] = a1;
  v35[1] = a1;
  *(_DWORD *)(a1 + 132) = a4;
  *(_DWORD *)(a1 + 140) = a3;
  while ( a5->Header.Type == 5 )
  {
    v12 = *v8;
    if ( !*v8 )
      break;
    v13 = a5;
    v14 = a5->IterativeDataPathTracker[v7];
    if ( v14->IterationInProgress )
    {
      *v8 = 0LL;
      do
      {
        v16 = *(_DWORD *)(v12 + 132);
        v17 = *(_QWORD *)(v12 + 112);
        v18 = *(_DWORD *)(v12 + 140);
        *(_DWORD *)(v12 + 132) = 0;
        if ( byte_1401278B0 )
        {
          if ( a5->Header.Type == 5 )
          {
            CompContext = a5->PktMonEdgeUpper.CompContext;
            if ( CompContext )
            {
              if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
                PktMonClientNblLogNdis((__int64)&a5->PktMonEdgeUpper, v12, a3, 2);
            }
          }
        }
        if ( ndisIsFilterVerified(a5) )
          LODWORD(v7) = (*((__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
                         + 10))(
                          NextSendNetBufferListsContext,
                          v12,
                          v18,
                          v16,
                          a5->VerifierContext,
                          NextSendNetBufferListsHandler);
        else
          LODWORD(v7) = ((__int64 (__fastcall *)(void *, __int64, _QWORD, _QWORD))NextSendNetBufferListsHandler)(
                          NextSendNetBufferListsContext,
                          v12,
                          v18,
                          v16);
        v12 = v17;
      }
      while ( v17 );
      break;
    }
    v14->IterationInProgress = 1;
    v15 = *v8;
    *v8 = 0LL;
    if ( v15 )
    {
      do
      {
        v23 = *(_DWORD *)(v15 + 132);
        v24 = *(_DWORD *)(v15 + 140);
        v25 = *(_QWORD *)(v15 + 112);
        *(_DWORD *)(v15 + 132) = 0;
        v39 = v24;
        if ( byte_1401278B0 )
        {
          if ( a5->Header.Type == 5 )
          {
            v26 = a5->PktMonEdgeUpper.CompContext;
            if ( v26 )
            {
              if ( (*((_DWORD *)v26 + 14) & 1) != 0 )
              {
                PacketType = a5->PktMonEdgeUpper.PacketType;
                v27 = (*(_DWORD *)(v15 + 128) & 0x8000) == 0;
                v36 = 0LL;
                LODWORD(v38) = 0;
                v37 = 0LL;
                if ( v27 )
                {
                  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                  {
                    EdgeHandle = a5->PktMonEdgeUpper.EdgeHandle;
                    *(_QWORD *)((char *)&v37 + 4) = (unsigned int)PacketType | 0x200000000LL;
                    LOWORD(v36) = 40;
                    *((_QWORD *)&v36 + 1) = v15;
                    LODWORD(v37) = 1;
                    v38 = 0LL;
                    (*(void (__fastcall **)(_QWORD, void *, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1)
                                                                               + 40LL))(
                      xmmword_1401278D0,
                      EdgeHandle,
                      &v36,
                      0LL);
                    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                  }
                  v24 = v39;
                }
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && a5->Header.Type == 5 && (VerifierContext = a5->VerifierContext) != 0LL )
          (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 10))(
            NextSendNetBufferListsContext,
            v15,
            v24,
            v23,
            VerifierContext,
            NextSendNetBufferListsHandler);
        else
          NextSendNetBufferListsHandler(NextSendNetBufferListsContext, (_NET_BUFFER_LIST *)v15, v24, v23);
        v15 = v25;
      }
      while ( v25 );
      v13 = a5;
    }
    v7 = v34;
    v8 = (__int64 *)v14;
    v14->IterationInProgress = 0;
    a5 = (struct _NDIS_FILTER_BLOCK *)a5->NextSendNetBufferListsObject;
    NextSendNetBufferListsHandler = v13->NextSendNetBufferListsHandler;
    NextSendNetBufferListsContext = v13->NextSendNetBufferListsContext;
  }
  v19 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    do
    {
      v20 = *(_DWORD *)(v19 + 132);
      v21 = *(_QWORD *)(v19 + 112);
      v22 = *(_DWORD *)(v19 + 140);
      *(_DWORD *)(v19 + 132) = 0;
      if ( byte_1401278B0 )
      {
        if ( a5->Header.Type == 5 )
        {
          v29 = a5->PktMonEdgeUpper.CompContext;
          if ( v29 )
          {
            if ( (*((_DWORD *)v29 + 14) & 1) != 0 )
              PktMonClientNblLogNdis((__int64)&a5->PktMonEdgeUpper, v19, a3, 2);
          }
        }
      }
      if ( ndisVerifierNdisDispatch && a5->Header.Type == 5 && (v32 = a5->VerifierContext) != 0LL )
        LODWORD(v7) = (*((__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
                       + 10))(
                        NextSendNetBufferListsContext,
                        v19,
                        v22,
                        v20,
                        v32,
                        NextSendNetBufferListsHandler);
      else
        LODWORD(v7) = ((__int64 (__fastcall *)(void *, __int64, _QWORD, _QWORD))NextSendNetBufferListsHandler)(
                        NextSendNetBufferListsContext,
                        v19,
                        v22,
                        v20);
      v19 = v21;
    }
    while ( v21 );
  }
  return v7;
}
