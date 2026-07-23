/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x140482A60
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiJoinHugeContext @ 0x140482B0C (MiJoinHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 */

_QWORD *__fastcall MiGetUltraHugeAlreadyActive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx

  v2 = *(_QWORD *)(a1 + 584);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL);
  if ( v2 )
  {
    if ( (*(_QWORD *)(v2 + 24) & 1) == 0 && (unsigned int)MiJoinHugeContext(*(_QWORD *)(a1 + 584), a1) )
      return (_QWORD *)v2;
    MiDereferenceHugeContext(a1);
  }
  v5 = (_QWORD **)(v3 + 32);
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    if ( i == v5 )
      return 0LL;
    if ( (unsigned int)MiJoinHugeContext(i - 41, a1) )
      break;
  }
  return i - 41;
}
