/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180084DF4
 * Callers:
 *     wil::details::lambda_call__lambda_557fb58d19dcad6b60aa65ecbcf8950b___::_lambda_call__lambda_557fb58d19dcad6b60aa65ecbcf8950b___ @ 0x180147044 (wil--details--lambda_call__lambda_557fb58d19dcad6b60aa65ecbcf8950b___--_lambda_call__lambda_557f.c)
 *     wil::details::lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___::_lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___ @ 0x180147084 (wil--details--lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___--_lambda_call__lambda_c840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // edi
  _DWORD *v3; // rdx
  _DWORD *v4; // r8
  _DWORD *i; // rax

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v3 = (_DWORD *)*((_QWORD *)this + 84);
  v4 = (_DWORD *)*((_QWORD *)this + 85);
  while ( v3 != v4 && CurrentThreadId != *v3 )
    ++v3;
  if ( v3 != v4 )
  {
    for ( i = v3 + 1; i != v4; ++i )
    {
      if ( CurrentThreadId != *i )
        *v3++ = *i;
    }
  }
  if ( v3 != *((_DWORD **)this + 85) )
    *((_QWORD *)this + 85) = v3;
  return 0LL;
}
