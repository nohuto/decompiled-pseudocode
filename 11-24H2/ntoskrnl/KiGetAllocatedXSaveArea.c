/*
 * XREFs of KiGetAllocatedXSaveArea @ 0x14043A050
 * Callers:
 *     PspGetContext @ 0x140988970 (PspGetContext.c)
 *     PspSetContext @ 0x140988D80 (PspSetContext.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiGetAllocatedXSaveArea(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *(_QWORD **)(a1 + 408);
  if ( result )
  {
    v2 = (_QWORD *)*result;
    if ( *result )
    {
      do
      {
        result = v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 );
    }
    return (_QWORD *)result[5];
  }
  return result;
}
