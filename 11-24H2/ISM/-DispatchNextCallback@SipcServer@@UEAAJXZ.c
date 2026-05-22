/*
 * XREFs of ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062490
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180062838 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800629A0 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010EC70 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     ?DispatchDisconnectCallback@SipcEndpoint@@QEAAXXZ @ 0x18010ED38 (-DispatchDisconnectCallback@SipcEndpoint@@QEAAXXZ.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x18010EE2C (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x180110350 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 *     SipcFailFast @ 0x1801108AC (SipcFailFast.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed int __fastcall SipcServer::DispatchNextCallback(SipcServer *this)
{
  char *v1; // r15
  _QWORD *v3; // rbx
  char *i; // rax
  __int64 *v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  void *v8; // rcx
  signed int result; // eax
  int Callback; // esi
  int v11; // eax
  __int64 **j; // rbx
  bool v13; // sf
  __int64 v14; // rbx
  SipcServer *m; // rax
  __int64 *k; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  SipcServer::EndpointListEntry *v19; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 CompletionKey; // [rsp+38h] [rbp-31h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v24[4]; // [rsp+58h] [rbp-11h] BYREF
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]

  v1 = (char *)this + 64;
  if ( !*((_QWORD *)this + 9) )
  {
LABEL_2:
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  v8 = *(void **)v1;
  NumberOfBytesTransferred = 0;
  CompletionKey = 0LL;
  v5 = 0LL;
  Overlapped = 0LL;
  if ( GetQueuedCompletionStatus(v8, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0) )
  {
    v3 = (_QWORD *)CompletionKey;
    for ( i = (char *)*((_QWORD *)v1 + 3); ; i = *(char **)i )
    {
      if ( i == v1 + 24 )
        goto LABEL_2;
      if ( i == (char *)CompletionKey )
        break;
    }
    v5 = *(__int64 **)(CompletionKey + 16);
    CloseHandle(*(HANDLE *)(CompletionKey + 24));
    operator delete(*((void **)v1 + 2));
    v6 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --*((_DWORD *)this + 26);
    *((_QWORD *)v1 + 2) = v3;
LABEL_12:
    if ( v5 != (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 40LL))(*((_QWORD *)this + 7)) )
    {
      if ( !v5 )
        return 1;
      for ( j = (__int64 **)*((_QWORD *)this + 14); ; j = (__int64 **)*j )
      {
        if ( j == (__int64 **)((char *)this + 112) )
        {
          SipcFailFast(2147549183LL);
          JUMPOUT(0x18006282ELL);
        }
        if ( v5 == j[4] || v5 == j[5] )
          break;
      }
      Callback = SipcEndpoint::DispatchNextCallback((SipcEndpoint *)j[2], v5);
      if ( Callback < 0 || (Callback = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)v1, v5), Callback < 0) )
      {
        SipcEndpoint::Disconnect((SipcEndpoint *)j[2]);
        SipcEndpoint::DispatchDisconnectCallback((SipcEndpoint *)j[2]);
        SipcServer::RemoveEndpoint((SipcServer *)((char *)this + 16), (struct SipcEndpoint *)j[2]);
      }
      return Callback;
    }
    memset_0(&v23, 0, 0x40uLL);
    Callback = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 7) + 32LL))(
                 *((_QWORD *)this + 7),
                 &v23);
    if ( !Callback )
    {
      if ( v23 < 2 )
        goto LABEL_57;
      switch ( v23 )
      {
        case 2u:
          for ( k = (__int64 *)*((_QWORD *)this + 14); k != (__int64 *)((char *)this + 112); k = (__int64 *)*k )
          {
            if ( *((_DWORD *)k + 12) == v25 )
            {
              SipcEndpoint::Disconnect((SipcEndpoint *)k[2]);
              SipcEndpoint::DispatchDisconnectCallback((SipcEndpoint *)k[2]);
              SipcServer::RemoveEndpoint((SipcServer *)((char *)this + 16), (struct SipcEndpoint *)k[2]);
              break;
            }
          }
          v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v17 )
          {
            v17[2] = 0LL;
            v17[3] = 0LL;
            v17[4] = 0LL;
            v17[5] = 0LL;
            v17[6] = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          *((_QWORD *)this + 17) = v17;
          if ( v17 )
          {
            v17[3] = this;
            *(_DWORD *)(*((_QWORD *)this + 17) + 48LL) = v25;
            *(_DWORD *)(*((_QWORD *)this + 17) + 52LL) = v26;
            (*((void (__fastcall **)(SipcServer *, _QWORD *, _QWORD))this + 18))(this, v24, *((_QWORD *)this + 19));
            if ( *((_QWORD *)this + 17) )
            {
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
              v19 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 17);
              if ( v19 )
                SipcServer::EndpointListEntry::`scalar deleting destructor'(v19, v18);
              *((_QWORD *)this + 17) = 0LL;
            }
          }
          else
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
            Callback = -2147024882;
          }
          break;
        case 3u:
          v14 = v24[0];
          for ( m = (SipcServer *)*((_QWORD *)this + 14); m != (SipcServer *)((char *)this + 112); m = *(SipcServer **)m )
          {
            if ( m == (SipcServer *)v24[0] )
            {
              SipcEndpoint::Disconnect(*(SipcEndpoint **)(v24[0] + 16LL));
              SipcEndpoint::DispatchDisconnectCallback(*(SipcEndpoint **)(v14 + 16));
              SipcServer::RemoveEndpoint((SipcServer *)((char *)this + 16), *(struct SipcEndpoint **)(v14 + 16));
              goto LABEL_17;
            }
          }
          break;
        case 5u:
          Callback = SipcPort::FreeSection(*((SipcPort **)this + 7), (void *)v24[1]);
          break;
        default:
LABEL_57:
          Callback = -2147418113;
          break;
      }
    }
LABEL_17:
    v11 = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)v1, v5);
    if ( v11 < 0 )
      return v11;
    return Callback;
  }
  result = GetLastError();
  if ( result == 258 )
    goto LABEL_12;
  v13 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v13 = result < 0;
  }
  if ( !v13 )
    goto LABEL_12;
  return result;
}
