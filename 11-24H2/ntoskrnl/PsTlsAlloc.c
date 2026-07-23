/*
 * XREFs of PsTlsAlloc @ 0x14077A5C0
 * Callers:
 *     PspTlsInitialize @ 0x140C37F40 (PspTlsInitialize.c)
 * Callees:
 *     PsTlsFree @ 0x14077A620 (PsTlsFree.c)
 *     PspTlsAlloc @ 0x14077A658 (PspTlsAlloc.c)
 */

__int64 __fastcall PsTlsAlloc(__int64 a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 )
    return 3221225485LL;
  result = PspTlsAlloc(a1, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 <= PspTlsPreAllocatedSlotCount + 2 )
    {
      *a3 = v5;
      return 0LL;
    }
    else
    {
      PsTlsFree();
      return 3221225495LL;
    }
  }
  return result;
}
