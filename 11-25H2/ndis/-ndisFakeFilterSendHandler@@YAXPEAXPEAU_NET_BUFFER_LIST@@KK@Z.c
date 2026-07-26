/*
 * XREFs of ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140092FC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031F80 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     NdisStatusToDropReason @ 0x140047DD0 (NdisStatusToDropReason.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFakeFilterSendHandler(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        char a4)
{
  int v7; // eax
  _PKTMON_PACKET_TYPE PacketType; // r14d
  int v9; // ebx
  bool v10; // zf
  void *CompHandle; // rdx
  struct _NET_BUFFER_LIST *i; // rcx
  unsigned int v13; // ebp
  int v14; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  __int16 v17; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+32h] [rbp-66h]
  __int16 v19; // [rsp+36h] [rbp-62h]
  struct _NET_BUFFER_LIST *v20; // [rsp+38h] [rbp-60h]
  int v21; // [rsp+40h] [rbp-58h]
  _PKTMON_PACKET_TYPE v22; // [rsp+44h] [rbp-54h]
  int v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+4Ch] [rbp-4Ch]
  __int64 v25; // [rsp+50h] [rbp-48h]
  _WORD v26[2]; // [rsp+58h] [rbp-40h] BYREF
  int v27; // [rsp+5Ch] [rbp-3Ch]
  int v28; // [rsp+60h] [rbp-38h]

  if ( byte_1401278B0 )
  {
    if ( (*((_DWORD *)&a1->PktMonComp + 14) & 2) != 0 )
    {
      v7 = NdisStatusToDropReason(a1->FakeStatus);
      PacketType = a1->PktMonComp.PacketType;
      v9 = v7;
      v24 = 0;
      v26[1] = 0;
      v10 = (a2->NblFlags & 0x8000) == 0;
      v18 = 0;
      v19 = 0;
      if ( v10 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          CompHandle = a1->PktMonComp.CompHandle;
          v20 = a2;
          v17 = 40;
          v26[0] = 12;
          v21 = 1;
          v22 = PacketType;
          v23 = 2;
          v25 = 0LL;
          v27 = v9;
          v28 = -536866815;
          (*(void (__fastcall **)(_QWORD, void *, __int16 *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 48LL))(
            xmmword_1401278D0,
            CompHandle,
            &v17,
            v26,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = a1->FakeStatus;
  v13 = a4 & 1;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && a1 )
  {
    switch ( a1->Header.Type )
    {
      case 5u:
        LOBYTE(v14) = FILTER_TEST_FLAG(a1, 1024);
        break;
      case 0x11u:
        LOBYTE(v14) = ((__int64)a1[2].PktMonEdgeLower.ListLink.Blink & 0x1000) != 0;
        break;
      case 0x12u:
        v14 = *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
        break;
      default:
        goto LABEL_21;
    }
    if ( (_BYTE)v14 )
    {
      for ( j = a2; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
      {
        if ( *(struct _NDIS_FILTER_BLOCK **)&j->Context->ContextData[j->Context->Offset] != a1 )
          NblContextVerifierBugcheckContextCorruption(j, a2, a1);
        NdisFreeNetBufferListContext(j, 8u);
      }
    }
  }
LABEL_21:
  LowerFilter = a1->LowerFilter;
  if ( LowerFilter )
    ndisInvokeNextSendCompleteHandler(
      a2,
      v13,
      LowerFilter,
      LowerFilter->NextSendNetBufferListsCompleteObject,
      LowerFilter->NextSendNetBufferListsCompleteContext,
      (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))LowerFilter->NextSendNetBufferListsCompleteHandler);
  else
    ndisInvokeNextSendCompleteHandler(
      a2,
      v13,
      (struct _NDIS_FILTER_BLOCK *)a1->Miniport,
      a1->Miniport->Next.SendNetBufferListsCompleteObject,
      a1->Miniport->Next.SendNetBufferListsCompleteContext,
      (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))a1->Miniport->Next.SendNetBufferListsCompleteHandler);
}
