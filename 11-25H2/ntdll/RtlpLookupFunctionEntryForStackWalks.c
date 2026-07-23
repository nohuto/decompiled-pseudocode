/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x180078630
 * Callers:
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(char *BaseAddress, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int *result; // rax
  unsigned int v7; // r9d
  char *v8; // rdi
  unsigned int *v9; // rdx
  int v10; // r10d
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // r11d

  v4 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)BaseAddress < v4 || (unsigned __int64)BaseAddress >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801E9430 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E9440 )
    {
      v5 = RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      *(_OWORD *)a2 = xmmword_1801E9430;
      *(_QWORD *)(a2 + 16) = qword_1801E9440;
      v5 = *(_QWORD *)a2;
    }
  }
  else
  {
    v5 = *(_QWORD *)a2;
  }
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 20) / 0xCu;
    result = 0LL;
    if ( v7 )
    {
      v8 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
      v9 = (unsigned int *)(v5 + 12LL * (v7 - 1));
      if ( (unsigned __int64)v8 < *v9 )
      {
        v10 = 0;
        v11 = v7 - 2;
        while ( v11 >= v10 )
        {
          v13 = (v10 + v11) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v13);
          if ( (unsigned __int64)v8 < *v9 )
          {
            v11 = v13 - 1;
          }
          else
          {
            if ( (unsigned __int64)v8 < v9[3] )
              break;
            v10 = v13 + 1;
          }
        }
      }
      if ( (unsigned __int64)v8 >= *v9 && (unsigned __int64)v8 < v9[1] )
        result = v9;
    }
    if ( result )
    {
      v12 = result[2];
      if ( (v12 & 1) != 0 )
        return (unsigned int *)(v12 + *(_QWORD *)(a2 + 8) - 1LL);
    }
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
  }
  return result;
}
