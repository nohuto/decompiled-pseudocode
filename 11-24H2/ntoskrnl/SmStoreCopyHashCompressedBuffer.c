/*
 * XREFs of SmStoreCopyHashCompressedBuffer @ 0x14045A978
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SmStoreCopyHashCompressedBuffer(char *a1, unsigned __int16 *Src, size_t Size, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int16 *v6; // rbp
  __int64 v8; // r14
  unsigned int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rcx
  char *v13; // r15
  char *v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = Size;
  v19 = 0LL;
  v6 = Src;
  v8 = 0LL;
  if ( !a4 || (_DWORD)Size == 4096 )
  {
    if ( a1 )
      memmove(a1, Src, (unsigned int)Size);
    else
      return wyhash(Src, (unsigned int)Size, 0LL);
  }
  else
  {
    v10 = (a4 == 2) + 1;
    v11 = 2 * v10 - 2;
    v12 = (4096 - ((unsigned __int16)Src & 0xFFF) - (unsigned int)v11) / v10;
    v22 = (4096 - ((unsigned __int16)Src & 0xFFF) - (unsigned int)v11) / v10;
    if ( 2 * v10 != 2 )
    {
      if ( a1 )
      {
        memmove(a1, Src, (unsigned int)v11);
      }
      else
      {
        v8 = wyhash(Src, 2 * v10 - 2, 0LL);
        v19 = v8;
      }
      v12 = v22;
      v5 -= v11;
    }
    v13 = (char *)v6 + v11;
    if ( a1 )
    {
      v14 = &a1[v11];
      v15 = v10 - 1;
      v20 = v12;
      do
      {
        v16 = v5;
        if ( v4 != v15 )
          v16 = *v6;
        memmove(v14, v13, v16);
        v13 += v20;
        v15 = v10 - 1;
        v14 += v16;
        v5 -= v16;
        ++v4;
        ++v6;
      }
      while ( v4 < v10 );
      return v19;
    }
    else
    {
      v21 = (unsigned int)v12;
      do
      {
        v17 = v5;
        if ( v4 != v10 - 1 )
          v17 = *v6;
        v18 = wyhash(v13, v17, v8);
        v13 += v21;
        v5 -= v17;
        ++v4;
        ++v6;
        v8 = v18;
      }
      while ( v4 < v10 );
    }
  }
  return v8;
}
