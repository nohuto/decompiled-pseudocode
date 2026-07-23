/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x14078A0A8
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x140788080 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x14078BAB4 (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ScatteredCopyFromPrevious @ 0x14078C854 (Xp10ScatteredCopyFromPrevious.c)
 *     Xp10ScatteredNextBuffer @ 0x14078C8AC (Xp10ScatteredNextBuffer.c)
 *     Xp10ScatteredReadBytes @ 0x14078C900 (Xp10ScatteredReadBytes.c)
 */

unsigned __int64 __fastcall Xp10ExecuteHuffmanDecode(__int16 **a1, __int64 a2, _QWORD *a3)
{
  __int16 *v3; // rax
  __int16 **v4; // r12
  __int16 v6; // r9
  char v7; // cl
  int v8; // ecx
  int v9; // r9d
  int v10; // esi
  unsigned int v11; // edi
  unsigned __int64 result; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  _QWORD *v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // edi
  unsigned int *v20; // r13
  _QWORD *v21; // r15
  unsigned int v22; // edx
  unsigned int *v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned int *v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int16 v32; // r10
  unsigned int v33; // esi
  _QWORD *v34; // r13
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // r12
  unsigned int v38; // esi
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned __int64 v43; // r8
  unsigned int v44; // esi
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int16 v48; // r10
  __int64 v49; // rdx
  unsigned int v50; // esi
  __int64 v51; // r14
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int16 v56; // si
  unsigned __int64 v57; // r9
  unsigned int v58; // edi
  unsigned int v59; // edx
  int v60; // eax
  int v61; // ecx
  unsigned __int64 v62; // rax
  unsigned int v63; // edi
  int v64; // eax
  int v65; // ecx
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned __int64 v68; // rcx
  unsigned int v69; // edi
  unsigned int v70; // eax
  int v71; // eax
  int v72; // ecx
  __int16 v73; // si
  int v74; // edx
  unsigned int v75; // esi
  unsigned int v76; // edi
  unsigned int v77; // edx
  int v78; // eax
  int v79; // ecx
  unsigned __int64 v80; // rax
  int v81; // r10d
  int v82; // esi
  unsigned int v83; // esi
  unsigned int v84; // eax
  unsigned int v85; // edi
  unsigned int v86; // eax
  unsigned int v87; // r14d
  unsigned int v88; // edi
  unsigned int v89; // edx
  int v90; // eax
  int v91; // ecx
  unsigned __int64 v92; // rax
  int v93; // r8d
  int v94; // eax
  unsigned int v95; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v96[12]; // [rsp+44h] [rbp-2Ch]
  _QWORD *v97; // [rsp+50h] [rbp-20h]
  __int64 v98; // [rsp+58h] [rbp-18h]
  __int64 v99; // [rsp+60h] [rbp-10h]
  unsigned int v102; // [rsp+C8h] [rbp+58h] BYREF

  v3 = *a1;
  v4 = a1;
  *(_QWORD *)&v96[4] = 0LL;
  v98 = 0LL;
  v6 = *v3;
  v7 = *v3;
  v102 = 0;
  v8 = v7 & 0x1F;
  v9 = (unsigned __int8)v6 >> 5;
  LODWORD(v3) = (1 << v8) - v9 - 246;
  _BitScanReverse((unsigned int *)&v10, (unsigned int)v3);
  v11 = (unsigned int)v3 & ((1 << v8) - v9 - 247);
  *(_QWORD *)v96 = (unsigned int)(16 * (v8 + 20));
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, 16 * (v8 + 20), (_DWORD)a3, v9, a2, (__int64)(v4 + 587));
  if ( (result & 0x80000000) == 0LL )
  {
    v15 = v10 + 1;
    if ( !v11 )
      v15 = v10;
    result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, v15 + 232, v13, v14, a2, (__int64)(v4 + 2635));
    if ( (result & 0x80000000) == 0LL )
    {
      v16 = (_QWORD *)(a2 + 8);
      v17 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        result = *(_QWORD *)a2;
        v97 = v17;
        if ( !result )
          return result;
        v18 = v98;
        v19 = 12;
        v99 = v98;
        v102 = 0;
        if ( result < 0xC )
        {
          v19 = result;
          v97 = v16;
          v17 = v16;
        }
        v20 = (unsigned int *)(a2 + 16);
        v21 = v17;
        v22 = *(_DWORD *)(a2 + 16);
        v23 = (unsigned int *)(a2 + 16);
        if ( v22 < v19 )
        {
          v24 = Xp10ScatteredReadBytes(a2 + 24, &v102, 4LL);
          v25 = *v20;
          v23 = (unsigned int *)(a2 + 16);
          *v17 |= (unsigned __int64)v102 << *v20;
          v22 = v25 + 8 * v24;
          *v20 = v22;
          if ( v22 < v19 )
          {
            LOBYTE(v19) = v25 + 8 * v24;
            v23 = (unsigned int *)(a2 + 16);
            v21 = (_QWORD *)(a2 + 8);
          }
        }
        v26 = *(_QWORD *)a2;
        v95 = 0;
        v27 = 1LL << v19;
        v28 = v23;
        v29 = v26;
        v30 = *(_DWORD *)v17 & (unsigned int)(v27 - 1);
        v31 = v21;
        v32 = *(_WORD *)(v18 + 2 * v30);
        LOWORD(v102) = v32;
        v33 = v32 & 0xF;
        if ( v26 && (v32 & 0xF) != 0 )
        {
          v28 = (unsigned int *)(a2 + 16);
          v34 = v21;
          if ( (v32 & 0xFu) > v26 )
          {
            v33 = v26;
            v34 = (_QWORD *)(a2 + 8);
            v28 = v23;
          }
          if ( v22 < v33 )
          {
            v35 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
            v36 = *v28;
            v32 = v102;
            *v21 |= (unsigned __int64)v95 << *v28;
            v22 = v36 + 8 * v35;
            *v28 = v22;
            if ( v22 < v33 )
            {
              v33 = v36 + 8 * v35;
              v31 = v34;
            }
          }
          *v31 >>= v33;
          *(_QWORD *)a2 -= v33;
          v29 = *(_QWORD *)a2;
          *v28 = v22 - v33;
        }
        if ( v32 < 0 )
        {
          v37 = v99;
          do
          {
            v95 = 0;
            v38 = 6;
            if ( v29 )
            {
              if ( v29 < 6 )
                v38 = *(_DWORD *)a2;
              if ( *v28 < v38 )
              {
                v39 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v40 = *v28;
                v32 = v102;
                *v31 |= (unsigned __int64)v95 << *v28;
                v41 = v40 + 8 * v39;
                *v28 = v41;
                if ( v41 < v38 )
                  LOBYTE(v38) = v40 + 8 * v39;
              }
              v29 = *(_QWORD *)a2;
              v42 = *(_DWORD *)v31 & ((1LL << v38) - 1);
              v43 = *(_QWORD *)a2;
            }
            else
            {
              v42 = 0;
              v43 = 0LL;
            }
            v95 = 0;
            v37 += 2 * (v32 & 0xFFFFFFFFFFFFFFF0uLL);
            v32 = *(_WORD *)(v37 + 2LL * v42);
            LOWORD(v102) = v32;
            v44 = v32 & 0xF;
            if ( v43 && (v102 & 0xF) != 0 )
            {
              if ( (v102 & 0xF) > v43 )
                v44 = *(_DWORD *)a2;
              v45 = *v28;
              if ( *v28 < v44 )
              {
                v46 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v47 = *v28;
                v32 = v102;
                *v31 |= (unsigned __int64)v95 << *v28;
                v45 = v47 + 8 * v46;
                *v28 = v45;
                if ( v45 < v44 )
                  v44 = v45;
              }
              *v31 >>= v44;
              *(_QWORD *)a2 -= v44;
              v29 = *(_QWORD *)a2;
              *v28 = v45 - v44;
            }
          }
          while ( v32 < 0 );
          v4 = a1;
          v28 = (unsigned int *)(a2 + 16);
        }
        v48 = (unsigned __int16)v32 >> 4;
        LOWORD(v102) = v48;
        if ( v48 < 0x100u )
        {
          while ( *a3 == a3[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(a3) )
              return 3221226050LL;
          }
          *(_BYTE *)(*a3)++ = v48;
          goto LABEL_45;
        }
        if ( (v48 & 0xF) == 0xF )
        {
          v49 = *(_QWORD *)&v96[4];
          v50 = 12;
          v95 = 0;
          v51 = *(_QWORD *)&v96[4];
          if ( v29 )
          {
            if ( v29 < 0xC )
              v50 = *(_DWORD *)a2;
            if ( *v28 < v50 )
            {
              v52 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
              v53 = *v28;
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << *v28;
              v49 = *(_QWORD *)&v96[4];
              v54 = v53 + 8 * v52;
              *v28 = v54;
              if ( v54 < v50 )
                LOBYTE(v50) = v54;
            }
            v29 = *(_QWORD *)a2;
            v55 = *(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v50) - 1);
          }
          else
          {
            v55 = 0LL;
          }
          v56 = *(_WORD *)(v49 + 2 * v55);
          v57 = v29;
          v95 = 0;
          v58 = v56 & 0xF;
          if ( v29 && (v56 & 0xF) != 0 )
          {
            if ( (v56 & 0xFu) > v29 )
              v58 = *(_DWORD *)a2;
            v59 = *(_DWORD *)(a2 + 16);
            if ( v59 < v58 )
            {
              v60 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
              v61 = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v61;
              v59 = v61 + 8 * v60;
              if ( v59 < v58 )
                v58 = v61 + 8 * v60;
            }
            v62 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 -= v58;
            *(_QWORD *)(a2 + 8) = v62 >> v58;
            *(_DWORD *)(a2 + 16) = v59 - v58;
            goto LABEL_79;
          }
          while ( v56 < 0 )
          {
            v95 = 0;
            v63 = 6;
            if ( v57 )
            {
              if ( v57 < 6 )
                v63 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v63 )
              {
                v64 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v65 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v65;
                v66 = v65 + 8 * v64;
                *(_DWORD *)(a2 + 16) = v66;
                if ( v66 < v63 )
                  LOBYTE(v63) = v65 + 8 * v64;
              }
              v67 = *(_DWORD *)(a2 + 8) & ((1LL << v63) - 1);
            }
            else
            {
              v67 = 0;
            }
            v68 = *(_QWORD *)a2;
            v57 = v68;
            v95 = 0;
            v51 += 2 * (v56 & 0xFFFFFFFFFFFFFFF0uLL);
            v56 = *(_WORD *)(v51 + 2LL * v67);
            v69 = v56 & 0xF;
            if ( v68 && (*(_WORD *)(v51 + 2LL * v67) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v51 + 2LL * v67) & 0xFu) > v68 )
                v69 = v68;
              v70 = *(_DWORD *)(a2 + 16);
              if ( v70 < v69 )
              {
                v71 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v72 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v72;
                v70 = v72 + 8 * v71;
                if ( v70 < v69 )
                  v69 = v70;
              }
              *(_QWORD *)(a2 + 8) >>= v69;
              *(_QWORD *)a2 -= v69;
              *(_DWORD *)(a2 + 16) = v70 - v69;
LABEL_79:
              v57 = *(_QWORD *)a2;
              continue;
            }
          }
          v73 = (unsigned __int16)v56 >> 4;
          v74 = (unsigned __int8)v73;
          if ( (unsigned __int8)v73 <= 0xE8u )
          {
            v82 = (((unsigned __int16)**v4 >> 5) & 7) + 15;
          }
          else
          {
            v95 = 0;
            v75 = (unsigned __int8)v73 - 232;
            v76 = v74 - 232;
            if ( v57 && v75 )
            {
              if ( v75 > v57 )
                v76 = *(_DWORD *)a2;
              v77 = *(_DWORD *)(a2 + 16);
              if ( v77 < v76 )
              {
                v78 = Xp10ScatteredReadBytes(a2 + 24, &v95, 4LL);
                v79 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v95 << v79;
                v77 = v79 + 8 * v78;
                if ( v77 < v76 )
                  v76 = v79 + 8 * v78;
              }
              v80 = *(_QWORD *)(a2 + 8);
              v81 = *(_DWORD *)(a2 + 8) & ((1LL << v76) - 1);
              *(_QWORD *)a2 -= v76;
              v57 = *(_QWORD *)a2;
              *(_QWORD *)(a2 + 8) = v80 >> v76;
              *(_DWORD *)(a2 + 16) = v77 - v76;
            }
            else
            {
              v81 = 0;
              v76 = 0;
            }
            if ( v76 < v75 )
              return 3221226050LL;
            v74 = 1 << v75;
            v82 = v81 + (((unsigned __int16)**v4 >> 5) & 7) + 246;
          }
          v48 = v102;
          v83 = v74 + v82;
        }
        else
        {
          v57 = v29;
          v83 = (v48 & 0xF) + (((unsigned __int16)**v4 >> 5) & 7);
        }
        if ( v48 >= 0x140u )
          break;
        v84 = (v48 - 256) / 16;
        v85 = *((_DWORD *)v4 + v84 + 2);
        if ( v84 )
        {
          if ( v84 < 3 )
          {
            if ( v84 >= 2 )
LABEL_116:
              *((_DWORD *)v4 + 4) = *((_DWORD *)v4 + 3);
            v94 = *((_DWORD *)v4 + 2);
            *((_DWORD *)v4 + 2) = v85;
            *((_DWORD *)v4 + 3) = v94;
            goto LABEL_118;
          }
LABEL_115:
          *((_DWORD *)v4 + 5) = *((_DWORD *)v4 + 4);
          goto LABEL_116;
        }
LABEL_118:
        if ( !v85 )
          return 3221226050LL;
        while ( v83 > v85 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v85, v85, v57) != v85 )
            return 3221226050LL;
          v83 -= v85;
          v85 *= 2;
        }
        if ( v83 && (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v85, v83, v57) != v83 )
          return 3221226050LL;
LABEL_45:
        v17 = v97;
        v16 = (_QWORD *)(a2 + 8);
      }
      if ( (unsigned int)v48 >= *(_DWORD *)v96 )
        return 3221226050LL;
      if ( v48 <= 0x14Fu )
      {
        v85 = 1;
      }
      else
      {
        v102 = 0;
        v86 = (v48 - 320) / 16;
        v87 = v86;
        v88 = v86;
        if ( v57 && v86 )
        {
          if ( v86 > v57 )
            v88 = *(_DWORD *)a2;
          v89 = *(_DWORD *)(a2 + 16);
          if ( v89 < v88 )
          {
            v90 = Xp10ScatteredReadBytes(a2 + 24, &v102, 4LL);
            v91 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v102 << v91;
            v89 = v91 + 8 * v90;
            if ( v89 < v88 )
              v88 = v91 + 8 * v90;
          }
          v92 = *(_QWORD *)(a2 + 8);
          v93 = *(_DWORD *)(a2 + 8) & ((1LL << v88) - 1);
          *(_QWORD *)a2 -= v88;
          *(_QWORD *)(a2 + 8) = v92 >> v88;
          *(_DWORD *)(a2 + 16) = v89 - v88;
        }
        else
        {
          v93 = 0;
          v88 = 0;
        }
        if ( v88 < v87 )
          return 3221226050LL;
        v85 = v93 + (1 << v87);
      }
      goto LABEL_115;
    }
  }
  return result;
}
