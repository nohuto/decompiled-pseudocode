/*
 * XREFs of CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___ @ 0x140210268
 * Callers:
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 i; // r8

  result = *(__int64 **)(a1 + 1240);
  for ( i = *result; i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == 1 && *(_QWORD *)(i + 208) )
    {
      if ( *(_QWORD *)(i + 216) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 16LL * **(unsigned int **)(a2 + 16)) = *(_QWORD *)(i + 16);
        *(_WORD *)(*(_QWORD *)a2 + 16LL * **(unsigned int **)(a2 + 16) + 8) = *(_WORD *)(i + 440);
        result = *(__int64 **)(a2 + 16);
        ++*(_DWORD *)result;
      }
    }
  }
  return result;
}
