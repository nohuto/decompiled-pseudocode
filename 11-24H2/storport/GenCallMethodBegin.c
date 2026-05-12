/*
 * XREFs of GenCallMethodBegin @ 0x140142D70
 * Callers:
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 * Callees:
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 */

__int64 __fastcall GenCallMethodBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v5 + *(_QWORD *)a1) = -8;
  ++*(_DWORD *)(a1 + 12);
  v10 = a2;
  TcglibReverseBytes((char *)&v10, 8u);
  result = GenDataBytes(a1, &v10, v6);
  if ( (int)result >= 0 )
  {
    v10 = a3;
    TcglibReverseBytes((char *)&v10, 8u);
    result = GenDataBytes(a1, &v10, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a1 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v9 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
  }
  return result;
}
