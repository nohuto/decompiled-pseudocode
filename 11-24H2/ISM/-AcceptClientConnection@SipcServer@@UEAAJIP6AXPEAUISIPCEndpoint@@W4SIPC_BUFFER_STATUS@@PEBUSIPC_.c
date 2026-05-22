/*
 * XREFs of ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@2PEAX@ZP6AX0W4SIPC_ENDPOINT_STATUS@@3@Z3PEAPEAU2@@Z @ 0x18010D320
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180062838 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@52@ZP6AX3W4SIPC_ENDPOINT_STATUS@@2@Z2PEAPEAV1@@Z @ 0x18010E9A8 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoin.c)
 *     ?GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z @ 0x18010F444 (-GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcServer::AcceptClientConnection(
        SipcServer *this,
        __int64 a2,
        void (__high *a3)(struct ISIPCEndpoint *, enum SIPC_BUFFER_STATUS, const struct SIPC_BUFFER_INFO *, const struct SIPC_BUFFER_INFO *, void *),
        void (__high *a4)(struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS, void *),
        void *a5,
        struct ISIPCEndpoint **a6)
{
  struct ISIPCEndpoint **v6; // r15
  __int64 v10; // r8
  __int64 v12; // rcx
  int ServerEndpoint; // ebx
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  SipcServer::EndpointListEntry *v18; // rcx
  HANDLE v19; // [rsp+50h] [rbp-10h] BYREF
  void *v20; // [rsp+58h] [rbp-8h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF

  v6 = a6;
  *a6 = 0LL;
  if ( !a3 || !a4 )
    return 2147942487LL;
  v10 = *((_QWORD *)this + 17);
  if ( !v10 )
    return 2147549183LL;
  v12 = *((_QWORD *)this + 7);
  hObject = 0LL;
  v19 = 0LL;
  a6 = 0LL;
  ServerEndpoint = (*(__int64 (__fastcall **)(__int64, __int64, __int64, HANDLE *, HANDLE *, struct ISIPCEndpoint ***))(*(_QWORD *)v12 + 16LL))(
                     v12,
                     a2,
                     v10,
                     &hObject,
                     &v19,
                     &a6);
  if ( ServerEndpoint < 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
  }
  else
  {
    ServerEndpoint = SipcEndpoint::CreateServerEndpoint(
                       this,
                       (struct SipcPort *)a6,
                       hObject,
                       v19,
                       *(_DWORD *)(*((_QWORD *)this + 17) + 48LL),
                       *(_DWORD *)(*((_QWORD *)this + 17) + 52LL),
                       a3,
                       a4,
                       a5,
                       (struct SipcEndpoint **)(*((_QWORD *)this + 17) + 16LL));
    if ( ServerEndpoint < 0 )
    {
      if ( a6 )
        (*(void (__fastcall **)(struct ISIPCEndpoint **, __int64))*a6)(a6, 1LL);
      CloseHandle(hObject);
      CloseHandle(v19);
    }
    else
    {
      v14 = *((_QWORD *)this + 17);
      v20 = 0LL;
      SipcEndpoint::GetWaitHandles(*(SipcEndpoint **)(v14 + 16), &v20, (void **)(v14 + 32), (void **)(v14 + 40));
      ServerEndpoint = AggregateWaitHandle::AddHandle(
                         (AggregateWaitHandle *)(*(_QWORD *)(v14 + 24) + 64LL),
                         *(void **)(v14 + 32));
      if ( ServerEndpoint >= 0 )
      {
        ServerEndpoint = AggregateWaitHandle::AddHandle(
                           (AggregateWaitHandle *)(*(_QWORD *)(v14 + 24) + 64LL),
                           *(void **)(v14 + 40));
        if ( ServerEndpoint >= 0 )
        {
          v15 = (_QWORD *)*((_QWORD *)this + 17);
          v16 = (_QWORD *)((char *)this + 112);
          v17 = *((_QWORD *)this + 14);
          if ( *(SipcServer **)(v17 + 8) != (SipcServer *)((char *)this + 112) )
            __fastfail(3u);
          v15[1] = v16;
          *v15 = v17;
          *(_QWORD *)(v17 + 8) = v15;
          ++*((_DWORD *)this + 32);
          *v16 = v15;
          *v6 = *(struct ISIPCEndpoint **)(*((_QWORD *)this + 17) + 16LL);
          *((_QWORD *)this + 17) = 0LL;
          return 0LL;
        }
      }
    }
  }
  v18 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 17);
  if ( v18 )
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v18);
  *((_QWORD *)this + 17) = 0LL;
  return (unsigned int)ServerEndpoint;
}
