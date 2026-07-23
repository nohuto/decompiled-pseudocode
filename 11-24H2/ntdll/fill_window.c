/*
 * XREFs of fill_window @ 0x1801526B0
 * Callers:
 *     deflate_fast @ 0x180151240 (deflate_fast.c)
 *     deflate_huff @ 0x18015179C (deflate_huff.c)
 *     deflate_rle @ 0x18015190C (deflate_rle.c)
 *     deflate_slow @ 0x180151BF0 (deflate_slow.c)
 * Callees:
 *     read_buf @ 0x180152D24 (read_buf.c)
 *     slide_hash @ 0x180152DA8 (slide_hash.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall fill_window(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax
  int buf; // eax
  int v8; // r10d
  unsigned int v9; // r9d
  bool v10; // zf
  unsigned int v11; // eax
  int v12; // r11d
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // dx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r11
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // esi
  unsigned int v36; // ebx
  unsigned int v37; // ebx

  v1 = *((unsigned int *)a1 + 37);
  do
  {
    v3 = *((_DWORD *)a1 + 57);
    v4 = *((_DWORD *)a1 + 42) - *((_DWORD *)a1 + 59) - v3;
    if ( v3 >= (int)v1 + *((_DWORD *)a1 + 37) - 262 )
    {
      memmove((void *)a1[20], (const void *)(a1[20] + v1), (unsigned int)v1 - v4);
      v5 = *((_DWORD *)a1 + 57);
      *((_DWORD *)a1 + 58) -= v1;
      v6 = v5 - v1;
      *((_DWORD *)a1 + 53) -= v1;
      *((_DWORD *)a1 + 57) = v6;
      if ( *((_DWORD *)a1 + 1494) > v6 )
        *((_DWORD *)a1 + 1494) = v6;
      slide_hash(a1);
      v4 += v1;
    }
    if ( !*(_DWORD *)(*a1 + 8LL) )
      break;
    buf = read_buf(*a1, a1[20] + *((unsigned int *)a1 + 57) + (unsigned __int64)*((unsigned int *)a1 + 59), v4);
    v8 = *((_DWORD *)a1 + 1494);
    v9 = buf + *((_DWORD *)a1 + 59);
    v10 = *((_DWORD *)a1 + 1498) == 0;
    *((_DWORD *)a1 + 59) = v9;
    v11 = v9 + v8;
    if ( v10 )
    {
      if ( v11 >= 3 )
      {
        v23 = a1[20];
        v24 = (unsigned int)(*((_DWORD *)a1 + 57) - v8);
        v25 = *((_DWORD *)a1 + 52);
        v26 = *(unsigned __int8 *)(v24 + v23);
        *((_DWORD *)a1 + 48) = v26;
        v27 = (unsigned int)(v24 + 2);
        *((_DWORD *)a1 + 48) = *((_DWORD *)a1 + 51) & ((v26 << v25) ^ *(unsigned __int8 *)((unsigned int)(v24 + 1) + v23));
        do
        {
          if ( !v8 )
            break;
          v28 = a1[23];
          v29 = *((_DWORD *)a1 + 39);
          v30 = *(unsigned __int8 *)(v27 + a1[20]);
          v27 = (unsigned int)(v27 + 1);
          v31 = a1[22];
          v32 = *((_DWORD *)a1 + 51) & ((*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)) ^ v30);
          *((_DWORD *)a1 + 48) = v32;
          *(_WORD *)(v31 + 2LL * ((unsigned int)v24 & v29)) = *(_WORD *)(v28 + 2 * v32);
          *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v24;
          LODWORD(v24) = v24 + 1;
          v9 = *((_DWORD *)a1 + 59);
          v8 = *((_DWORD *)a1 + 1494) - 1;
          *((_DWORD *)a1 + 1494) = v8;
        }
        while ( v9 + v8 >= 3 );
      }
    }
    else if ( v11 > 3 )
    {
      v12 = *((_DWORD *)a1 + 57) - v8;
      do
      {
        if ( !v8 )
          break;
        v13 = a1[20];
        if ( x86_cpu_enable_simd )
        {
          v14 = *(_DWORD *)((unsigned __int16)v12 + v13) & 0xFFFFFF;
          if ( *((int *)a1 + 63) < 6 )
            v14 = *(_DWORD *)((unsigned __int16)v12 + v13);
          v15 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v14);
          v16 = a1[23];
          v17 = *(_WORD *)(v16 + 2 * v15);
          *(_WORD *)(v16 + 2 * v15) = v12;
          *(_WORD *)(a1[22] + 2LL * ((unsigned int)(unsigned __int16)v12 & *((_DWORD *)a1 + 39))) = v17;
        }
        else
        {
          v18 = *((_DWORD *)a1 + 39);
          v19 = a1[22];
          v20 = *(unsigned __int8 *)((unsigned __int16)v12 + v13 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52));
          v21 = a1[23];
          v22 = *((_DWORD *)a1 + 51) & (unsigned int)v20;
          *((_DWORD *)a1 + 48) = v22;
          *(_WORD *)(v19 + 2LL * (unsigned __int16)(v12 & v18)) = *(_WORD *)(v21 + 2 * v22);
          *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v12;
        }
        LOWORD(v12) = v12 + 1;
        v9 = *((_DWORD *)a1 + 59);
        v8 = *((_DWORD *)a1 + 1494) - 1;
        *((_DWORD *)a1 + 1494) = v8;
      }
      while ( v9 + v8 > 3 );
    }
  }
  while ( v9 < 0x106 && *(_DWORD *)(*a1 + 8LL) );
  v33 = *((unsigned int *)a1 + 1497);
  v34 = *((_DWORD *)a1 + 42);
  if ( (unsigned int)v33 < v34 )
  {
    v35 = *((_DWORD *)a1 + 59) + *((_DWORD *)a1 + 57);
    if ( (unsigned int)v33 >= v35 )
    {
      if ( (unsigned int)v33 < v35 + 258 )
      {
        v37 = v34 - v33;
        if ( v35 - (unsigned int)v33 + 258 <= v37 )
          v37 = v35 - v33 + 258;
        memset_thunk_772440563353939046((void *)(a1[20] + v33), 0, v37);
        *((_DWORD *)a1 + 1497) += v37;
      }
    }
    else
    {
      v36 = v34 - v35;
      if ( v36 > 0x102 )
        v36 = 258;
      memset_thunk_772440563353939046((void *)(a1[20] + v35), 0, v36);
      *((_DWORD *)a1 + 1497) = v36 + v35;
    }
  }
}
