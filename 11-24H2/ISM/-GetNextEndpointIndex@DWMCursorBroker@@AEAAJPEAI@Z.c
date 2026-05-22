/*
 * XREFs of ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x1801C78FC
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801C7150 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::GetNextEndpointIndex(DWMCursorBroker *this, unsigned int *a2)
{
  unsigned int v4; // ebp
  unsigned int i; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  v4 = -2147467259;
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = i + 9LL;
    v7 = 3 * v6;
    v8 = *((_QWORD *)this + 3 * v6);
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 22);
      v12 = 0LL;
      memset(v11, 0, sizeof(v11));
      if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v9 + 136LL))(v9, v8, v11) < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(
          *((_QWORD *)this + 22),
          *((_QWORD *)this + v7));
        *((_QWORD *)this + v7) = 0LL;
      }
    }
    if ( !*((_QWORD *)this + v7) )
    {
      *a2 = i;
      return 0;
    }
  }
  return v4;
}
