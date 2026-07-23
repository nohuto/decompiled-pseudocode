/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x14078BAB4
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x14078A0A8 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x1407892E0 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10ScatteredReadBytes @ 0x14078C900 (Xp10ScatteredReadBytes.c)
 *     Xp10SortHuffmanSymbols @ 0x14078C984 (Xp10SortHuffmanSymbols.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8)
{
  __int64 v8; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  __int64 v16; // rsi
  int v17; // edi
  unsigned int v18; // r15d
  unsigned int v19; // esi
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // r13d
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // r12
  unsigned int v40; // esi
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  _QWORD *v45; // r15
  __int64 v46; // rax
  unsigned __int16 i; // r8
  unsigned int v48; // esi
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned int v54; // esi
  _QWORD *v55; // r12
  unsigned int v56; // eax
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // edx
  int v60; // ecx
  unsigned int v61; // eax
  unsigned int v62; // edx
  unsigned __int8 v63; // dl
  unsigned int v64; // eax
  int v65; // eax
  unsigned int v66; // esi
  unsigned int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // edx
  unsigned __int64 v71; // rcx
  unsigned int v72; // esi
  int j; // edx
  unsigned int v74; // r15d
  unsigned int v75; // eax
  int v76; // eax
  int v77; // ecx
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int v81; // edx
  unsigned int v82; // ebx
  int v83; // eax
  __int64 v84; // rax
  int v85; // [rsp+38h] [rbp-28h]
  __int64 v86; // [rsp+50h] [rbp-10h]
  __int64 v87; // [rsp+58h] [rbp-8h]
  int v89; // [rsp+B0h] [rbp+50h]
  unsigned int v90; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a2;
  v11 = 2;
  v90 = 0;
  if ( *(_QWORD *)a5 )
  {
    if ( *(_QWORD *)a5 < 2uLL )
      v11 = *(_QWORD *)a5;
    v12 = *(_DWORD *)(a5 + 16);
    if ( v12 < v11 )
    {
      v13 = Xp10ScatteredReadBytes(a5 + 24, &v90, 4LL);
      v14 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v14;
      v12 = v14 + 8 * v13;
      if ( v12 < v11 )
        v11 = v12;
    }
    v15 = *(_DWORD *)(v8 + 8) & ((1LL << v11) - 1);
    *(_QWORD *)(v8 + 8) >>= v11;
    *(_QWORD *)v8 -= v11;
    *(_DWORD *)(v8 + 16) = v12 - v11;
    if ( v11 >= 2 )
    {
      v16 = a1 + 24;
      memset_0((void *)(a1 + 24), 0, 0x2C0uLL);
      if ( v15 )
      {
        v17 = v15 - 1;
        if ( !v17 )
          return 3221225474LL;
        if ( v17 != 1 )
          return 3221226050LL;
        v18 = 4;
        v19 = 0;
        v20 = 4;
        v21 = 4;
        while ( v19 < 0x21 )
        {
          v22 = *(_QWORD *)v8;
          v23 = 1;
          v90 = 0;
          if ( !v22 )
            return 3221226050LL;
          v24 = *(_DWORD *)(v8 + 16);
          if ( !v24 )
          {
            v25 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
            v26 = *(_DWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v26;
            v24 = v26 + 8 * v25;
            v23 = v24 != 0;
          }
          v27 = v24 - v23;
          *(_DWORD *)(v8 + 16) = v27;
          v28 = *(_DWORD *)(v8 + 8) & ((1LL << v23) - 1);
          *(_QWORD *)(v8 + 8) >>= v23;
          *(_QWORD *)v8 -= v23;
          v29 = *(_QWORD *)v8;
          if ( !v23 )
            return 3221226050LL;
          if ( v28 )
          {
            if ( v28 != 1 )
              return 3221226050LL;
            v90 = 0;
            v30 = 3;
            if ( !v29 )
              return 3221226050LL;
            if ( v29 < 3 )
              v30 = v29;
            if ( v27 < v30 )
            {
              v31 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
              v32 = *(_DWORD *)(v8 + 16);
              *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v32;
              v27 = v32 + 8 * v31;
              if ( v27 < v30 )
                v30 = v27;
            }
            *(_DWORD *)(v8 + 16) = v27 - v30;
            v33 = *(_DWORD *)(v8 + 8) & ((1LL << v30) - 1);
            *(_QWORD *)(v8 + 8) >>= v30;
            *(_QWORD *)v8 -= v30;
            if ( v30 < 3 )
              return 3221226050LL;
            if ( v33 >= v21 && ++v33 > 8 )
              return 3221226050LL;
            v21 = v33;
            *(_BYTE *)(v19 + a1 + 24) = v33;
            if ( v33 && v33 < v18 )
              v18 = v33;
            if ( v33 > v20 )
              v20 = v33;
          }
          else
          {
            *(_BYTE *)(v19 + a1 + 24) = v21;
          }
          ++v19;
        }
        v34 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v18, v20);
        if ( !v34 )
          return 3221226050LL;
        v86 = Xp10BuildHuffmanDecodeTable(
                a1 + 24,
                a1 + 2136,
                (_WORD *)(a1 + 728),
                v34,
                8u,
                4,
                a1 + 37464,
                v85,
                a1 + 2136);
        v35 = v86;
        memset_0((void *)(a1 + 24), 0, 0x2C0uLL);
        v10 = a2;
        v36 = 8;
        a7 = 8;
        LODWORD(v37) = 0;
        v89 = 8;
LABEL_38:
        while ( (unsigned int)v37 < v10 )
        {
          v38 = *(_QWORD *)v8;
          v39 = v35;
          v87 = v35;
          v40 = 8;
          v90 = 0;
          if ( v38 )
          {
            if ( v38 < 8 )
              v40 = v38;
            if ( *(_DWORD *)(v8 + 16) < v40 )
            {
              v41 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
              v42 = *(_DWORD *)(v8 + 16);
              *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v42;
              v43 = v42 + 8 * v41;
              *(_DWORD *)(v8 + 16) = v43;
              if ( v43 < v40 )
                LOBYTE(v40) = v43;
            }
            v44 = *(_QWORD *)v8;
            v45 = (_QWORD *)(v8 + 8);
            v38 = *(_QWORD *)v8;
            v46 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v40) - 1);
          }
          else
          {
            v46 = 0LL;
            v45 = (_QWORD *)(v8 + 8);
            v44 = 0LL;
          }
          for ( i = *(_WORD *)(v86 + 2 * v46); ; i = *(_WORD *)(v39 + 2 * v53) )
          {
            LODWORD(a5) = 0;
            v54 = i & 0xF;
            LOWORD(v90) = i;
            if ( v44 && (i & 0xF) != 0 )
            {
              v55 = v45;
              if ( (i & 0xFu) > v44 )
              {
                v54 = *(_DWORD *)v8;
                v55 = (_QWORD *)(v8 + 8);
              }
              v56 = *(_DWORD *)(v8 + 16);
              if ( v56 < v54 )
              {
                v57 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                v58 = *(_DWORD *)(v8 + 16);
                i = v90;
                *v45 |= (unsigned __int64)(unsigned int)a5 << v58;
                v56 = v58 + 8 * v57;
                if ( v56 < v54 )
                {
                  v45 = v55;
                  v54 = v56;
                }
              }
              v39 = v87;
              *v45 >>= v54;
              *(_QWORD *)v8 -= v54;
              v38 = *(_QWORD *)v8;
              *(_DWORD *)(v8 + 16) = v56 - v54;
            }
            if ( (i & 0x8000u) == 0 )
              break;
            LODWORD(a5) = 0;
            v48 = 4;
            if ( v38 )
            {
              if ( v38 < 4 )
                v48 = *(_DWORD *)v8;
              if ( *(_DWORD *)(v8 + 16) < v48 )
              {
                v49 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                v50 = *(_DWORD *)(v8 + 16);
                i = v90;
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)(unsigned int)a5 << v50;
                v51 = v50 + 8 * v49;
                *(_DWORD *)(v8 + 16) = v51;
                if ( v51 < v48 )
                  LOBYTE(v48) = v51;
              }
              v45 = (_QWORD *)(v8 + 8);
              v52 = *(_DWORD *)(v8 + 8) & ((1LL << v48) - 1);
            }
            else
            {
              v52 = 0;
              v45 = (_QWORD *)(v8 + 8);
            }
            v39 += 2 * ((__int16)i & 0xFFFFFFFFFFFFFFF0uLL);
            v53 = v52;
            v44 = *(_QWORD *)v8;
            v87 = v39;
            v38 = *(_QWORD *)v8;
          }
          v59 = i >> 4;
          if ( v59 == 28 )
          {
            v10 = a2;
            v35 = v86;
            v78 = (unsigned int)v37;
            v37 = (unsigned int)(v37 + 1);
            *(_BYTE *)(v78 + a1 + 24) = 0;
            if ( (v37 & 0xF) != 0 )
            {
              while ( 1 )
              {
                v35 = v86;
                if ( (unsigned int)v37 >= a2 )
                  goto LABEL_119;
                *(_BYTE *)(v37 + a1 + 24) = 0;
                v37 = (unsigned int)(v37 + 1);
                if ( (v37 & 0xF) == 0 )
                  goto LABEL_38;
              }
            }
          }
          else
          {
            if ( i >> 4 == 29 )
            {
              v90 = 0;
              v66 = 2;
              if ( !v38 )
                return 3221226050LL;
              if ( v38 < 2 )
                v66 = *(_DWORD *)v8;
              v67 = *(_DWORD *)(v8 + 16);
              if ( v67 < v66 )
              {
                v68 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
                v69 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v69;
                v67 = v69 + 8 * v68;
                if ( v67 < v66 )
                  v66 = v67;
              }
              *(_DWORD *)(v8 + 16) = v67 - v66;
              v70 = *(_DWORD *)(v8 + 8) & ((1LL << v66) - 1);
              *(_QWORD *)(v8 + 8) >>= v66;
              *(_QWORD *)v8 -= v66;
              v71 = *(_QWORD *)v8;
              if ( v66 < 2 )
                return 3221226050LL;
              v72 = v70 + 5;
              if ( v70 == 3 )
              {
                for ( j = 7; j == 7; v72 += j )
                {
                  v90 = 0;
                  v74 = 3;
                  if ( !v71 )
                    return 3221226050LL;
                  if ( v71 < 3 )
                    v74 = *(_DWORD *)v8;
                  v75 = *(_DWORD *)(v8 + 16);
                  if ( v75 < v74 )
                  {
                    v76 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
                    v77 = *(_DWORD *)(v8 + 16);
                    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v77;
                    v75 = v77 + 8 * v76;
                    if ( v75 < v74 )
                      v74 = v75;
                  }
                  *(_DWORD *)(v8 + 16) = v75 - v74;
                  j = *(_DWORD *)(v8 + 8) & ((1LL << v74) - 1);
                  *(_QWORD *)(v8 + 8) >>= v74;
                  *(_QWORD *)v8 -= v74;
                  v71 = *(_QWORD *)v8;
                  if ( v74 < 3 )
                    return 3221226050LL;
                }
              }
              v10 = a2;
              if ( v72 + (unsigned int)v37 > a2 )
                return 3221226050LL;
              if ( v72 )
              {
                memset_0((void *)(a1 + (unsigned int)v37 + 24LL), 0, v72);
                do
                {
                  LODWORD(v37) = v37 + 1;
                  --v72;
                }
                while ( v72 );
              }
            }
            else
            {
              switch ( i >> 4 )
              {
                case 30:
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v89;
                  break;
                case 31:
                  if ( (unsigned int)v37 < 0x10 )
                    return 3221226050LL;
                  v65 = *(unsigned __int8 *)((unsigned int)(v37 - 16) + a1 + 24);
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v65;
                  if ( !(_BYTE)v65 )
                    return 3221226050LL;
                  v89 = v65;
                  break;
                case 32:
                  if ( (unsigned int)v37 < 0x10 )
                    return 3221226050LL;
                  v63 = *(_BYTE *)((unsigned int)(v37 - 16) + a1 + 24) + 1;
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v63;
                  if ( (unsigned __int8)(v63 - 1) > 0x1Au )
                    return 3221226050LL;
                  v64 = a7;
                  v89 = v63;
                  if ( v63 < v36 )
                    v36 = v63;
                  if ( v63 > a7 )
                    v64 = v63;
                  a7 = v64;
                  break;
                default:
                  if ( v59 > 0x1B )
                    return 3221226050LL;
                  v60 = v89;
                  if ( v59 )
                    v60 = i >> 4;
                  v89 = v60;
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v59;
                  if ( (_BYTE)v59 && (unsigned __int8)v59 < v36 )
                    v36 = (unsigned __int8)v59;
                  v61 = (unsigned __int8)v59;
                  v62 = a7;
                  if ( v61 > a7 )
                    v62 = v61;
                  a7 = v62;
                  break;
              }
              v10 = a2;
              LODWORD(v37) = v37 + 1;
            }
            v35 = v86;
          }
        }
LABEL_119:
        v79 = a7;
        v16 = a1 + 24;
      }
      else
      {
        _BitScanReverse(&v36, v10);
        v81 = 0;
        v82 = (1 << (v36 + 1)) - v10;
        if ( v82 )
        {
          LOBYTE(v81) = v36;
          memset_0((void *)(a1 + 24), v81, v82);
          v81 = (1 << (v36 + 1)) - v10;
        }
        if ( v81 < v10 )
        {
          memset_0((void *)(a1 + v81 + 24LL), v36 + 1, v10 - v81);
          v16 = a1 + 24;
        }
        v79 = v36 + 1;
      }
      v83 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, v10, v36, v79);
      if ( v83 )
      {
        v84 = Xp10BuildHuffmanDecodeTable(v16, a1 + 37464, (_WORD *)(a1 + 728), v83, 0xCu, 6, a1 + 37464, v85, a6);
        *a8 = v84;
        return 0LL;
      }
    }
  }
  return 3221226050LL;
}
