/*
 * XREFs of _tr_stored_block @ 0x180154148
 * Callers:
 *     deflate @ 0x180150D7C (deflate.c)
 *     deflate_stored @ 0x180152240 (deflate_stored.c)
 *     _tr_flush_block @ 0x180153E80 (_tr_flush_block.c)
 * Callees:
 *     bi_windup @ 0x1801542D8 (bi_windup.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

unsigned __int64 __fastcall tr_stored_block(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  size_t v5; // rdi
  int v6; // ecx
  __int16 v7; // r8
  __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rcx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // r9
  const void *v14; // r11
  unsigned __int64 result; // rax

  v5 = a3;
  v6 = *(_DWORD *)(a1 + 5984);
  v7 = *(_WORD *)(a1 + 5980);
  if ( v6 <= 13 )
  {
    *(_DWORD *)(a1 + 5984) = v6 + 3;
    v13 = v7 | (a4 << v6);
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 40);
    v9 = a4 << v6;
    v10 = *(_QWORD *)(a1 + 16);
    v11 = v7 | v9;
    *(_WORD *)(a1 + 5980) = v11;
    *(_BYTE *)(v8 + v10) = v11;
    *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
    v12 = *(_WORD *)(a1 + 5984);
    ++*(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 5984) -= 13;
    v13 = a4 >> (16 - v12);
  }
  *(_WORD *)(a1 + 5980) = v13;
  bi_windup(a1);
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v5;
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = BYTE1(v5);
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = ~(_BYTE)v5;
  *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = (unsigned __int16)~(_WORD)v5 >> 8;
  result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  *(_DWORD *)(a1 + 40) = result;
  if ( (_DWORD)v5 )
    result = (unsigned __int64)memmove((void *)(*(_QWORD *)(a1 + 16) + (unsigned int)result), v14, v5);
  *(_DWORD *)(a1 + 40) += v5;
  return result;
}
