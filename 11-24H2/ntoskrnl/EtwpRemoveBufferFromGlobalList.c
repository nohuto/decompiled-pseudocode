/*
 * XREFs of EtwpRemoveBufferFromGlobalList @ 0x14064EA3C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpRemoveBufferFromGlobalList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx

  v2 = (_QWORD *)(a1 + 80);
  result = *(_QWORD **)(a1 + 80);
  if ( result != (_QWORD *)(a1 + 80) )
  {
    while ( result )
    {
      v4 = (_QWORD *)*result;
      if ( result[2] == a2 )
      {
        if ( (_QWORD *)v4[1] != result || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result) )
          __fastfail(3u);
        *v5 = v4;
        v4[1] = v5;
        return result;
      }
      result = (_QWORD *)*result;
      if ( v4 == v2 )
        result = 0LL;
    }
  }
  return 0LL;
}
