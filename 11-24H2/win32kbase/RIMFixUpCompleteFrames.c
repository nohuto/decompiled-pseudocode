/*
 * XREFs of RIMFixUpCompleteFrames @ 0x1400BC7A8
 * Callers:
 *     rimProcessInput @ 0x1400BC820 (rimProcessInput.c)
 * Callees:
 *     RIMFixUpCompleteFrame @ 0x1400BD0EC (RIMFixUpCompleteFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrames(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5)
{
  _UNKNOWN **result; // rax
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a4;
  v7 = (unsigned __int64)a4 + a5;
  if ( (unsigned __int64)a4 < v7 )
  {
    do
    {
      RIMFixUpCompleteFrame(a1, a2, a3, v6, 0);
      v6 = (unsigned int *)((char *)v6 + *v6);
      result = (_UNKNOWN **)*a3;
      a3 = (unsigned int *)((char *)a3 + (_QWORD)result);
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  return result;
}
