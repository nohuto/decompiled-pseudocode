/*
 * XREFs of GenSetACEBooleanExpr @ 0x14013F6C0
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 *     GenNamedValueListBegin @ 0x140143248 (GenNamedValueListBegin.c)
 *     GenNamedValueListEnd @ 0x140143288 (GenNamedValueListEnd.c)
 */

__int64 __fastcall GenSetACEBooleanExpr(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 3077;
  TcglibReverseBytes((char *)&v10, 4u);
  *(_QWORD *)v9 = *a4;
  TcglibReverseBytes(v9, 8u);
  result = GenNamedValueListBegin(a3, 1LL);
  if ( (int)result >= 0 )
  {
    result = GenNamedValueListBegin(a3, 3LL);
    if ( (int)result >= 0 )
    {
      v7 = *(unsigned int *)(a3 + 12);
      if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a3 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v7 + *(_QWORD *)a3) = -14;
      ++*(_DWORD *)(a3 + 12);
      result = GenDataBytes(a3, &v10, 4LL);
      if ( (int)result >= 0 )
      {
        result = GenDataBytes(a3, v9, 8LL);
        if ( (int)result >= 0 )
        {
          v8 = *(unsigned int *)(a3 + 12);
          if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
            return 3221225507LL;
          *(_BYTE *)(v8 + *(_QWORD *)a3) = -13;
          ++*(_DWORD *)(a3 + 12);
          result = GenNamedValueListEnd(a3);
          if ( (int)result >= 0 )
            return GenNamedValueListEnd(a3);
        }
      }
    }
  }
  return result;
}
