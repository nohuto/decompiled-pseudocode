/*
 * XREFs of GenStartSessionParams @ 0x140140C00
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 *     GenInteger @ 0x140142F4C (GenInteger.c)
 */

__int64 __fastcall GenStartSessionParams(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  result = GenInteger(a3, *(unsigned int *)(a2 + 4));
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    TcglibReverseBytes((char *)&v6, 8u);
    result = GenDataBytes(a3, &v6, 8LL);
    if ( (int)result >= 0 )
      return GenInteger(a3, 1LL);
  }
  return result;
}
