/*
 * XREFs of sub_1800CFC04 @ 0x1800CFC04
 * Callers:
 *     sub_1800D0AB0 @ 0x1800D0AB0 (sub_1800D0AB0.c)
 *     sub_1800E261C @ 0x1800E261C (sub_1800E261C.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall sub_1800CFC04(volatile __int32 **a1)
{
  volatile __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = *(volatile __int32 **)result;
    _InterlockedExchange(result + 40, 0);
  }
  return result;
}
