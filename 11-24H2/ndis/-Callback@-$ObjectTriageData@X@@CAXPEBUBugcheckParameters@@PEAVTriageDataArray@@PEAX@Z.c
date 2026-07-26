/*
 * XREFs of ?Callback@?$ObjectTriageData@X@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x140098770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ObjectTriageData<void>::Callback(__int64 a1, __int64 a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // rsi
  __int64 v8; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  if ( a3[12] )
  {
    v8 = 0LL;
    do
    {
      result = *(_UNKNOWN ***)(a3[11] + v8 + 8);
      if ( result )
        result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, __int64, __int64))result)(a3[13], a2, a1);
      ++v4;
      v8 += 16LL;
    }
    while ( v4 < a3[12] );
  }
  return result;
}
