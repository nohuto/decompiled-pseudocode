/*
 * XREFs of MiAdjustFaultList @ 0x14042D3E0
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiAdjustFaultList(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // r8
  unsigned __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 v5; // r9

  result = a1;
  v2 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  v3 = v2[3];
  if ( v3 < v2[2] )
  {
    result = (_QWORD *)(*result & 0xFFFFFFFFFFFFF000uLL);
    v4 = (__int64 *)(v2[1] + 16 * v3);
    v5 = *v4;
    if ( (unsigned __int64)result >= *v4 && (unsigned __int64)result < v5 + v4[1] )
    {
      result = (_QWORD *)(((unsigned __int64)result - (v5 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
      v2[4] = result;
    }
  }
  return result;
}
