/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800720F4
 * Callers:
 *     wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___ @ 0x18014FB40 (wil--details--lambda_call__lambda_86871cef99ccda234418e908d473a535___--_lambda_call__lambda_8687.c)
 *     wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x18014FB80 (wil--details--lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___--_lambda_call__lambda_f7a7.c)
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
  v3 = (_DWORD *)*((_QWORD *)this + 105);
  v4 = (_DWORD *)*((_QWORD *)this + 106);
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
  if ( v3 != *((_DWORD **)this + 106) )
    *((_QWORD *)this + 106) = v3;
  return 0LL;
}
