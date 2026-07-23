/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x18010239C
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1801032B8 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x180102B0C (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ScatteredReadBytes @ 0x180103508 (Xp10ScatteredReadBytes.c)
 *     Xp10ScatteredCopyFromPrevious @ 0x18011B588 (Xp10ScatteredCopyFromPrevious.c)
 *     Xp10ScatteredNextBuffer @ 0x18011DF2C (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanDecode(unsigned __int16 **a1, __int64 a2, _QWORD *a3)
{
  __int16 v5; // r9
  int v6; // ecx
  int v7; // r9d
  unsigned int v8; // eax
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r9
  unsigned int v18; // edi
  unsigned int *v19; // r13
  _QWORD *v20; // r15
  unsigned int v21; // edx
  unsigned int *v22; // r8
  int v23; // eax
  unsigned int v24; // ecx
  _QWORD *v25; // r14
  __int64 v26; // rax
  unsigned int *v27; // rdi
  unsigned __int64 v28; // rcx
  __int16 v29; // r10
  unsigned int v30; // esi
  _QWORD *v31; // r13
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // esi
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned __int64 v39; // r8
  unsigned int v40; // esi
  unsigned int v41; // eax
  int v42; // eax
  unsigned __int16 v43; // r10
  unsigned __int64 v44; // r9
  unsigned int v45; // esi
  unsigned int v46; // edi
  int v47; // eax
  _QWORD *v48; // r14
  unsigned int v49; // esi
  __int64 v50; // r14
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int16 v55; // si
  unsigned int v56; // edi
  unsigned int v57; // edx
  int v58; // eax
  int v59; // ecx
  unsigned __int64 v60; // rax
  unsigned int v61; // edi
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edi
  unsigned int v67; // eax
  int v68; // eax
  int v69; // ecx
  __int16 v70; // si
  int v71; // edx
  unsigned int v72; // esi
  unsigned int v73; // edi
  unsigned int v74; // edx
  int v75; // eax
  int v76; // ecx
  unsigned __int64 v77; // rax
  int v78; // r10d
  int v79; // esi
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // r14d
  unsigned int v83; // edi
  unsigned int v84; // edx
  int v85; // eax
  int v86; // ecx
  unsigned __int64 v87; // rax
  int v88; // r8d
  _QWORD *v89; // r14
  unsigned int v90; // [rsp+40h] [rbp-30h]
  __int64 v91; // [rsp+48h] [rbp-28h]
  _QWORD *v92; // [rsp+58h] [rbp-18h]
  unsigned int v93; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD *v94; // [rsp+C0h] [rbp+50h]
  unsigned int v95; // [rsp+C8h] [rbp+58h] BYREF

  v94 = a3;
  v5 = **a1;
  v93 = 0;
  v6 = v5 & 0x1F;
  v7 = (unsigned __int8)v5 >> 5;
  v8 = (1 << v6) - v7 - 246;
  _BitScanReverse((unsigned int *)&v9, v8);
  v10 = v8 & ((1 << v6) - v7 - 247);
  v90 = 16 * (v6 + 20);
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v90, (_DWORD)a3, v7, a2, (__int64)(a1 + 587));
  if ( (int)result >= 0 )
  {
    v14 = v9 + 1;
    if ( !v10 )
      v14 = v9;
    result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v14 + 232, v12, v13, a2, (__int64)(a1 + 2635));
    if ( (int)result >= 0 )
    {
      v15 = (_QWORD *)(a2 + 8);
      v16 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        v92 = v16;
        if ( !*(_QWORD *)a2 )
          return 0LL;
        v17 = 0LL;
        v18 = 12;
        v91 = 0LL;
        v93 = 0;
        if ( *(_QWORD *)a2 < 0xCuLL )
        {
          v18 = *(_DWORD *)a2;
          v16 = v15;
          v92 = v15;
        }
        v19 = (unsigned int *)(a2 + 16);
        v20 = v16;
        v21 = *(_DWORD *)(a2 + 16);
        v22 = (unsigned int *)(a2 + 16);
        if ( v21 < v18 )
        {
          v23 = Xp10ScatteredReadBytes(a2 + 24, &v93, 4LL);
          v24 = *v19;
          v22 = (unsigned int *)(a2 + 16);
          v17 = 0LL;
          *v16 |= (unsigned __int64)v93 << *v19;
          v21 = v24 + 8 * v23;
          *v19 = v21;
          if ( v21 < v18 )
          {
            LOBYTE(v18) = v24 + 8 * v23;
            v22 = (unsigned int *)(a2 + 16);
            v20 = (_QWORD *)(a2 + 8);
          }
        }
        v95 = 0;
        v25 = v20;
        v26 = 1LL << v18;
        v27 = v22;
        v28 = *(_QWORD *)a2;
        v29 = *(_WORD *)(2LL * (*(_DWORD *)v16 & (unsigned int)(v26 - 1)));
        LOWORD(v93) = v29;
        v30 = v29 & 0xF;
        if ( v28 && (v93 & 0xF) != 0 )
        {
          v27 = (unsigned int *)(a2 + 16);
          v31 = v20;
          if ( (v93 & 0xF) > v28 )
          {
            v30 = v28;
            v31 = (_QWORD *)(a2 + 8);
            v27 = v22;
          }
          if ( v21 < v30 )
          {
            v32 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
            v33 = *v27;
            v29 = v93;
            v17 = 0LL;
            *v20 |= (unsigned __int64)v95 << *v27;
            v21 = v33 + 8 * v32;
            *v27 = v21;
            if ( v21 < v30 )
            {
              v30 = v33 + 8 * v32;
              v25 = v31;
            }
          }
          *v25 >>= v30;
          *(_QWORD *)a2 -= v30;
          v28 = *(_QWORD *)a2;
          *v27 = v21 - v30;
        }
        if ( v29 < 0 )
        {
          do
          {
            v95 = 0;
            v34 = 6;
            if ( v28 )
            {
              if ( v28 < 6 )
                v34 = *(_DWORD *)a2;
              if ( *v27 < v34 )
              {
                v35 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v36 = *v27;
                v29 = v93;
                *v25 |= (unsigned __int64)v95 << *v27;
                v37 = v36 + 8 * v35;
                *v27 = v37;
                if ( v37 < v34 )
                  LOBYTE(v34) = v36 + 8 * v35;
              }
              v17 = v91;
              v28 = *(_QWORD *)a2;
              v38 = *(_DWORD *)v25 & ((1LL << v34) - 1);
              v39 = *(_QWORD *)a2;
            }
            else
            {
              v38 = 0;
              v39 = 0LL;
            }
            v95 = 0;
            v17 += 2 * (v29 & 0xFFFFFFFFFFFFFFF0uLL);
            v91 = v17;
            v29 = *(_WORD *)(v17 + 2LL * v38);
            LOWORD(v93) = v29;
            v40 = v29 & 0xF;
            if ( v39 && (v93 & 0xF) != 0 )
            {
              if ( (v93 & 0xF) > v39 )
                v40 = *(_DWORD *)a2;
              v41 = *v27;
              if ( *v27 < v40 )
              {
                v42 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v29 = v93;
                v17 = v91;
                v41 = *v27 + 8 * v42;
                *v25 |= (unsigned __int64)v95 << *v27;
                *v27 = v41;
                if ( v41 < v40 )
                  v40 = v41;
              }
              *v25 >>= v40;
              *(_QWORD *)a2 -= v40;
              v28 = *(_QWORD *)a2;
              *v27 = v41 - v40;
            }
          }
          while ( v29 < 0 );
          v27 = (unsigned int *)(a2 + 16);
        }
        v43 = (unsigned __int16)v29 >> 4;
        LOWORD(v93) = v43;
        if ( v43 < 0x100u )
        {
          v89 = v94;
          while ( *v89 == v89[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(v89) )
              return 3221226050LL;
          }
          *(_BYTE *)(*v89)++ = v43;
          goto LABEL_52;
        }
        if ( (v43 & 0xF) == 0xF )
        {
          v49 = 12;
          v95 = 0;
          v50 = 0LL;
          if ( v28 )
          {
            if ( v28 < 0xC )
              v49 = *(_DWORD *)a2;
            if ( *v27 < v49 )
            {
              v51 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
              v52 = *v27;
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << *v27;
              v53 = v52 + 8 * v51;
              *v27 = v53;
              if ( v53 < v49 )
                LOBYTE(v49) = v53;
            }
            v28 = *(_QWORD *)a2;
            v54 = *(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v49) - 1);
          }
          else
          {
            v54 = 0LL;
          }
          v55 = *(_WORD *)(2 * v54);
          v44 = v28;
          v95 = 0;
          v56 = v55 & 0xF;
          if ( v28 && (v55 & 0xF) != 0 )
          {
            if ( (v55 & 0xFu) > v28 )
              v56 = *(_DWORD *)a2;
            v57 = *(_DWORD *)(a2 + 16);
            if ( v57 < v56 )
            {
              v58 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
              v59 = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v59;
              v57 = v59 + 8 * v58;
              if ( v57 < v56 )
                v56 = v59 + 8 * v58;
            }
            v60 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 -= v56;
            *(_QWORD *)(a2 + 8) = v60 >> v56;
            *(_DWORD *)(a2 + 16) = v57 - v56;
            goto LABEL_90;
          }
          while ( v55 < 0 )
          {
            v95 = 0;
            v61 = 6;
            if ( v44 )
            {
              if ( v44 < 6 )
                v61 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v61 )
              {
                v62 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v63 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v63;
                v64 = v63 + 8 * v62;
                *(_DWORD *)(a2 + 16) = v64;
                if ( v64 < v61 )
                  LOBYTE(v61) = v63 + 8 * v62;
              }
              v65 = *(_DWORD *)(a2 + 8) & ((1LL << v61) - 1);
            }
            else
            {
              v65 = 0;
            }
            v44 = *(_QWORD *)a2;
            v95 = 0;
            v50 += 2 * (v55 & 0xFFFFFFFFFFFFFFF0uLL);
            v55 = *(_WORD *)(v50 + 2LL * v65);
            v66 = v55 & 0xF;
            if ( v44 && (*(_WORD *)(v50 + 2LL * v65) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v50 + 2LL * v65) & 0xFu) > v44 )
                v66 = v44;
              v67 = *(_DWORD *)(a2 + 16);
              if ( v67 < v66 )
              {
                v68 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v69 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v69;
                v67 = v69 + 8 * v68;
                if ( v67 < v66 )
                  v66 = v67;
              }
              *(_QWORD *)(a2 + 8) >>= v66;
              *(_QWORD *)a2 -= v66;
              *(_DWORD *)(a2 + 16) = v67 - v66;
LABEL_90:
              v44 = *(_QWORD *)a2;
              continue;
            }
          }
          v70 = (unsigned __int16)v55 >> 4;
          v71 = (unsigned __int8)v70;
          if ( (unsigned __int8)v70 <= 0xE8u )
          {
            v79 = ((**a1 >> 5) & 7) + 15;
          }
          else
          {
            v95 = 0;
            v72 = (unsigned __int8)v70 - 232;
            v73 = v71 - 232;
            if ( v44 && v72 )
            {
              if ( v72 > v44 )
                v73 = *(_DWORD *)a2;
              v74 = *(_DWORD *)(a2 + 16);
              if ( v74 < v73 )
              {
                v75 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v76 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v76;
                v74 = v76 + 8 * v75;
                if ( v74 < v73 )
                  v73 = v76 + 8 * v75;
              }
              v77 = *(_QWORD *)(a2 + 8);
              v78 = *(_DWORD *)(a2 + 8) & ((1LL << v73) - 1);
              *(_QWORD *)a2 -= v73;
              v44 = *(_QWORD *)a2;
              *(_QWORD *)(a2 + 8) = v77 >> v73;
              *(_DWORD *)(a2 + 16) = v74 - v73;
            }
            else
            {
              v78 = 0;
              v73 = 0;
            }
            if ( v73 < v72 )
              return 3221226050LL;
            v71 = 1 << v72;
            v79 = v78 + ((**a1 >> 5) & 7) + 246;
          }
          v43 = v93;
          v45 = v71 + v79;
        }
        else
        {
          v44 = v28;
          v45 = (v43 & 0xF) + ((**a1 >> 5) & 7);
        }
        if ( v43 < 0x140u )
        {
          v80 = (v43 - 256) / 16;
          v46 = *((_DWORD *)a1 + v80 + 2);
          if ( !v80 )
            goto LABEL_48;
          if ( v80 < 3 )
          {
            if ( v80 < 2 )
              goto LABEL_47;
            goto LABEL_46;
          }
        }
        else
        {
          if ( v43 >= v90 )
            return 3221226050LL;
          if ( v43 > 0x14Fu )
          {
            v93 = 0;
            v81 = (v43 - 320) / 16;
            v82 = v81;
            v83 = v81;
            if ( v44 && v81 )
            {
              if ( v81 > v44 )
                v83 = *(_DWORD *)a2;
              v84 = *(_DWORD *)(a2 + 16);
              if ( v84 < v83 )
              {
                v85 = Xp10ScatteredReadBytes(a2 + 24, &v93, 4LL);
                v86 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v93 << v86;
                v84 = v86 + 8 * v85;
                if ( v84 < v83 )
                  v83 = v86 + 8 * v85;
              }
              v87 = *(_QWORD *)(a2 + 8);
              v88 = *(_DWORD *)(a2 + 8) & ((1LL << v83) - 1);
              *(_QWORD *)a2 -= v83;
              *(_QWORD *)(a2 + 8) = v87 >> v83;
              *(_DWORD *)(a2 + 16) = v84 - v83;
            }
            else
            {
              v88 = 0;
              v83 = 0;
            }
            if ( v83 < v82 )
              return 3221226050LL;
            v46 = v88 + (1 << v82);
          }
          else
          {
            v46 = 1;
          }
        }
        *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 4);
LABEL_46:
        *((_DWORD *)a1 + 4) = *((_DWORD *)a1 + 3);
LABEL_47:
        v47 = *((_DWORD *)a1 + 2);
        *((_DWORD *)a1 + 2) = v46;
        *((_DWORD *)a1 + 3) = v47;
LABEL_48:
        if ( !v46 )
          return 3221226050LL;
        v48 = v94;
        while ( v45 > v46 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(v48, v46, v46, v44) != v46 )
            return 3221226050LL;
          v45 -= v46;
          v46 *= 2;
        }
        if ( v45 && (unsigned int)Xp10ScatteredCopyFromPrevious(v48, v46, v45, v44) != v45 )
          return 3221226050LL;
LABEL_52:
        v16 = v92;
        v15 = (_QWORD *)(a2 + 8);
      }
    }
  }
  return result;
}
