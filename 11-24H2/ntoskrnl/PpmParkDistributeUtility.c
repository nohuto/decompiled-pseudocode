/*
 * XREFs of PpmParkDistributeUtility @ 0x140417110
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x1404E3F40 (PpmHeteroDistributeUtility.c)
 *     PpmParkDistributeAllUtility @ 0x1404E5B80 (PpmParkDistributeAllUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int64 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int8 v9; // bp
  char v10; // r15
  char v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // r9d
  unsigned __int16 v16; // r10
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // ecx
  int v22; // edx
  unsigned __int16 v23; // r12
  unsigned __int64 v24; // r14
  int v25; // edi
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdx
  _DWORD *Prcb; // rax
  unsigned int v29; // edx
  int v30; // eax
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // bp
  unsigned int v34; // edi
  __int64 result; // rax
  unsigned int v36; // r12d
  unsigned __int16 v37; // si
  unsigned __int64 v38; // r8
  int v39; // r10d
  unsigned int v40; // ecx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r9d
  unsigned int v45; // r11d
  unsigned int v46; // edx
  unsigned __int16 v47; // r14
  unsigned __int16 v48; // r10
  int v49; // r11d
  int v50; // r9d
  int v51; // ebp
  unsigned int v52; // ecx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // r8d
  unsigned __int16 v57; // r14
  int v58; // esi
  unsigned __int64 v59; // r15
  unsigned int v60; // ecx
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned __int8 v65; // cl
  unsigned int v66; // eax
  unsigned __int64 v67; // r15
  unsigned __int16 v68; // di
  int v69; // esi
  unsigned int v70; // ecx
  unsigned __int64 v71; // rdx
  unsigned int v72; // edx
  unsigned __int64 v73; // rbx
  unsigned int v74; // ecx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // [rsp+28h] [rbp-50h]
  unsigned __int64 v77; // [rsp+80h] [rbp+8h]
  char v80; // [rsp+98h] [rbp+20h]
  int v81; // [rsp+A8h] [rbp+30h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = a2 ^ a1;
  v13 = 0LL;
  v14 = a2 ^ a1;
  v81 = a3;
  v15 = a3;
  v77 = a2 ^ a1;
  v16 = a3;
LABEL_2:
  v17 = v15 + 1;
  while ( 1 )
  {
    if ( v12 )
    {
      _BitScanForward64(&v18, v12);
      v12 &= ~(1LL << v18);
      v19 = *((unsigned int *)qword_140F22998 + 64 * v15 + (unsigned int)(unsigned __int8)v18);
      if ( (unsigned int)v19 >= (unsigned int)KeNumberProcessors_0 )
      {
        v20 = 0LL;
      }
      else
      {
        _mm_lfence();
        v20 = KiProcessorBlock[v19];
      }
      if ( *(_BYTE *)(v20 + 35336) )
      {
        ++v11;
        v13 |= *(_QWORD *)(v20 + 200);
      }
      else
      {
        ++v10;
      }
      v21 = *(_DWORD *)(v20 + 35288);
      v22 = *(_DWORD *)(v20 + 35312);
      if ( v22 )
        v21 = (v22 * v21) >> 16;
      a6 += v21;
      ++v9;
      goto LABEL_2;
    }
    v15 = ++v16;
    if ( v16 >= v17 )
      break;
    v12 = *(_QWORD *)(8LL * v16 + 8);
  }
  v23 = a3;
  v24 = a2;
  v76 = v13;
  v25 = v81;
  v80 = v11;
LABEL_15:
  v26 = v25 + 1;
  while ( 1 )
  {
    if ( v24 )
    {
      _BitScanForward64(&v27, v24);
      v24 &= ~(1LL << v27);
      Prcb = (_DWORD *)KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v25 + (unsigned int)(unsigned __int8)v27));
      v29 = Prcb[8822] - Prcb[8823];
      v30 = Prcb[8828];
      if ( v30 )
        v29 = (v30 * v29) >> 16;
      a6 += v29;
      goto LABEL_15;
    }
    v25 = ++v23;
    if ( v23 >= v26 )
      break;
    v24 = *(_QWORD *)(8LL * v23 + 8);
  }
  v31 = v9;
  v32 = a4;
  if ( v9 <= 1u )
    v31 = 1;
  if ( a4 >= v31 )
    v32 = v31;
  v33 = v32;
  if ( v32 <= 1u )
    v33 = 1;
  v34 = a6 / v31;
  result = a6 / v33;
  v36 = a6 / v33;
  if ( v10 && v80 )
  {
    v57 = a3;
    v58 = v81;
    v59 = v76;
    while ( 1 )
    {
      v60 = v58 + 1;
      while ( !v59 )
      {
        v58 = ++v57;
        if ( v57 >= v60 )
          goto LABEL_30;
        result = v57;
        v59 = *(_QWORD *)(8LL * v57 + 8);
      }
      _BitScanForward64(&v61, v59);
      v59 &= ~(1LL << v61);
      v62 = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v58 + (unsigned int)(unsigned __int8)v61));
      v14 ^= *(_QWORD *)(v62 + 200);
      v63 = *(_DWORD *)(v62 + 35312);
      if ( v63 )
        v64 = (v36 << 16) / v63;
      else
        v64 = v36;
      if ( v64 <= *(_DWORD *)(v62 + 35288) )
      {
        if ( a5 )
        {
          v66 = *(_DWORD *)(v62 + 35292);
          if ( v66 <= v64 )
            v66 = v64;
          *(_DWORD *)(v62 + 35288) = v66;
        }
      }
      else
      {
        *(_DWORD *)(v62 + 35288) = v64;
      }
      v65 = v33 - 1;
      result = v33;
      if ( !v33 )
        v65 = 0;
      v33 = v65;
    }
  }
LABEL_30:
  v37 = a3;
  v38 = v14;
  v39 = v81;
LABEL_31:
  v40 = v39 + 1;
  while ( 1 )
  {
    if ( v38 )
    {
      _BitScanForward64(&v41, v38);
      v38 &= ~(1LL << v41);
      v42 = *((unsigned int *)qword_140F22998 + 64 * v39 + (unsigned int)(unsigned __int8)v41);
      if ( (unsigned int)v42 >= (unsigned int)KeNumberProcessors_0 )
      {
        v43 = 0LL;
      }
      else
      {
        _mm_lfence();
        v43 = KiProcessorBlock[v42];
      }
      v44 = *(_DWORD *)(v43 + 35312);
      v45 = *(_DWORD *)(v43 + 35288);
      if ( v44 )
        result = (v45 * v44) >> 16;
      else
        result = v45;
      if ( v34 <= (unsigned int)result )
      {
        v14 ^= *(_QWORD *)(v43 + 200);
        if ( v44 )
        {
          result = (v36 << 16) / v44;
          v46 = (v36 << 16) / v44;
        }
        else
        {
          v46 = v36;
        }
        if ( v46 <= v45 )
        {
          if ( a5 )
          {
            result = *(unsigned int *)(v43 + 35292);
            if ( (unsigned int)result > v46 )
              v46 = *(_DWORD *)(v43 + 35292);
            *(_DWORD *)(v43 + 35288) = v46;
          }
        }
        else
        {
          *(_DWORD *)(v43 + 35288) = v46;
        }
      }
      goto LABEL_31;
    }
    v39 = ++v37;
    if ( v37 >= v40 )
      break;
    result = v37;
    v38 = *(_QWORD *)(8LL * v37 + 8);
  }
  v47 = a3;
  v48 = a3;
  v49 = a3;
  v50 = a3;
  v51 = 0;
LABEL_50:
  v52 = v50 + 1;
  while ( 1 )
  {
    if ( v14 )
    {
      _BitScanForward64(&v53, v14);
      v14 &= ~(1LL << v53);
      v54 = *((unsigned int *)qword_140F22998 + 64 * v50 + (unsigned int)(unsigned __int8)v53);
      if ( (unsigned int)v54 >= (unsigned int)KeNumberProcessors_0 )
      {
        v55 = 0LL;
      }
      else
      {
        _mm_lfence();
        v55 = KiProcessorBlock[v54];
      }
      v56 = *(_DWORD *)(v55 + 35312);
      result = v34;
      if ( v56 )
        result = (v34 << 16) / v56;
      *(_DWORD *)(v55 + 35288) = result;
      goto LABEL_50;
    }
    v50 = ++v48;
    if ( v48 >= v52 )
      break;
    result = v48;
    v14 = *(_QWORD *)(8LL * v48 + 8);
  }
  if ( a7 )
  {
    v67 = v77;
    v68 = a3;
    v69 = a3;
LABEL_81:
    v70 = v69 + 1;
    while ( 1 )
    {
      if ( v67 )
      {
        _BitScanForward64(&v71, v67);
        v67 &= ~(1LL << v71);
        result = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v69 + (unsigned int)(unsigned __int8)v71));
        v72 = *(_DWORD *)(result + 35288);
        if ( v72 > 0x2710 )
        {
          result = PpmHeteroUtilityToNormalizedUtility(result + 35248, v72 - 10000);
          v51 += result;
        }
        goto LABEL_81;
      }
      v69 = ++v68;
      if ( v68 >= v70 )
        break;
      result = v68;
      v67 = *(_QWORD *)(8LL * v68 + 8);
    }
    *a7 = v51;
    v49 = a3;
  }
  if ( a5 )
  {
    v73 = a2;
    while ( 1 )
    {
      v74 = v49 + 1;
      while ( !v73 )
      {
        v49 = ++v47;
        if ( v47 >= v74 )
          return result;
        result = v47;
        v73 = *(_QWORD *)(8LL * v47 + 8);
      }
      _BitScanForward64(&v75, v73);
      v73 &= ~(1LL << v75);
      result = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v49 + (unsigned int)(unsigned __int8)v75));
      v49 = v47;
      *(_DWORD *)(result + 35288) = *(_DWORD *)(result + 35292);
    }
  }
  return result;
}
