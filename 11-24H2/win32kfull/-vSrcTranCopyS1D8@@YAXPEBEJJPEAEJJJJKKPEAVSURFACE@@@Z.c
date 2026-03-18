/*
 * XREFs of ?vSrcTranCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14019D250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D8(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r14d
  int v11; // r11d
  int v12; // r12d
  int v13; // edi
  unsigned int v15; // ebp
  unsigned __int8 *v16; // r8
  __int64 v17; // rsi
  unsigned int v18; // edx
  const unsigned __int8 *v19; // rsi
  const unsigned __int8 *v20; // r9
  int v21; // ecx
  unsigned __int8 *v22; // rax
  unsigned __int8 *v23; // r9
  __int64 v24; // r10
  const unsigned __int8 *v25; // rdx
  __int64 v26; // rbx
  char v27; // cl
  unsigned __int8 *v28; // r8
  __int64 v29; // rdi
  unsigned __int8 *v30; // rsi
  unsigned __int8 *v31; // r10
  unsigned __int64 v32; // rax
  _BYTE *v33; // r9
  unsigned __int64 *v34; // r8
  unsigned __int64 v35; // rax
  signed int v36; // r11d
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // r9
  char v39; // al
  unsigned __int8 *v40; // rcx
  unsigned __int8 *v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  const unsigned __int8 *v43; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+78h] [rbp+10h]

  v9 = a5;
  v11 = a7;
  v12 = a3;
  v13 = a6;
  v15 = a5 & 7;
  v45 = 255 >> (a5 & 7);
  v16 = &a4[a5 & 0xFFFFFFF8];
  v17 = (__int64)a2 >> 3;
  v18 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v19 = &a1[v17];
  v20 = v19;
  v42 = a8 * a7;
  v41 = &v16[v42];
  v43 = v19;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v29 = 0x101010101010101LL * a9;
    v30 = &v16[v42];
    do
    {
      v31 = &v16[v18];
      if ( ((unsigned __int8)v45 & *v20) != 0 )
      {
        v29 = 0x101010101010101LL * a9;
        v32 = dword_140353760[(unsigned __int64)(unsigned __int8)(v45 & *v20) >> 4] | ((unsigned __int64)dword_140353760[(unsigned __int8)v45 & *v20 & 0xF] << 32);
        *(_QWORD *)v16 = v29 & v32 | *(_QWORD *)v16 & ~v32;
      }
      v33 = v20 + 1;
      v34 = (unsigned __int64 *)(v16 + 8);
      if ( v34 != (unsigned __int64 *)v31 )
      {
        do
        {
          if ( *v33 )
          {
            v35 = dword_140353760[(unsigned __int64)(unsigned __int8)*v33 >> 4] | ((unsigned __int64)dword_140353760[*v33 & 0xF] << 32);
            *v34 = v29 & v35 | *v34 & ~v35;
          }
          ++v33;
          ++v34;
        }
        while ( v34 != (unsigned __int64 *)v31 );
        v30 = v41;
      }
      v16 = (unsigned __int8 *)v34 + (int)(a7 - v18);
      v20 = &v33[v12 - (((a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8)) >> 3)];
    }
    while ( v16 != v30 );
    v11 = a7;
    v13 = a6;
    v19 = v43;
    v15 = a5 & 7;
    v9 = a5;
    v12 = a3;
  }
  v21 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    if ( ((v13 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v22 = &a4[v13 & 0xFFFFFFFFFFFFFFF8uLL];
      v23 = &v22[v42];
      v24 = v11 - v21;
      v25 = &a1[(__int64)(v13 + a2 - v9) >> 3];
      v26 = v13 & 7;
      do
      {
        v27 = *v25;
        v28 = &v22[v26];
        if ( *v25 )
        {
          do
          {
            if ( v27 < 0 )
              *v22 = a9;
            v27 *= 2;
            ++v22;
          }
          while ( v22 != v28 );
        }
        else
        {
          v22 += v26;
        }
        v22 += v24;
        v25 += v12;
      }
      while ( v22 != v23 );
    }
    else if ( (int)(v21 - v15) > 0 )
    {
      v36 = v11 - (v21 - v15);
      v37 = &a4[v9];
      v38 = &v37[v42];
      do
      {
        v39 = *v19 << v15;
        v40 = &v37[(v13 & 7) - (unsigned __int64)v15];
        do
        {
          if ( v39 < 0 )
            *v37 = a9;
          v39 *= 2;
          ++v37;
        }
        while ( v37 != v40 );
        v37 += v36;
        v19 += v12;
      }
      while ( v37 != v38 );
    }
  }
}
