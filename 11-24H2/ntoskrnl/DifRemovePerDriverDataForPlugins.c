/*
 * XREFs of DifRemovePerDriverDataForPlugins @ 0x1406160A0
 * Callers:
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfTargetDriversDisableVerifier @ 0x140B8D2DC (VfTargetDriversDisableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall DifRemovePerDriverDataForPlugins(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  void *v5; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    v4 = result - 2;
    *a1 = v3;
    v3[1] = a1;
    if ( result != (_QWORD *)16 )
    {
      v5 = (void *)v4[1];
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x4E666944u);
        v4[1] = 0LL;
      }
      ExFreePoolWithTag(v4, 0x4E666944u);
    }
  }
  return result;
}
