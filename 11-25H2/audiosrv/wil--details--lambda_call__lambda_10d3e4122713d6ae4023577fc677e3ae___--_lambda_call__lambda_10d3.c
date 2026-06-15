/*
 * XREFs of wil::details::lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___::_lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___ @ 0x18011CE9C
 * Callers:
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$5 @ 0x180167F73 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___::_lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___(
        _QWORD **a1)
{
  __int64 result; // rax
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  result = 0LL;
  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    v4 = 0;
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)**a1 + 80LL))(**a1, *a1[1], &v4, &v3);
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
  }
  return result;
}
