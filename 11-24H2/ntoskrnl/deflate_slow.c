/*
 * XREFs of deflate_slow @ 0x1405F37A0
 * Callers:
 *     <none>
 * Callees:
 *     fill_window @ 0x1405F4260 (fill_window.c)
 *     flush_pending @ 0x1405F45C8 (flush_pending.c)
 *     longest_match @ 0x1405F470C (longest_match.c)
 *     _tr_flush_block @ 0x1405FFE68 (_tr_flush_block.c)
 */

__int64 __fastcall deflate_slow(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  int *v3; // r15
  int *v6; // rsi
  int *i; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int16 v23; // r9
  unsigned int v24; // ebp
  unsigned __int16 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 *v28; // rcx
  int v29; // ecx
  int v30; // r10d
  int v31; // r11d
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int16 v37; // dx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  int v43; // r8d
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // eax
  int v58; // r8d
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx

  v2 = 0LL;
  v3 = (int *)a1 + 57;
  v6 = (int *)a1 + 57;
  for ( i = (int *)a1 + 57; ; i = v6 )
  {
    v8 = *((_DWORD *)a1 + 59);
    if ( v8 < 0x106 )
    {
      fill_window(a1);
      v8 = *((_DWORD *)a1 + 59);
      if ( v8 < 0x106 )
      {
        if ( !a2 )
          return 0LL;
        i = (int *)a1 + 57;
      }
      v6 = v3;
      if ( !v8 )
        break;
    }
    LODWORD(v9) = 0;
    if ( v8 >= 3 )
    {
      v10 = *(unsigned __int16 *)v6;
      v11 = a1[20];
      if ( x86_cpu_enable_simd )
      {
        v12 = *(_DWORD *)(v10 + v11) & 0xFFFFFF;
        if ( *((int *)a1 + 63) < 6 )
          v12 = *(_DWORD *)(v10 + v11);
        v13 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v12);
        v14 = a1[23];
        LOWORD(v9) = *(_WORD *)(v14 + 2 * v13);
        *(_WORD *)(v14 + 2 * v13) = v10;
        *(_WORD *)(a1[22] + 2LL * ((unsigned int)v10 & *((_DWORD *)a1 + 39))) = v9;
      }
      else
      {
        v9 = (unsigned int)v10 & *((_DWORD *)a1 + 39);
        v15 = a1[22];
        v16 = *((_DWORD *)a1 + 51) & ((unsigned int)*(unsigned __int8 *)(v10 + v11 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)));
        v17 = a1[23];
        *((_DWORD *)a1 + 48) = v16;
        *(_WORD *)(v15 + 2 * v9) = *(_WORD *)(v17 + 2 * v16);
        LOWORD(v9) = *(_WORD *)(a1[22] + 2LL * ((unsigned int)v10 & *((_DWORD *)a1 + 39)));
        *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v10;
      }
      LODWORD(v9) = (unsigned __int16)v9;
    }
    v18 = *((_DWORD *)a1 + 54);
    v19 = 2;
    v20 = *((_DWORD *)a1 + 58);
    *((_DWORD *)a1 + 60) = v18;
    *((_DWORD *)a1 + 55) = v20;
    *((_DWORD *)a1 + 54) = 2;
    if ( (_DWORD)v9 )
    {
      if ( v18 < *((_DWORD *)a1 + 62) && *v6 - (int)v9 <= (unsigned int)(*((_DWORD *)a1 + 37) - 262) )
      {
        v21 = longest_match(a1);
        *((_DWORD *)a1 + 54) = v21;
        v19 = v21;
        if ( v21 <= 5
          && (*((_DWORD *)a1 + 64) == 1
           || v21 == 3 && (unsigned int)(*((_DWORD *)a1 + 57) - *((_DWORD *)a1 + 58)) > 0x1000) )
        {
          *((_DWORD *)a1 + 54) = 2;
          v19 = 2;
        }
      }
    }
    v22 = *((_DWORD *)a1 + 60);
    if ( v22 < 3 || v19 > v22 )
    {
      v6 = (int *)a1 + 57;
      v47 = *((_DWORD *)a1 + 57);
      if ( !*((_DWORD *)a1 + 56) )
      {
        *((_DWORD *)a1 + 56) = 1;
        --*((_DWORD *)a1 + 59);
        *v6 = v47 + 1;
        continue;
      }
      v48 = 2LL;
      v49 = *(unsigned __int8 *)((unsigned int)(v47 - 1) + a1[20]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
        v50 = *((_DWORD *)a1 + 1489) + 1;
        *((_DWORD *)a1 + 1489) = v50;
        --v48;
      }
      while ( v48 );
      *(_BYTE *)(v50 + a1[743]) = v49;
      ++*((_DWORD *)a1 + 1489);
      ++*((_WORD *)a1 + 2 * v49 + 134);
      if ( *((_DWORD *)a1 + 1489) == *((_DWORD *)a1 + 1490) )
      {
        v51 = *((_DWORD *)a1 + 53);
        if ( v51 < 0 )
          v52 = 0LL;
        else
          v52 = a1[20] + (unsigned int)v51;
        tr_flush_block(a1, v52, (unsigned int)(*((_DWORD *)a1 + 57) - v51), 0LL);
        v53 = *a1;
        *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
        flush_pending(v53);
      }
      ++*((_DWORD *)a1 + 57);
      --*((_DWORD *)a1 + 59);
    }
    else
    {
      v6 = (int *)a1 + 57;
      v23 = *((_WORD *)a1 + 114) - *((_WORD *)a1 + 110) - 1;
      v24 = *((_DWORD *)a1 + 57) + *((_DWORD *)a1 + 59) - 3;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v23;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = HIBYTE(v23);
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v22 - 3;
      v25 = v23 - 1;
      v26 = *((unsigned __int8 *)length_code + (unsigned __int8)(v22 - 3));
      ++*((_WORD *)a1 + 2 * v26 + 648);
      v27 = v25;
      if ( v25 >= 0x100u )
      {
        v27 = (unsigned __int64)v25 >> 7;
        v28 = qword_140035840;
      }
      else
      {
        v28 = dist_code;
      }
      ++*((_WORD *)a1 + 2 * *((unsigned __int8 *)v28 + v27) + 1280);
      v29 = *((_DWORD *)a1 + 60);
      *((_DWORD *)a1 + 59) += 1 - v29;
      v30 = *((_DWORD *)a1 + 1489);
      v31 = *((_DWORD *)a1 + 1490);
      *((_DWORD *)a1 + 60) = v29 - 2;
      do
      {
        if ( ++*v6 <= v24 )
        {
          v32 = *(unsigned __int16 *)v6;
          v33 = a1[20];
          if ( x86_cpu_enable_simd )
          {
            v34 = *(_DWORD *)(v32 + v33) & 0xFFFFFF;
            if ( *((int *)a1 + 63) < 6 )
              v34 = *(_DWORD *)(v32 + v33);
            v35 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v34);
            v36 = a1[23];
            v37 = *(_WORD *)(v36 + 2 * v35);
            *(_WORD *)(v36 + 2 * v35) = v32;
            *(_WORD *)(a1[22] + 2LL * ((unsigned int)v32 & *((_DWORD *)a1 + 39))) = v37;
          }
          else
          {
            v38 = a1[22];
            v39 = *((_DWORD *)a1 + 51) & ((unsigned int)*(unsigned __int8 *)(v32 + v33 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)));
            v40 = a1[23];
            v41 = (unsigned int)v32 & *((_DWORD *)a1 + 39);
            *((_DWORD *)a1 + 48) = v39;
            *(_WORD *)(v38 + 2 * v41) = *(_WORD *)(v40 + 2 * v39);
            *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v32;
          }
        }
      }
      while ( (*((_DWORD *)a1 + 60))-- != 1 );
      v43 = *((_DWORD *)a1 + 57) + 1;
      *((_DWORD *)a1 + 56) = 0;
      *((_DWORD *)a1 + 54) = 2;
      *((_DWORD *)a1 + 57) = v43;
      if ( v30 != v31 )
        continue;
      v44 = *((_DWORD *)a1 + 53);
      if ( v44 < 0 )
        v45 = 0LL;
      else
        v45 = a1[20] + (unsigned int)v44;
      tr_flush_block(a1, v45, (unsigned int)(v43 - v44), 0LL);
      v46 = *a1;
      *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
      flush_pending(v46);
    }
    if ( !*(_DWORD *)(*a1 + 24) )
      return 0LL;
  }
  if ( *((_DWORD *)a1 + 56) )
  {
    v55 = 2LL;
    v56 = *(unsigned __int8 *)((unsigned int)(*i - 1) + a1[20]);
    do
    {
      *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
      v57 = *((_DWORD *)a1 + 1489) + 1;
      *((_DWORD *)a1 + 1489) = v57;
      --v55;
    }
    while ( v55 );
    i = (int *)a1 + 57;
    *(_BYTE *)(v57 + a1[743]) = v56;
    ++*((_DWORD *)a1 + 1489);
    ++*((_WORD *)a1 + 2 * v56 + 134);
    *((_DWORD *)a1 + 56) = 0;
  }
  v58 = *i;
  v59 = 2;
  if ( (unsigned int)*i < 2 )
    v59 = *i;
  *((_DWORD *)a1 + 1494) = v59;
  if ( a2 == 4 )
  {
    v60 = *((_DWORD *)a1 + 53);
    if ( v60 >= 0 )
      v2 = a1[20] + (unsigned int)v60;
    tr_flush_block(a1, v2, (unsigned int)(v58 - v60), 1LL);
    v61 = *a1;
    *((_DWORD *)a1 + 53) = *i;
    flush_pending(v61);
    return (unsigned int)(*(_DWORD *)(*a1 + 24) != 0) + 2;
  }
  else
  {
    if ( *((_DWORD *)a1 + 1489) )
    {
      v62 = *((_DWORD *)a1 + 53);
      v63 = v62 < 0 ? 0LL : a1[20] + (unsigned int)v62;
      tr_flush_block(a1, v63, (unsigned int)(v58 - v62), 0LL);
      v64 = *a1;
      *((_DWORD *)a1 + 53) = *i;
      flush_pending(v64);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
    return 1LL;
  }
}
