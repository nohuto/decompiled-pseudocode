/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x180102B0C
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x18010239C (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x180103508 (Xp10ScatteredReadBytes.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x18014C63C (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10SortHuffmanSymbols @ 0x18014E76C (Xp10SortHuffmanSymbols.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
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
  int v16; // esi
  int v17; // edi
  unsigned int v18; // r15d
  unsigned int v19; // esi
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r13d
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // r12
  unsigned int v38; // esi
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // r15
  __int64 v44; // rax
  unsigned __int16 v45; // r8
  unsigned int v46; // esi
  bool v47; // cc
  unsigned int v48; // esi
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  _QWORD *v53; // r12
  unsigned int v54; // eax
  int v55; // eax
  int v56; // ecx
  unsigned int v57; // edx
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // edx
  unsigned __int8 v61; // dl
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  unsigned __int64 v69; // rcx
  unsigned int v70; // esi
  int i; // edx
  unsigned int v72; // r15d
  unsigned int v73; // eax
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rax
  unsigned int v77; // edx
  unsigned int v79; // edx
  unsigned int v80; // ebx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // [rsp+50h] [rbp-10h]
  __int64 v84; // [rsp+58h] [rbp-8h]
  int v86; // [rsp+B0h] [rbp+50h]
  unsigned int v87; // [rsp+B8h] [rbp+58h] BYREF

  v8 = (__int64)a5;
  v10 = a2;
  v11 = 2;
  v87 = 0;
  if ( *(_QWORD *)a5 )
  {
    if ( *(_QWORD *)a5 < 2uLL )
      v11 = *a5;
    v12 = a5[4];
    if ( v12 < v11 )
    {
      v13 = Xp10ScatteredReadBytes(a5 + 6, &v87, 4LL);
      v14 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v14;
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
      memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
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
          v22 = 1;
          v87 = 0;
          if ( !*(_QWORD *)v8 )
            return 3221226050LL;
          v23 = *(_DWORD *)(v8 + 16);
          if ( !v23 )
          {
            v24 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
            v25 = *(_DWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v25;
            v23 = v25 + 8 * v24;
            v22 = v23 != 0;
          }
          v26 = v23 - v22;
          *(_DWORD *)(v8 + 16) = v26;
          v27 = *(_DWORD *)(v8 + 8) & ((1LL << v22) - 1);
          *(_QWORD *)(v8 + 8) >>= v22;
          *(_QWORD *)v8 -= v22;
          if ( !v22 )
            return 3221226050LL;
          if ( v27 )
          {
            if ( v27 != 1 )
              return 3221226050LL;
            v28 = 3;
            v87 = 0;
            if ( !*(_QWORD *)v8 )
              return 3221226050LL;
            if ( *(_QWORD *)v8 < 3uLL )
              v28 = *(_DWORD *)v8;
            if ( v26 < v28 )
            {
              v29 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
              v30 = *(_DWORD *)(v8 + 16);
              *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v30;
              v26 = v30 + 8 * v29;
              if ( v26 < v28 )
                v28 = v26;
            }
            *(_DWORD *)(v8 + 16) = v26 - v28;
            v31 = *(_DWORD *)(v8 + 8) & ((1LL << v28) - 1);
            *(_QWORD *)(v8 + 8) >>= v28;
            *(_QWORD *)v8 -= v28;
            if ( v28 < 3 )
              return 3221226050LL;
            if ( v31 >= v21 && ++v31 > 8 )
              return 3221226050LL;
            v21 = v31;
            *(_BYTE *)(v19 + a1 + 24) = v31;
            if ( v31 && v31 < v18 )
              v18 = v31;
            if ( v31 > v20 )
              v20 = v31;
          }
          else
          {
            *(_BYTE *)(v19 + a1 + 24) = v21;
          }
          ++v19;
        }
        v32 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v18, v20);
        if ( !v32 )
          return 3221226050LL;
        v83 = Xp10BuildHuffmanDecodeTable((int)a1 + 24, (int)a1 + 2136, (int)a1 + 728, v32, 8, 4, a1 + 37464);
        v33 = v83;
        memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
        v10 = a2;
        v34 = 8;
        a7 = 8;
        LODWORD(v35) = 0;
        v86 = 8;
LABEL_38:
        while ( (unsigned int)v35 < v10 )
        {
          v36 = *(_QWORD *)v8;
          v37 = v33;
          v84 = v33;
          v38 = 8;
          v87 = 0;
          if ( v36 )
          {
            if ( v36 < 8 )
              v38 = v36;
            if ( *(_DWORD *)(v8 + 16) < v38 )
            {
              v39 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
              v40 = *(_DWORD *)(v8 + 16);
              *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v40;
              v41 = v40 + 8 * v39;
              *(_DWORD *)(v8 + 16) = v41;
              if ( v41 < v38 )
                LOBYTE(v38) = v41;
            }
            v42 = *(_QWORD *)v8;
            v43 = (_QWORD *)(v8 + 8);
            v36 = *(_QWORD *)v8;
            v44 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v38) - 1);
          }
          else
          {
            v44 = 0LL;
            v43 = (_QWORD *)(v8 + 8);
            v42 = 0LL;
          }
          LODWORD(a5) = 0;
          v45 = *(_WORD *)(v83 + 2 * v44);
          LOWORD(v87) = v45;
          v46 = v45 & 0xF;
          if ( v42 && (v87 & 0xF) != 0 )
          {
            v47 = (v87 & 0xF) <= v42;
LABEL_61:
            v53 = v43;
            if ( !v47 )
            {
              v46 = *(_DWORD *)v8;
              v53 = (_QWORD *)(v8 + 8);
            }
            v54 = *(_DWORD *)(v8 + 16);
            if ( v54 < v46 )
            {
              v55 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
              v56 = *(_DWORD *)(v8 + 16);
              v45 = v87;
              *v43 |= (unsigned __int64)(unsigned int)a5 << v56;
              v54 = v56 + 8 * v55;
              if ( v54 < v46 )
              {
                v43 = v53;
                v46 = v54;
              }
            }
            v37 = v84;
            *v43 >>= v46;
            *(_QWORD *)v8 -= v46;
            v36 = *(_QWORD *)v8;
            *(_DWORD *)(v8 + 16) = v54 - v46;
          }
          while ( (v45 & 0x8000u) != 0 )
          {
            LODWORD(a5) = 0;
            v48 = 4;
            if ( v36 )
            {
              if ( v36 < 4 )
                v48 = *(_DWORD *)v8;
              if ( *(_DWORD *)(v8 + 16) < v48 )
              {
                v49 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                v50 = *(_DWORD *)(v8 + 16);
                v45 = v87;
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)(unsigned int)a5 << v50;
                v51 = v50 + 8 * v49;
                *(_DWORD *)(v8 + 16) = v51;
                if ( v51 < v48 )
                  LOBYTE(v48) = v51;
              }
              v43 = (_QWORD *)(v8 + 8);
              v52 = *(_DWORD *)(v8 + 8) & ((1LL << v48) - 1);
            }
            else
            {
              v52 = 0;
              v43 = (_QWORD *)(v8 + 8);
            }
            v36 = *(_QWORD *)v8;
            LODWORD(a5) = 0;
            v37 += 2 * ((__int16)v45 & 0xFFFFFFFFFFFFFFF0uLL);
            v84 = v37;
            v45 = *(_WORD *)(v37 + 2LL * v52);
            LOWORD(v87) = v45;
            v46 = v45 & 0xF;
            if ( v36 && (v87 & 0xF) != 0 )
            {
              v47 = (v87 & 0xF) <= v36;
              goto LABEL_61;
            }
          }
          v57 = v45 >> 4;
          if ( v57 == 28 )
          {
            v10 = a2;
            v33 = v83;
            v76 = (unsigned int)v35;
            v35 = (unsigned int)(v35 + 1);
            *(_BYTE *)(v76 + a1 + 24) = 0;
            if ( (v35 & 0xF) != 0 )
            {
              while ( 1 )
              {
                v33 = v83;
                if ( (unsigned int)v35 >= a2 )
                  goto LABEL_121;
                *(_BYTE *)(v35 + a1 + 24) = 0;
                v35 = (unsigned int)(v35 + 1);
                if ( (v35 & 0xF) == 0 )
                  goto LABEL_38;
              }
            }
          }
          else
          {
            if ( v45 >> 4 == 29 )
            {
              v87 = 0;
              v64 = 2;
              if ( !v36 )
                return 3221226050LL;
              if ( v36 < 2 )
                v64 = *(_DWORD *)v8;
              v65 = *(_DWORD *)(v8 + 16);
              if ( v65 < v64 )
              {
                v66 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                v67 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v67;
                v65 = v67 + 8 * v66;
                if ( v65 < v64 )
                  v64 = v65;
              }
              *(_DWORD *)(v8 + 16) = v65 - v64;
              v68 = *(_DWORD *)(v8 + 8) & ((1LL << v64) - 1);
              *(_QWORD *)(v8 + 8) >>= v64;
              *(_QWORD *)v8 -= v64;
              v69 = *(_QWORD *)v8;
              if ( v64 < 2 )
                return 3221226050LL;
              v70 = v68 + 5;
              if ( v68 == 3 )
              {
                for ( i = 7; i == 7; v70 += i )
                {
                  v87 = 0;
                  v72 = 3;
                  if ( !v69 )
                    return 3221226050LL;
                  if ( v69 < 3 )
                    v72 = *(_DWORD *)v8;
                  v73 = *(_DWORD *)(v8 + 16);
                  if ( v73 < v72 )
                  {
                    v74 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                    v75 = *(_DWORD *)(v8 + 16);
                    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v75;
                    v73 = v75 + 8 * v74;
                    if ( v73 < v72 )
                      v72 = v73;
                  }
                  *(_DWORD *)(v8 + 16) = v73 - v72;
                  i = *(_DWORD *)(v8 + 8) & ((1LL << v72) - 1);
                  *(_QWORD *)(v8 + 8) >>= v72;
                  *(_QWORD *)v8 -= v72;
                  v69 = *(_QWORD *)v8;
                  if ( v72 < 3 )
                    return 3221226050LL;
                }
              }
              v10 = a2;
              if ( v70 + (unsigned int)v35 > a2 )
                return 3221226050LL;
              if ( v70 )
              {
                memset_thunk_772440563353939046((void *)(a1 + (unsigned int)v35 + 24LL), 0, v70);
                do
                {
                  LODWORD(v35) = v35 + 1;
                  --v70;
                }
                while ( v70 );
              }
            }
            else
            {
              switch ( v45 >> 4 )
              {
                case 30:
                  *(_BYTE *)((unsigned int)v35 + a1 + 24) = v86;
                  break;
                case 31:
                  if ( (unsigned int)v35 < 0x10 )
                    return 3221226050LL;
                  v63 = *(unsigned __int8 *)((unsigned int)(v35 - 16) + a1 + 24);
                  *(_BYTE *)((unsigned int)v35 + a1 + 24) = v63;
                  if ( !(_BYTE)v63 )
                    return 3221226050LL;
                  v86 = v63;
                  break;
                case 32:
                  if ( (unsigned int)v35 < 0x10 )
                    return 3221226050LL;
                  v61 = *(_BYTE *)((unsigned int)(v35 - 16) + a1 + 24) + 1;
                  *(_BYTE *)((unsigned int)v35 + a1 + 24) = v61;
                  if ( (unsigned __int8)(v61 - 1) > 0x1Au )
                    return 3221226050LL;
                  v62 = a7;
                  v86 = v61;
                  if ( v61 < v34 )
                    v34 = v61;
                  if ( v61 > a7 )
                    v62 = v61;
                  a7 = v62;
                  break;
                default:
                  if ( v57 > 0x1B )
                    return 3221226050LL;
                  v58 = v86;
                  if ( v57 )
                    v58 = v45 >> 4;
                  v86 = v58;
                  *(_BYTE *)((unsigned int)v35 + a1 + 24) = v57;
                  if ( (_BYTE)v57 && (unsigned __int8)v57 < v34 )
                    v34 = (unsigned __int8)v57;
                  v59 = (unsigned __int8)v57;
                  v60 = a7;
                  if ( v59 > a7 )
                    v60 = v59;
                  a7 = v60;
                  break;
              }
              v10 = a2;
              LODWORD(v35) = v35 + 1;
            }
            v33 = v83;
          }
        }
LABEL_121:
        v77 = a7;
        v16 = a1 + 24;
      }
      else
      {
        _BitScanReverse(&v34, v10);
        v79 = 0;
        v80 = (1 << (v34 + 1)) - v10;
        if ( v80 )
        {
          LOBYTE(v79) = v34;
          memset_thunk_772440563353939046((void *)(a1 + 24), v79, v80);
          v79 = (1 << (v34 + 1)) - v10;
        }
        if ( v79 < v10 )
        {
          memset_thunk_772440563353939046((void *)(a1 + v79 + 24LL), v34 + 1, v10 - v79);
          v16 = a1 + 24;
        }
        v77 = v34 + 1;
      }
      v81 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, v10, v34, v77);
      if ( v81 )
      {
        v82 = Xp10BuildHuffmanDecodeTable(v16, (int)a1 + 37464, (int)a1 + 728, v81, 12, 6, a1 + 37464);
        *a8 = v82;
        return 0LL;
      }
    }
  }
  return 3221226050LL;
}
