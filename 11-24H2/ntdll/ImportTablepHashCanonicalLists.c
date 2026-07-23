/*
 * XREFs of ImportTablepHashCanonicalLists @ 0x180132F7C
 * Callers:
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 * Callees:
 *     SymCryptMd5Append @ 0x1801568D0 (SymCryptMd5Append.c)
 *     SymCryptMd5Init @ 0x1801571D0 (SymCryptMd5Init.c)
 *     SymCryptMd5Result @ 0x1801571F0 (SymCryptMd5Result.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall ImportTablepHashCanonicalLists(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE v10[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_thunk_772440563353939046(v10, 0, 0x70uLL);
  SymCryptMd5Init(v10);
  while ( a1 )
  {
    v4 = (_QWORD *)a1[2];
    v5 = -1LL;
    v6 = a1[1];
    do
      ++v5;
    while ( *(_BYTE *)(v6 + v5) );
    SymCryptMd5Append(v10, v6, (unsigned int)v5);
    while ( v4 )
    {
      v7 = v4[1];
      v8 = -1LL;
      do
        ++v8;
      while ( *(_BYTE *)(v7 + v8) );
      SymCryptMd5Append(v10, v7, (unsigned int)v8);
      v4 = (_QWORD *)*v4;
    }
    a1 = (_QWORD *)*a1;
  }
  SymCryptMd5Result(v10, a2);
  return 0LL;
}
