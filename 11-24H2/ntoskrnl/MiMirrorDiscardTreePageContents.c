/*
 * XREFs of MiMirrorDiscardTreePageContents @ 0x1404F2DBC
 * Callers:
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 * Callees:
 *     MiGetZeroingContext @ 0x14041F9E0 (MiGetZeroingContext.c)
 */

_QWORD *__fastcall MiMirrorDiscardTreePageContents(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // r8
  __int64 ZeroingContext; // rax
  __int64 i; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  result = *a1;
  v2 = 0LL;
  while ( result )
  {
    v2 = result;
    result = (_QWORD *)*result;
  }
  while ( v2 )
  {
    ZeroingContext = MiGetZeroingContext((__int64)v2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(ZeroingContext + 280); i = (unsigned int)(i + 1) )
      *(_QWORD *)(ZeroingContext + 8 * i + 24) |= 2uLL;
    result = (_QWORD *)v2[1];
    v5 = v2;
    if ( result )
    {
      v6 = (_QWORD *)*result;
      v2 = (_QWORD *)v2[1];
      if ( *result )
      {
        do
        {
          result = (_QWORD *)*v6;
          v2 = v6;
          v6 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = (_QWORD *)(v2[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v2 || (_QWORD *)*v2 == v5 )
          break;
        v5 = v2;
      }
    }
  }
  return result;
}
