/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x14035F6F0
 * Callers:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140360140 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLfhVsCommit @ 0x140360A10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x140368600 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x1406028B0 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpLogHeapDecommit @ 0x1404F6564 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapCommit @ 0x1404F65E4 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned int v9; // ebp
  int v10; // r8d
  unsigned int v12; // r12d
  int v13; // r13d
  __int64 result; // rax
  int v15; // ecx
  int v16; // ebx
  char v17; // r8
  unsigned int v18; // ebx
  int v19; // r15d
  unsigned int v20; // r10d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // r14d
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r11
  int v27; // ebx
  bool v28; // zf
  int v29; // ebp
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // edx
  unsigned int v34; // r14d
  int v35; // r15d
  int v36; // eax
  unsigned int v37; // r10d
  char v38; // cl
  unsigned int v39; // edx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  int v43; // r14d
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r13
  int v46; // r11d
  bool v47; // zf
  int v48; // ebp
  unsigned int v49; // r11d
  unsigned int v50; // ecx
  unsigned int v51; // r10d
  unsigned int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // r9d
  int v57; // ecx
  unsigned int v58; // edx
  unsigned int v59; // r8d
  int v60; // ecx
  unsigned int v61; // ebx
  unsigned int v62; // ecx
  unsigned int v63; // eax
  int v64; // [rsp+40h] [rbp-78h]
  unsigned int v65; // [rsp+44h] [rbp-74h]
  unsigned int v66; // [rsp+48h] [rbp-70h]
  unsigned int v67; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v68; // [rsp+54h] [rbp-64h]
  int v69; // [rsp+58h] [rbp-60h]
  __int64 v70; // [rsp+60h] [rbp-58h]
  int v73; // [rsp+D0h] [rbp+18h]
  int v74; // [rsp+D0h] [rbp+18h]
  unsigned int v75; // [rsp+D8h] [rbp+20h]
  int v76; // [rsp+D8h] [rbp+20h]

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = a3 + a4;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v69 = v10;
  v12 = (unsigned int)((v7 - (v7 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v9 = v6 - a4;
  v13 = 0;
  v66 = v9;
  while ( 1 )
  {
    v64 = v13;
    if ( v6 >= v9 )
      break;
    v15 = v10 & (v6 + v12);
    v73 = -1;
    v16 = v10;
    v17 = *(_BYTE *)(v8 + 9);
    v18 = v16 - v15 + 1;
    if ( v18 >= v9 - v6 )
      v18 = v9 - v6;
    v19 = -1;
    v67 = v18;
    v20 = 1 << v17;
    v21 = (unsigned __int64)v6 >> v17 << v17;
    v22 = v7 + 32 * ((unsigned __int64)v6 >> v17);
    v23 = (1 << v17) - 1;
    v24 = v23 & v6;
    v25 = (v23 & v6) + v18 - 1;
    v75 = (v23 & v25) + 1;
    v26 = v22 + 32 * (v25 >> v17);
    v27 = 0;
    if ( (v23 & v6) == 0 )
      goto LABEL_14;
    v58 = *(unsigned __int8 *)(v22 + 25);
    v59 = 1 << v17;
    if ( v22 == v26 )
      v59 = v75;
    if ( a4 <= 0 )
    {
      if ( v58 > v24 )
      {
        v60 = v21 + v24;
        v61 = v24;
        v19 = v58 + v21;
        goto LABEL_84;
      }
    }
    else if ( v58 < v59 )
    {
      v60 = v58 + v21;
      v61 = v59;
      v19 = v21 + v59;
LABEL_84:
      v27 = v61 - v58;
      v73 = v60;
      if ( v27 && a4 <= 0 )
        *(_BYTE *)(v22 + 25) = v58 + v27;
    }
    v22 += 32LL;
    LODWORD(v21) = v20 + v21;
LABEL_14:
    v28 = v22 == v26;
    if ( v22 >= v26 )
      goto LABEL_20;
    v29 = v73;
    do
    {
      v30 = *(unsigned __int8 *)(v22 + 25);
      v31 = 0;
      if ( a4 <= 0 )
      {
        if ( !*(_BYTE *)(v22 + 25) )
          goto LABEL_18;
        v19 = v30 + v21;
        v31 = -v30;
        v57 = v21;
        if ( v29 != -1 )
          v57 = v29;
        v29 = v57;
      }
      else
      {
        if ( v30 >= v20 )
          goto LABEL_18;
        if ( v29 == -1 )
          v29 = v30 + v21;
        v19 = v21 + v20;
        v31 = v20 - v30;
      }
      if ( v31 && a4 <= 0 )
        *(_BYTE *)(v22 + 25) = v30 + v31;
LABEL_18:
      v27 += v31;
      v22 += 32LL;
      LODWORD(v21) = v20 + v21;
      v28 = v22 == v26;
    }
    while ( v22 < v26 );
    v73 = v29;
    v9 = v66;
LABEL_20:
    if ( v28 )
    {
      v32 = *(unsigned __int8 *)(v22 + 25);
      v33 = 0;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v22 + 25) )
        {
          v19 = v32 + v21;
          v33 = -v32;
          if ( v73 != -1 )
            LODWORD(v21) = v73;
          v73 = v21;
          goto LABEL_59;
        }
      }
      else
      {
        if ( v32 >= v75 )
          goto LABEL_23;
        if ( v73 == -1 )
          v73 = v32 + v21;
        v19 = v21 + v75;
        v33 = v75 - v32;
LABEL_59:
        if ( v33 && a4 <= 0 )
          *(_BYTE *)(v22 + 25) = v32 + v33;
      }
LABEL_23:
      v27 += v33;
    }
    v34 = v73;
    if ( !v27 )
      v34 = v6;
    v35 = v19 - v73;
    if ( !v27 )
    {
LABEL_27:
      v8 = a1;
      v7 = a2;
      goto LABEL_28;
    }
    v68 = v34 + v12;
    v70 = a2 & *(_QWORD *)a1;
    if ( v27 <= 0 )
    {
      v36 = 0x4000;
    }
    else
    {
      v36 = 4096;
      if ( (a5 & 2) != 0 )
        v36 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, a2 & *(_QWORD *)a1, v34 + v12, v35, v27, v36, (a5 >> 22) & 2);
    if ( (int)result < 0 )
      return result;
    if ( v27 > 0 )
    {
      v37 = 1 << *(_BYTE *)(a1 + 9);
      v38 = *(_BYTE *)(a1 + 9);
      v39 = 0;
      v40 = (unsigned __int64)v34 >> v38;
      v41 = v40 << v38;
      v42 = a2 + 32 * v40;
      v43 = (v37 - 1) & v34;
      v44 = (unsigned int)(v35 + v43 - 1);
      v65 = ((v37 - 1) & v44) + 1;
      v45 = v42 + 32 * (v44 >> v38);
      v46 = -1;
      v74 = -1;
      v76 = -1;
      if ( v43 )
      {
        v62 = *(unsigned __int8 *)(v42 + 25);
        v63 = 1 << *(_BYTE *)(a1 + 9);
        if ( v42 == v45 )
          v63 = v65;
        if ( v62 < v63 )
        {
          v46 = v62 + v41;
          v74 = v62 + v41;
          v76 = v41 + v63;
          v39 = v63 - v62;
          if ( v63 != v62 )
          {
            v74 = v62 + v41;
            *(_BYTE *)(v42 + 25) = v63;
            v76 = v41 + v63;
          }
        }
        v42 += 32LL;
        LODWORD(v41) = v37 + v41;
      }
      v47 = v42 == v45;
      if ( v42 < v45 )
      {
        v48 = v74;
        do
        {
          v49 = *(unsigned __int8 *)(v42 + 25);
          v50 = 0;
          if ( v49 < v37 )
          {
            if ( v48 == -1 )
              v48 = v49 + v41;
            v76 = v41 + v37;
            v50 = v37 - v49;
          }
          if ( v50 )
            *(_BYTE *)(v42 + 25) = v49 + v50;
          v39 += v50;
          v42 += 32LL;
          LODWORD(v41) = v37 + v41;
          v47 = v42 == v45;
        }
        while ( v42 < v45 );
        v74 = v48;
        v46 = v48;
        v9 = v66;
      }
      if ( v47 )
      {
        v51 = *(unsigned __int8 *)(v42 + 25);
        v52 = 0;
        if ( v51 < v65 )
        {
          v46 = v74;
          if ( v74 == -1 )
            v46 = v51 + v41;
          v56 = v65 + v41;
          v76 = v56;
          v52 = v65 - v51;
          if ( v65 != v51 )
          {
            v76 = v56;
            *(_BYTE *)(v42 + 25) = v65;
          }
        }
        v39 += v52;
      }
      v13 = v64;
      if ( v39 )
        v35 = v76 - v46;
    }
    v8 = a1;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v27);
    v7 = a2;
    *(_WORD *)(a2 + 28) = ~(v27 + ~*(_WORD *)(a2 + 28));
    v53 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v53 + 20) & 0x80u) != 0 )
    {
      v54 = (v68 << 12) + v70;
      v55 = (unsigned int)(v35 << 12);
      if ( v27 <= 0 )
        RtlpLogHeapDecommit(v53, v54, v55);
      else
        RtlpLogHeapCommit(v53, v54, v55, 10LL);
      goto LABEL_27;
    }
LABEL_28:
    v6 += v67;
    v10 = v69;
    v13 += v27;
  }
  if ( a6 )
    *a6 = v13;
  return 0LL;
}
