/*
 * XREFs of GenDeassignNamespaceParams @ 0x14013D3A0
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 */

__int64 __fastcall GenDeassignNamespaceParams(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  TcglibReverseBytes((char *)&v7, 8u);
  result = GenDataBytes(a3, &v7, v5);
  if ( (int)result >= 0 )
    return GenNamedValueInt(a3, 0LL, 0LL);
  return result;
}
