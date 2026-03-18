/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x1402F97D8
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1402F92F0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x1403C9230 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpMetadataCommit @ 0x1405F8F30 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpLogHeapDecommit @ 0x1404F6484 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapCommit @ 0x1404F6504 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r10
  int v8; // ebp
  int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  char v17; // dl
  unsigned int v18; // ebx
  int v19; // edi
  unsigned int v20; // r11d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned int v23; // r10d
  unsigned int v24; // eax
  int v25; // ebx
  unsigned int v26; // r14d
  int v27; // ecx
  unsigned __int64 v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ebx
  int v32; // edx
  unsigned int v33; // r10d
  unsigned int v34; // r10d
  int v35; // edx
  unsigned int v36; // r14d
  int v37; // edi
  __int64 v38; // r13
  unsigned int v39; // esi
  int v40; // eax
  char v41; // cl
  unsigned int v42; // esi
  unsigned int v43; // edx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r8
  int v47; // eax
  int v48; // r14d
  unsigned __int64 v49; // rbp
  unsigned int v50; // r15d
  __int64 v51; // rbp
  int v52; // ecx
  unsigned __int64 v53; // rbp
  int v54; // r11d
  unsigned int v55; // r14d
  unsigned int v56; // r10d
  unsigned int v57; // esi
  unsigned int v58; // r10d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned int v62; // r10d
  unsigned int v63; // eax
  int v64; // eax
  unsigned int v65; // [rsp+40h] [rbp-68h]
  int v66; // [rsp+44h] [rbp-64h]
  int v67; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v68; // [rsp+50h] [rbp-58h]
  unsigned int v69; // [rsp+58h] [rbp-50h]
  unsigned int v70; // [rsp+B0h] [rbp+8h]
  unsigned int v72; // [rsp+C0h] [rbp+18h]

  v72 = a3;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  v10 = (*(_BYTE *)(a1 + 13) & 7) == 0 ? 0x7FFF : 511;
  v11 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  v12 = v6 - a4;
  v67 = v10;
  v13 = v6 + a4;
  v69 = v11;
  if ( v8 <= 0 )
    v13 = v12;
  v14 = 0;
  v68 = v13;
  while ( 1 )
  {
    v66 = v14;
    if ( v6 >= v13 )
      break;
    v16 = v6 + v11;
    v17 = *(_BYTE *)(a1 + 9);
    v18 = v10 - (v10 & v16) + 1;
    v19 = -1;
    if ( v18 >= v13 - v6 )
      v18 = v13 - v6;
    v20 = 1 << v17;
    v65 = v18;
    v21 = (unsigned __int64)v6 >> v17 << v17;
    v22 = v7 + 32 * ((unsigned __int64)v6 >> v17);
    v23 = v6 & ((1 << v17) - 1);
    v24 = v18 + v23 - 1;
    v25 = 0;
    v26 = (v24 & ((1 << v17) - 1)) + 1;
    v27 = -1;
    v28 = v22 + 32 * ((unsigned __int64)v24 >> v17);
    if ( v23 )
    {
      v29 = *(unsigned __int8 *)(v22 + 25);
      v30 = 1 << v17;
      if ( v22 == v28 )
        v30 = v26;
      if ( v8 <= 0 )
      {
        if ( v29 <= v23 )
          goto LABEL_25;
        v27 = v21 + v23;
        v31 = v23;
        v19 = v29 + v21;
      }
      else
      {
        if ( v29 >= v30 )
          goto LABEL_25;
        v27 = v29 + v21;
        v31 = v30;
        v19 = v21 + v30;
      }
      v25 = v31 - v29;
      if ( v25 && v8 <= 0 )
        *(_BYTE *)(v22 + 25) = v25 + v29;
      goto LABEL_25;
    }
    while ( v22 < v28 )
    {
      v33 = *(unsigned __int8 *)(v22 + 25);
      v32 = 0;
      if ( v8 <= 0 )
      {
        if ( *(_BYTE *)(v22 + 25) )
        {
          v19 = v33 + v21;
          v32 = -v33;
          v64 = v21;
          if ( v27 != -1 )
            v64 = v27;
          v27 = v64;
          goto LABEL_23;
        }
      }
      else if ( v33 < v20 )
      {
        if ( v27 == -1 )
          v27 = v33 + v21;
        v19 = v21 + v20;
        v32 = v20 - v33;
LABEL_23:
        if ( v32 && v8 <= 0 )
          *(_BYTE *)(v22 + 25) = v33 + v32;
      }
      v25 += v32;
LABEL_25:
      v22 += 32LL;
      LODWORD(v21) = v20 + v21;
    }
    if ( v22 == v28 )
    {
      v34 = *(unsigned __int8 *)(v22 + 25);
      v35 = 0;
      if ( v8 <= 0 )
      {
        if ( *(_BYTE *)(v22 + 25) )
        {
          v19 = v34 + v21;
          v35 = -v34;
          if ( v27 != -1 )
            LODWORD(v21) = v27;
          v27 = v21;
          goto LABEL_63;
        }
      }
      else
      {
        if ( v34 >= v26 )
          goto LABEL_33;
        if ( v27 == -1 )
          v27 = v34 + v21;
        v19 = v21 + v26;
        v35 = v26 - v34;
LABEL_63:
        if ( v35 && v8 <= 0 )
          *(_BYTE *)(v22 + 25) = v34 + v35;
      }
LABEL_33:
      v25 += v35;
    }
    v36 = v27;
    if ( !v25 )
      v36 = v6;
    v37 = v19 - v27;
    if ( !v25 )
    {
      v7 = a2;
      goto LABEL_38;
    }
    v38 = a2 & *(_QWORD *)a1;
    v39 = v36 + v69;
    v70 = v36 + v69;
    if ( v25 <= 0 )
    {
      v40 = 0x4000;
    }
    else
    {
      v40 = 4096;
      if ( (a5 & 2) != 0 )
        v40 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, v38, v39, v37, v25, v40, (a5 >> 22) & 2);
    if ( (int)result < 0 )
      return result;
    if ( v25 > 0 )
    {
      v41 = *(_BYTE *)(a1 + 9);
      v42 = 1 << v41;
      v43 = 0;
      v44 = (unsigned __int64)v36 >> v41;
      v45 = v44 << v41;
      v46 = a2 + 32 * v44;
      v47 = (1 << v41) - 1;
      v48 = v47 & v36;
      v49 = (unsigned int)(v37 + v48 - 1);
      v50 = (v47 & v49) + 1;
      v51 = 32 * (v49 >> v41);
      v52 = -1;
      v53 = v46 + v51;
      v54 = -1;
      if ( !v48 )
        goto LABEL_47;
      v62 = *(unsigned __int8 *)(v46 + 25);
      v63 = v42;
      if ( v46 == v53 )
        v63 = v50;
      if ( v62 < v63 )
      {
        v52 = v62 + v45;
        v54 = v45 + v63;
        v43 = v63 - v62;
        if ( v63 != v62 )
          *(_BYTE *)(v46 + 25) = v63;
      }
      while ( 1 )
      {
        v46 += 32LL;
        LODWORD(v45) = v42 + v45;
LABEL_47:
        if ( v46 >= v53 )
          break;
        v55 = *(unsigned __int8 *)(v46 + 25);
        v56 = 0;
        if ( v55 < v42 )
        {
          if ( v52 == -1 )
            v52 = v55 + v45;
          v54 = v45 + v42;
          v56 = v42 - v55;
        }
        if ( v56 )
          *(_BYTE *)(v46 + 25) = v55 + v56;
        v43 += v56;
      }
      if ( v46 == v53 )
      {
        v57 = *(unsigned __int8 *)(v46 + 25);
        v58 = 0;
        if ( v57 < v50 )
        {
          if ( v52 == -1 )
            v52 = v57 + v45;
          v54 = v45 + v50;
          v58 = v50 - v57;
          if ( v50 != v57 )
            *(_BYTE *)(v46 + 25) = v50;
        }
        v43 += v58;
      }
      v39 = v70;
      v8 = a4;
      v6 = v72;
      if ( v43 )
        v37 = v54 - v52;
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v25);
    v7 = a2;
    *(_WORD *)(a2 + 28) = ~(v25 + ~*(_WORD *)(a2 + 28));
    v59 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v59 + 20) & 0x80u) != 0 )
    {
      v60 = v38 + (v39 << 12);
      v61 = (unsigned int)(v37 << 12);
      if ( v25 > 0 )
        RtlpLogHeapCommit(v59, v60, v61, 10LL);
      else
        RtlpLogHeapDecommit(v59, v60, v61);
      v7 = a2;
    }
LABEL_38:
    v6 += v65;
    v11 = v69;
    v14 = v25 + v66;
    v10 = v67;
    v13 = v68;
    v72 = v6;
  }
  if ( a6 )
    *a6 = v14;
  return 0LL;
}
