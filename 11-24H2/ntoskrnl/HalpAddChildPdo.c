/*
 * XREFs of HalpAddChildPdo @ 0x1406FC4F8
 * Callers:
 *     HalpAddDevice @ 0x1406FC520 (HalpAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAddChildPdo(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a2 + 8) )
    *(_QWORD *)(a2 + 8) = a1;
  result = *a3;
  if ( *a3 )
    *(_QWORD *)(result + 8) = a1;
  *a3 = a1;
  return result;
}
