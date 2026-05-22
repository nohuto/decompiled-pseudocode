/*
 * XREFs of ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180062BE8
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x180060F10 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@2PEAX@ZP6AX0W4SIPC_ENDPOINT_STATUS@@3@Z3PEAPEAU2@@Z @ 0x18010B410 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     SipcFailFast @ 0x18010E99C (SipcFailFast.c)
 */

__int64 __fastcall AggregateWaitHandle::AddHandle(AggregateWaitHandle *this, void *a2)
{
  char *v4; // rsi
  char *i; // rax
  int v6; // edi
  char **v7; // rcx
  char *v8; // rax
  __int64 result; // rax
  _OWORD *v10; // rax
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 1) )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  v4 = (char *)this + 24;
  for ( i = (char *)*((_QWORD *)this + 3); i != v4; i = *(char **)i )
  {
    if ( *((void **)i + 2) == a2 )
      return 2147942487LL;
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v10 )
    {
      result = 2147942414LL;
LABEL_11:
      *((_QWORD *)this + 2) = 0LL;
      return result;
    }
    *v10 = 0LL;
    v10[1] = 0LL;
    *((_QWORD *)this + 2) = v10;
  }
  hObject = 0LL;
  v6 = NtCreateWaitCompletionPacket(&hObject, 1LL);
  if ( v6 >= 0 )
  {
    v6 = NtAssociateWaitCompletionPacket(hObject, *(_QWORD *)this, a2, *((_QWORD *)this + 2), 0LL, 0, 0LL, 0LL);
    if ( v6 >= 0 )
    {
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) = a2;
      *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) = hObject;
      v7 = (char **)*((_QWORD *)v4 + 1);
      v8 = (char *)*((_QWORD *)this + 2);
      if ( *v7 != v4 )
        __fastfail(3u);
      *(_QWORD *)v8 = v4;
      *((_QWORD *)v8 + 1) = v7;
      *v7 = v8;
      ++*((_DWORD *)v4 + 4);
      *((_QWORD *)v4 + 1) = v8;
      result = 0LL;
      goto LABEL_11;
    }
    CloseHandle(hObject);
  }
  return v6 | 0x10000000u;
}
