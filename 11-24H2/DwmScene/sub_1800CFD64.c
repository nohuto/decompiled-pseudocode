/*
 * XREFs of sub_1800CFD64 @ 0x1800CFD64
 * Callers:
 *     sub_1800D0C10 @ 0x1800D0C10 (sub_1800D0C10.c)
 *     sub_1800E277C @ 0x1800E277C (sub_1800E277C.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall sub_1800CFD64(volatile __int32 **a1)
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
