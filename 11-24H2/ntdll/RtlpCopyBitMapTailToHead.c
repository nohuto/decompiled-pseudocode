/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x18013BEE4
 * Callers:
 *     RtlCopyBitMap @ 0x18013A9E0 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

unsigned __int64 __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  const void **v5; // rbx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r11
  char v9; // r10
  size_t v10; // r9
  int v11; // r10d
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int *v15; // r15
  unsigned int *v16; // rsi
  _DWORD *v17; // r9
  char v18; // bl
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  _DWORD *v23; // r9
  unsigned int v24; // ebx
  int v25; // r15d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = (const void **)(a1 + 8);
  v6 = (unsigned __int64)a3 >> 3;
  v7 = (_QWORD *)(a2 + 8);
  v8 = a3;
  v9 = a4;
  if ( (a3 & 7) != 0 )
  {
    v12 = (unsigned __int64)a4 >> 5;
    v13 = a3 & 0x1F;
    v14 = a4 & 0x1F;
    v15 = (unsigned int *)(*v7 + 4 * (v12 + (v8 >> 5)));
    result = (unsigned __int64)*v5;
    v16 = v15;
    v17 = (char *)*v5 + 4 * v12;
    if ( v14 )
    {
      v18 = 32 - v13;
      if ( v14 > 32 - v13 )
      {
        v15[1] = v15[1] & ~((1 << (v13 + v14 - 32)) - 1) | ((*v17 & (unsigned int)(((1 << (v13 + v14 - 32)) - 1) << v18)) >> v18);
        v22 = (*v17 & ((1 << v18) - 1)) << v13;
        v21 = (1 << v13) - 1;
      }
      else
      {
        v19 = (1 << v14) - 1;
        v20 = *v17 & v19;
        v21 = ~(v19 << v13);
        v22 = v20 << v13;
      }
      result = v22 | *v15 & v21;
      *v15 = result;
    }
    v23 = v17 - 1;
    if ( v12 )
    {
      v24 = *v15;
      v25 = 1 << (32 - v13);
      do
      {
        *v16-- = ((*v23 & (unsigned int)~(v25 - 1)) >> (32 - v13)) | v24 & ~((1 << v13) - 1);
        result = (*v23-- & (unsigned int)(v25 - 1)) << v13;
        v24 = result | ((1 << v13) - 1) & *v16;
        *v16 = v24;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
    v10 = (unsigned __int64)a4 >> 3;
    v11 = v9 & 7;
    if ( v11 )
    {
      result = (unsigned __int64)*v5;
      *(_BYTE *)(v6 + *v7 + v10) = ((1 << v11) - 1) & *((_BYTE *)*v5 + v10) | *(_BYTE *)(v6 + *v7 + v10) & ~((1 << v11) - 1);
    }
    if ( v10 )
      return (unsigned __int64)memmove((void *)(v6 + *v7), *v5, v10);
  }
  return result;
}
