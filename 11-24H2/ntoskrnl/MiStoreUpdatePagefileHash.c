/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140425E74
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 */

char __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int v5; // r10d
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // r11d
  unsigned int v12; // ebx
  _QWORD *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // esi
  int v17; // ebp
  __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v4 = *(_QWORD *)(a2 + 56);
  v5 = 0;
  v19 = v4;
  v8 = 16;
  v9 = 16;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = (_QWORD *)(a3 + 48);
  if ( a4 )
  {
    v14 = 96LL;
    do
    {
      LOBYTE(v4) = qword_140E374B8;
      if ( *v13 == qword_140E374B8
        || (v15 = *(_QWORD *)(v14 + *(_QWORD *)(a2 + 72)), LOBYTE(v4) = (unsigned __int8)v15 >> 2, (v15 & 4) == 0) )
      {
        v17 = v11;
        v16 = v8;
      }
      else
      {
        v16 = (unsigned __int16)v15 >> 12;
        LODWORD(v4) = MiGetPagingFileOffset(v15);
        v17 = v4;
      }
      if ( v17 == v11 && v9 == v16 )
      {
        ++v5;
      }
      else
      {
        if ( v9 != v8 )
        {
          LOBYTE(v4) = MiMapPageFileHash(*(_QWORD *)(v19 + 8LL * v9 + 18528), a3, v12 - v5, v10, v5);
          a2 = v20;
          v8 = 16;
        }
        v9 = v16;
        v10 = v17;
        v11 = v17;
        v5 = 1;
      }
      ++v12;
      v14 += 8LL;
      ++v13;
      ++v11;
    }
    while ( v12 < a4 );
    if ( v9 != v8 )
      LOBYTE(v4) = MiMapPageFileHash(*(_QWORD *)(v19 + 8LL * v9 + 18528), a3, v12 - v5, v10, v5);
  }
  return v4;
}
