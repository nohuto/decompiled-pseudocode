/*
 * XREFs of RtlRemoveHeadCircularList @ 0x1402FF580
 * Callers:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRemoveHeadCircularList(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  result = *a1;
  if ( *a1 )
  {
    if ( (_QWORD *)*result == result )
    {
      *a1 = 0LL;
    }
    else
    {
      *a1 = (_QWORD *)*result;
      v2 = (_QWORD *)*result;
      if ( *(_QWORD **)(*result + 8LL) != result || (v3 = (_QWORD *)result[1], (_QWORD *)*v3 != result) )
        __fastfail(3u);
      *v3 = v2;
      v2[1] = v3;
    }
  }
  return result;
}
