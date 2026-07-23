/*
 * XREFs of EtwpDequeueBufferPendingCompressionFromQueue @ 0x14064FA98
 * Callers:
 *     EtwpDequeueBufferPendingCompression @ 0x14064F998 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     <none>
 */

char *__fastcall EtwpDequeueBufferPendingCompressionFromQueue(_QWORD *a1, volatile signed __int32 *a2, __int64 a3)
{
  _QWORD **i; // r9
  _QWORD **v5; // rcx
  char *v6; // r11
  _QWORD *v7; // rcx

  for ( i = (_QWORD **)(a1 + 1); ; i = (_QWORD **)*i )
  {
    v5 = (_QWORD **)*i;
    if ( !*i )
      return 0LL;
    v6 = (char *)(v5 - 4);
    if ( *((_DWORD *)v5 + 3) == 4 && v6[52] >= 0 )
      break;
  }
  _InterlockedDecrement(a2);
  v7 = *i;
  *i = (_QWORD *)**i;
  if ( *v7 )
    *v7 = 0LL;
  else
    *a1 = i;
  *(_QWORD *)(a3 + 32) = *i;
  *i = (_QWORD *)(a3 + 32);
  if ( i == (_QWORD **)*a1 )
    *a1 = a3 + 32;
  return v6;
}
