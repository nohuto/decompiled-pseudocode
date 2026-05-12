/*
 * XREFs of GenActivateParams @ 0x14013F600
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GenInteger @ 0x140142F4C (GenInteger.c)
 *     GenNamedValueBytes @ 0x140143188 (GenNamedValueBytes.c)
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 *     GenNamedValueListBegin @ 0x140143248 (GenNamedValueListBegin.c)
 *     GenNamedValueListEnd @ 0x140143288 (GenNamedValueListEnd.c)
 */

__int64 __fastcall GenActivateParams(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 result; // rax
  unsigned int i; // edi
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)v9 = 0x80200000000LL;
  TcglibReverseBytes(v9, 8u);
  result = GenNamedValueBytes(a3, 393216LL, v9);
  if ( (int)result >= 0 )
  {
    result = GenNamedValueInt(a3, 393217LL, *a4);
    if ( (int)result >= 0 )
    {
      result = GenNamedValueListBegin(a3, 393218LL);
      if ( (int)result >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          result = GenInteger(a3, *(unsigned int *)(a1 + 40));
          if ( (int)result < 0 )
            return result;
        }
        return GenNamedValueListEnd(a3);
      }
    }
  }
  return result;
}
