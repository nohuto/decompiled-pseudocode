/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B28D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801B2410 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801B2600 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  v17 = 0;
  if ( *(char *)a2 >= 0 )
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 3;
    v5 = *((unsigned int *)a2 + 16);
    if ( *((_BYTE *)a2 + 68) )
    {
      if ( *((_BYTE *)this + v5 + 48) )
      {
        v6 = 2;
      }
      else
      {
        v6 = 1;
        *((_BYTE *)this + v5 + 48) = 1;
      }
    }
    else
    {
      v6 = 0;
      if ( *((_BYTE *)this + v5 + 48) )
      {
        *((_BYTE *)this + v5 + 48) = 0;
        v6 = 4;
      }
    }
    v13 = *((_DWORD *)a2 + 16);
    v15 = *((_QWORD *)a2 + 4);
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_QWORD *)this + 5);
    v14 = v6;
    v9 = *((_QWORD *)this + 3);
    v16 = v7;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, unsigned int *, int))(*(_QWORD *)v9 + 176LL))(
           v9,
           v8,
           4LL,
           &v13,
           24) < 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (wil::details **)this + 4,
        *((wil::details **)this + 4),
        v10);
      RawButtonProcessor::FindRemoteEndpoint(this);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *, int))(**((_QWORD **)this + 3) + 176LL))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 5),
             4LL,
             &v13,
             24) < 0 )
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          (wil::details **)this + 4,
          *((wil::details **)this + 4),
          v11);
    }
    InputETW::RawButtonProcessor::ButtonEvent(v13, v14, *((_DWORD *)this + 90));
  }
  return 0LL;
}
