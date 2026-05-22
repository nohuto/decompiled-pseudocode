/*
 * XREFs of std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E8DD4
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E9638 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E8B04 (std--_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned int **__fastcall std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned int **a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  __int128 *v3; // rbp
  unsigned int *v7; // rbx
  signed __int64 v8; // rax
  unsigned int *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r10
  __int128 *v13; // rdx
  __int128 *v14; // r8
  unsigned int *v15; // r11
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  unsigned int *v18; // rdx
  unsigned int v19; // ecx
  unsigned int *v20; // rcx
  unsigned int *v21; // rdx
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int128 v25; // xmm6
  __int64 v26; // xmm2_8
  bool v27; // zf
  unsigned int *v28; // r8
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  __int64 v33; // xmm2_8
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  __int128 v37; // xmm6
  __int64 v38; // xmm2_8
  __int128 v39; // xmm3
  __int128 v40; // xmm4
  __int128 v41; // xmm5
  __int128 v42; // xmm6
  __int64 v43; // xmm2_8
  __int128 v44; // xmm3
  __int128 v45; // xmm4
  __int128 v46; // xmm5
  __int128 v47; // xmm6
  __int64 v48; // xmm2_8
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int128 v51; // xmm5
  __int128 v52; // xmm6
  __int64 v53; // xmm2_8
  __int128 v54; // xmm3
  __int128 v55; // xmm4
  __int128 v56; // xmm5
  __int128 v57; // xmm6
  __int64 v58; // xmm2_8

  v3 = (__int128 *)(a3 - 72);
  v7 = &a2[18 * ((__int64)(0x8E38E38E38E38E39uLL * ((__int64)(a3 - (_QWORD)a2) >> 3)) >> 1)];
  v8 = 0x8E38E38E38E38E39uLL * ((__int64)(a3 - 72 - (_QWORD)a2) >> 3);
  v9 = a2;
  if ( v8 <= 40 )
  {
    v14 = (__int128 *)(a3 - 72);
  }
  else
  {
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      a2,
      &a2[18 * ((v8 + 1) >> 3)],
      (__int128 *)&a2[36 * ((v8 + 1) >> 3)]);
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      (unsigned int *)((char *)v7 - v10),
      v7,
      (__int128 *)((char *)v7 + v10));
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      (unsigned int *)((char *)v3 - v12),
      (unsigned int *)((char *)v3 - v11),
      v3);
    v14 = v13;
    v9 = v15;
  }
  std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v9, v7, v14);
  v16 = v7 + 18;
  if ( a2 < v7 )
  {
    v17 = *v7;
    do
    {
      v18 = v7 - 18;
      if ( *(v7 - 18) < v17 )
        break;
      if ( *(v7 - 18) > v17 )
        break;
      v17 = *v18;
      v7 -= 18;
    }
    while ( a2 < v18 );
  }
  if ( (unsigned __int64)v16 < a3 )
  {
    v19 = *v7;
    do
    {
      if ( *v16 < v19 )
        break;
      if ( *v16 > v19 )
        break;
      v16 += 18;
    }
    while ( (unsigned __int64)v16 < a3 );
  }
  v20 = v16;
  v21 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v20 < a3 )
      {
        if ( *v7 < *v20 )
          goto LABEL_39;
        if ( *v7 <= *v20 )
        {
          if ( v16 != v20 )
          {
            v22 = *(_OWORD *)v16;
            v23 = *((_OWORD *)v16 + 1);
            v24 = *((_OWORD *)v16 + 2);
            v25 = *((_OWORD *)v16 + 3);
            v26 = *((_QWORD *)v16 + 8);
            *(_OWORD *)v16 = *(_OWORD *)v20;
            *((_OWORD *)v16 + 1) = *((_OWORD *)v20 + 1);
            *((_OWORD *)v16 + 2) = *((_OWORD *)v20 + 2);
            *((_OWORD *)v16 + 3) = *((_OWORD *)v20 + 3);
            *((_QWORD *)v16 + 8) = *((_QWORD *)v20 + 8);
            *(_OWORD *)v20 = v22;
            *((_OWORD *)v20 + 1) = v23;
            *((_OWORD *)v20 + 2) = v24;
            *((_OWORD *)v20 + 3) = v25;
            *((_QWORD *)v20 + 8) = v26;
          }
          v16 += 18;
          goto LABEL_39;
        }
      }
      v27 = v21 == a2;
      if ( v21 > a2 )
      {
        v28 = v21 - 18;
        do
        {
          if ( *v28 >= *v7 )
          {
            if ( *v28 > *v7 )
              break;
            v7 -= 18;
            if ( v7 != v28 )
            {
              v29 = *(_OWORD *)v7;
              v30 = *((_OWORD *)v7 + 1);
              v31 = *((_OWORD *)v7 + 2);
              v32 = *((_OWORD *)v7 + 3);
              v33 = *((_QWORD *)v7 + 8);
              *(_OWORD *)v7 = *(_OWORD *)v28;
              *((_OWORD *)v7 + 1) = *((_OWORD *)v28 + 1);
              *((_OWORD *)v7 + 2) = *((_OWORD *)v28 + 2);
              *((_OWORD *)v7 + 3) = *((_OWORD *)v28 + 3);
              *((_QWORD *)v7 + 8) = *((_QWORD *)v28 + 8);
              *(_OWORD *)v28 = v29;
              *((_OWORD *)v28 + 1) = v30;
              *((_OWORD *)v28 + 2) = v31;
              *((_OWORD *)v28 + 3) = v32;
              *((_QWORD *)v28 + 8) = v33;
            }
          }
          v21 -= 18;
          v28 -= 18;
        }
        while ( a2 < v21 );
        v27 = v21 == a2;
      }
      if ( v27 )
        break;
      v21 -= 18;
      if ( v20 != (unsigned int *)a3 )
      {
        v54 = *(_OWORD *)v20;
        v55 = *((_OWORD *)v20 + 1);
        v56 = *((_OWORD *)v20 + 2);
        v57 = *((_OWORD *)v20 + 3);
        v58 = *((_QWORD *)v20 + 8);
        *(_OWORD *)v20 = *(_OWORD *)v21;
        *((_OWORD *)v20 + 1) = *((_OWORD *)v21 + 1);
        *((_OWORD *)v20 + 2) = *((_OWORD *)v21 + 2);
        *((_OWORD *)v20 + 3) = *((_OWORD *)v21 + 3);
        *((_QWORD *)v20 + 8) = *((_QWORD *)v21 + 8);
        *(_OWORD *)v21 = v54;
        *((_OWORD *)v21 + 1) = v55;
        *((_OWORD *)v21 + 2) = v56;
        *((_OWORD *)v21 + 3) = v57;
        *((_QWORD *)v21 + 8) = v58;
        goto LABEL_39;
      }
      v7 -= 18;
      if ( v21 != v7 )
      {
        v44 = *(_OWORD *)v21;
        v45 = *((_OWORD *)v21 + 1);
        v46 = *((_OWORD *)v21 + 2);
        v47 = *((_OWORD *)v21 + 3);
        v48 = *((_QWORD *)v21 + 8);
        *(_OWORD *)v21 = *(_OWORD *)v7;
        *((_OWORD *)v21 + 1) = *((_OWORD *)v7 + 1);
        *((_OWORD *)v21 + 2) = *((_OWORD *)v7 + 2);
        *((_OWORD *)v21 + 3) = *((_OWORD *)v7 + 3);
        *((_QWORD *)v21 + 8) = *((_QWORD *)v7 + 8);
        *(_OWORD *)v7 = v44;
        *((_OWORD *)v7 + 1) = v45;
        *((_OWORD *)v7 + 2) = v46;
        *((_OWORD *)v7 + 3) = v47;
        *((_QWORD *)v7 + 8) = v48;
      }
      v49 = *(_OWORD *)v7;
      v16 -= 18;
      v50 = *((_OWORD *)v7 + 1);
      v51 = *((_OWORD *)v7 + 2);
      v52 = *((_OWORD *)v7 + 3);
      v53 = *((_QWORD *)v7 + 8);
      *(_OWORD *)v7 = *(_OWORD *)v16;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v16 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v16 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v16 + 3);
      *((_QWORD *)v7 + 8) = *((_QWORD *)v16 + 8);
      *(_OWORD *)v16 = v49;
      *((_OWORD *)v16 + 1) = v50;
      *((_OWORD *)v16 + 2) = v51;
      *((_OWORD *)v16 + 3) = v52;
      *((_QWORD *)v16 + 8) = v53;
    }
    if ( v20 == (unsigned int *)a3 )
      break;
    if ( v16 != v20 )
    {
      v34 = *(_OWORD *)v7;
      v35 = *((_OWORD *)v7 + 1);
      v36 = *((_OWORD *)v7 + 2);
      v37 = *((_OWORD *)v7 + 3);
      v38 = *((_QWORD *)v7 + 8);
      *(_OWORD *)v7 = *(_OWORD *)v16;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v16 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v16 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v16 + 3);
      *((_QWORD *)v7 + 8) = *((_QWORD *)v16 + 8);
      *(_OWORD *)v16 = v34;
      *((_OWORD *)v16 + 1) = v35;
      *((_OWORD *)v16 + 2) = v36;
      *((_OWORD *)v16 + 3) = v37;
      *((_QWORD *)v16 + 8) = v38;
    }
    v16 += 18;
    v39 = *(_OWORD *)v7;
    v40 = *((_OWORD *)v7 + 1);
    v41 = *((_OWORD *)v7 + 2);
    v42 = *((_OWORD *)v7 + 3);
    v43 = *((_QWORD *)v7 + 8);
    *(_OWORD *)v7 = *(_OWORD *)v20;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v20 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)v20 + 2);
    *((_OWORD *)v7 + 3) = *((_OWORD *)v20 + 3);
    *((_QWORD *)v7 + 8) = *((_QWORD *)v20 + 8);
    v7 += 18;
    *(_OWORD *)v20 = v39;
    *((_OWORD *)v20 + 1) = v40;
    *((_OWORD *)v20 + 2) = v41;
    *((_OWORD *)v20 + 3) = v42;
    *((_QWORD *)v20 + 8) = v43;
LABEL_39:
    v20 += 18;
  }
  *a1 = v7;
  a1[1] = v16;
  return a1;
}
