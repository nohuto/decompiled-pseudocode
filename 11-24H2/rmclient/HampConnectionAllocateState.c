/*
 * XREFs of HampConnectionAllocateState @ 0x180004640
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180004240 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180004330 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180004470 (HampConnectionCreate.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     RmSubscriptionStart @ 0x180004E10 (RmSubscriptionStart.c)
 *     HampConnectionDeserializeActivities @ 0x180005128 (HampConnectionDeserializeActivities.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HampConnectionAllocateState(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  char v7; // r14
  RPC_STATUS v8; // eax
  void *Pointer; // rbx
  bool v10; // cc
  CLIENT_CALL_RETURN v11; // rax
  int v13; // ecx
  _QWORD *v14; // r12
  _QWORD *v15; // r15
  _QWORD *Heap; // rax
  _QWORD *v17; // rbx
  int v18; // esi
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-140h] BYREF
  RPC_BINDING_HANDLE v20; // [rsp+70h] [rbp-138h] BYREF
  __int64 v21; // [rsp+78h] [rbp-130h]
  CLIENT_CALL_RETURN v22; // [rsp+80h] [rbp-128h]
  CLIENT_CALL_RETURN v23; // [rsp+88h] [rbp-120h]
  CLIENT_CALL_RETURN v24; // [rsp+90h] [rbp-118h]
  CLIENT_CALL_RETURN v25; // [rsp+98h] [rbp-110h]
  CLIENT_CALL_RETURN v26; // [rsp+A0h] [rbp-108h]
  __int64 v27; // [rsp+A8h] [rbp-100h]
  __int64 v28; // [rsp+B0h] [rbp-F8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W v29; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-C8h] BYREF
  int v31; // [rsp+E8h] [rbp-C0h]
  int v32; // [rsp+ECh] [rbp-BCh]
  __int128 v33; // [rsp+F0h] [rbp-B8h]
  __int128 v34; // [rsp+100h] [rbp-A8h]
  __int64 v35; // [rsp+110h] [rbp-98h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v36; // [rsp+118h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v37; // [rsp+128h] [rbp-80h] BYREF

  v27 = a1;
  v28 = a4;
  v20 = 0LL;
  v7 = 0;
  v21 = 0LL;
  Binding = 0LL;
  memset(&v37, 0, sizeof(v37));
  *(_QWORD *)&v36.ComTimeout = 5LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  *(_QWORD *)(&v29.Version + 1) = 0LL;
  HIDWORD(v29.ServerPrincName) = 0;
  v29.AuthIdentity = 0LL;
  v37.Version = 1;
  v37.ProtocolSequence = 3;
  *(_QWORD *)&v36.Version = 0x100000001LL;
  v30 = 5LL;
  v31 = 1;
  v32 = 3;
  v29.Version = 1;
  v29.AuthnLevel = 6;
  v29.AuthnSvc = 10;
  v29.SecurityQos = (RPC_SECURITY_QOS *)&v30;
  v8 = RpcBindingCreateW(&v37, &v29, &v36, &Binding);
  LODWORD(Pointer) = v8;
  v10 = v8 <= 0;
  if ( v8 || (v8 = RpcBindingBind(0LL, Binding, a2), LODWORD(Pointer) = v8, v10 = v8 <= 0, v8) )
  {
    if ( !v10 )
      LODWORD(Pointer) = (unsigned __int16)v8 | 0xC0070000;
  }
  else
  {
    v20 = Binding;
    Binding = 0LL;
    LODWORD(Pointer) = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( (int)Pointer >= 0 )
  {
    v7 = 1;
    if ( *(_BYTE *)(a1 + 156) )
    {
      switch ( *(_BYTE *)(a1 + 156) )
      {
        case 1:
          Binding = 0LL;
          Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFA0, 0, 0LL).Pointer;
          Binding = Pointer;
          break;
        case 2:
          v22.Simple = 0LL;
          v22.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFD0, 0, 0LL).Pointer;
          LODWORD(Pointer) = v22.Pointer;
          break;
        case 3:
          v23.Simple = 0LL;
          v11.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021CA0, 0, 0LL).Pointer;
          v23.Pointer = v11.Pointer;
          goto LABEL_9;
        case 4:
          v25.Simple = 0LL;
          v25.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001F000, 0, 0LL).Pointer;
          LODWORD(Pointer) = v25.Pointer;
          break;
        case 5:
          v26.Simple = 0LL;
          v26.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EA50, 0, 0LL).Pointer;
          LODWORD(Pointer) = v26.Pointer;
          break;
        case 6:
          v24.Simple = 0LL;
          v24.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EDF8, 0, 0LL).Pointer;
          LODWORD(Pointer) = v24.Pointer;
          break;
        default:
          LODWORD(Pointer) = -1073741127;
          break;
      }
    }
    else
    {
      *(_QWORD *)&v36.Version = 0LL;
      v11.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL).Pointer;
      *(CLIENT_CALL_RETURN *)&v36.Version = v11;
LABEL_9:
      LODWORD(Pointer) = v11.Pointer;
    }
    if ( (int)Pointer >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v21;
      v13 = *(unsigned __int8 *)(a1 + 156);
      if ( v13 != 3 )
      {
        if ( *(_BYTE *)(a1 + 156) )
        {
          if ( (unsigned int)(v13 - 1) >= 2 )
            goto LABEL_32;
        }
        else
        {
          LODWORD(Pointer) = HampConnectionDeserializeActivities(a1, a4);
          if ( (int)Pointer < 0 )
            goto LABEL_19;
        }
      }
      v14 = (_QWORD *)(a1 + 16);
      v15 = (_QWORD *)(a1 + 24);
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
      v17 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, 0x48uLL);
        v17[6] = *v14;
        RtlInitializeSRWLock(v17 + 4);
        v17[3] = v17 + 2;
        v17[2] = v17 + 2;
        v17[5] = HampIpcChannelWnfCallback;
        v17[1] = v15;
        *((_DWORD *)v17 + 16) &= ~1u;
        v18 = TpAllocWork(v17 + 7, RmpClientWnfMessageQueueWorker, v17, 0LL);
        if ( v18 >= 0 )
          v18 = 0;
        if ( v18 >= 0 )
        {
          v18 = RmSubscriptionStart(v14, v17);
          if ( v18 >= 0 )
          {
            *v15 = v17;
            v17 = 0LL;
            v18 = 0;
          }
        }
      }
      else
      {
        v18 = -1073741801;
      }
      if ( v17 )
        RmpClientWnfDestroySubscription(v17);
      if ( v18 >= 0 )
        v18 = 0;
      LODWORD(Pointer) = v18;
      if ( v18 < 0 )
        goto LABEL_19;
LABEL_32:
      LODWORD(Pointer) = 0;
    }
  }
LABEL_19:
  if ( v7 )
    RpcBindingFree(&v20);
  return (unsigned int)Pointer;
}
