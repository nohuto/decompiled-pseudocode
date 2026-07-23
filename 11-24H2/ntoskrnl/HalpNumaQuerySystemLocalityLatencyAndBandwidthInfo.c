/*
 * XREFs of HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140555CE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaQueryProximityId @ 0x140555C50 (HalpNumaQueryProximityId.c)
 *     HalpNumaQueryProximityNode @ 0x140555C90 (HalpNumaQueryProximityNode.c)
 *     HalpNumaSystemLocalityInfoFindInitiatorIndex @ 0x14055648C (HalpNumaSystemLocalityInfoFindInitiatorIndex.c)
 *     HalpNumaSystemLocalityInfoFindTargetIndex @ 0x1405564DC (HalpNumaSystemLocalityInfoFindTargetIndex.c)
 *     HalpNumaSystemLocalityInfoIncludeQueryDataType @ 0x140556534 (HalpNumaSystemLocalityInfoIncludeQueryDataType.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char *a6,
        size_t Size,
        unsigned int *a8)
{
  __int64 v8; // r14
  int ProximityNode; // ebx
  unsigned int *v11; // r12
  unsigned __int64 v12; // r10
  unsigned int v13; // r13d
  unsigned int v14; // esi
  unsigned int v15; // r15d
  unsigned int *v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r9
  int v19; // edi
  int TargetIndex; // eax
  int InitiatorIndex; // eax
  char v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  char v26; // r15
  unsigned int *v27; // rdi
  unsigned int i; // r10d
  int v29; // r9d
  unsigned int v30; // r11d
  int v31; // ecx
  unsigned int v32; // r12d
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rdx
  int v38; // ecx
  unsigned int v39; // r9d
  unsigned __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  unsigned int j; // r13d
  unsigned int v45; // r12d
  __int64 v46; // rax
  unsigned int v47; // r15d
  char *v48; // rdx
  int v49; // eax
  __int64 v50; // rbx
  char v51; // cl
  __int64 v52; // r8
  int v53; // r11d
  char *v54; // rcx
  unsigned __int16 v56[2]; // [rsp+20h] [rbp-60h] BYREF
  int v57; // [rsp+24h] [rbp-5Ch] BYREF
  unsigned int v58; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+2Ch] [rbp-54h] BYREF
  int v60; // [rsp+30h] [rbp-50h]
  int v61; // [rsp+38h] [rbp-48h]
  int v62; // [rsp+3Ch] [rbp-44h]
  __int64 v63; // [rsp+40h] [rbp-40h]
  __int64 v64; // [rsp+48h] [rbp-38h]
  __int64 v65; // [rsp+50h] [rbp-30h]
  int v66; // [rsp+58h] [rbp-28h]
  int v67; // [rsp+5Ch] [rbp-24h] BYREF
  unsigned int *v68; // [rsp+60h] [rbp-20h]
  __int64 v69; // [rsp+68h] [rbp-18h]
  char *v70; // [rsp+70h] [rbp-10h]

  v8 = HalpHmaConfig;
  v56[0] = 0;
  v63 = HalpHmaConfig;
  if ( !HalpHmaConfig )
  {
    ProximityNode = -1073741595;
    goto LABEL_98;
  }
  if ( a1 != 1 || !a8 )
  {
    ProximityNode = -1073741811;
    goto LABEL_98;
  }
  v11 = (unsigned int *)a6;
  if ( !a6 && (_DWORD)Size )
    return (unsigned int)-1073741811;
  v12 = 0xFFFFFFFFLL;
  v67 = -1;
  v13 = -1;
  if ( a2 != -1 )
  {
    if ( a2 > 0xFFFF )
    {
LABEL_11:
      ProximityNode = -1073741275;
      goto LABEL_98;
    }
    ProximityNode = HalpNumaQueryProximityId(a2, &v67, 0LL);
    if ( ProximityNode < 0 )
      goto LABEL_98;
    v13 = v67;
    v12 = 0xFFFFFFFFLL;
  }
  v57 = -1;
  v14 = -1;
  if ( a3 != -1 )
  {
    if ( a3 > 0xFFFF )
      goto LABEL_11;
    ProximityNode = HalpNumaQueryProximityId(a3, &v57, 0LL);
    if ( ProximityNode < 0 )
      goto LABEL_98;
    v14 = v57;
    v12 = 0xFFFFFFFFLL;
  }
  v15 = 0;
  v16 = (unsigned int *)(v8 + *(unsigned int *)(v8 + 16));
  v17 = 0;
  v18 = v63;
  if ( *(_DWORD *)(v63 + 4) )
  {
    do
    {
      if ( (a4 == 4 || a4 == v16[1]) && (unsigned __int8)HalpNumaSystemLocalityInfoIncludeQueryDataType(v16, a5) )
      {
        v19 = 0;
        if ( v13 == (_DWORD)v12 )
        {
          if ( v14 == (_DWORD)v12 )
          {
            v19 = v16[3] * v16[4];
          }
          else
          {
            TargetIndex = HalpNumaSystemLocalityInfoFindTargetIndex(v16, v14, 0LL);
            v18 = v63;
            v12 = 0xFFFFFFFFLL;
            if ( TargetIndex >= 0 )
              v19 = v16[3];
          }
        }
        else if ( v14 == (_DWORD)v12 )
        {
          InitiatorIndex = HalpNumaSystemLocalityInfoFindInitiatorIndex(v16, v13);
          v18 = v63;
          v12 = 0xFFFFFFFFLL;
          if ( InitiatorIndex >= 0 )
            v19 = v16[4];
        }
        else
        {
          if ( (int)HalpNumaSystemLocalityInfoFindTargetIndex(v16, v14, 0LL) >= 0 )
            v19 = (int)HalpNumaSystemLocalityInfoFindInitiatorIndex(v16, v13) >= 0;
          v18 = v63;
          v12 = 0xFFFFFFFFLL;
        }
        v22 = *((_BYTE *)v16 + 9);
        if ( !v22 || v22 == 3 )
          v19 *= 2;
        v15 += v19;
      }
      ++v17;
      v16 = (unsigned int *)((char *)v16 + *v16);
    }
    while ( v17 < *(_DWORD *)(v18 + 4) );
    v11 = (unsigned int *)a6;
  }
  v23 = 32LL * v15;
  if ( v23 > v12 || (v24 = v23 + 8, (unsigned int)v23 >= 0xFFFFFFF8) )
  {
LABEL_97:
    ProximityNode = -1073741675;
    goto LABEL_98;
  }
  ProximityNode = 0;
  if ( (unsigned int)Size < v24 )
  {
    ProximityNode = -1073741789;
    *a8 = v24;
    goto LABEL_98;
  }
  memset_0(v11, 0, (unsigned int)Size);
  v25 = v63;
  *v11 = v15;
  v26 = 0;
  v60 = 0;
  v27 = (unsigned int *)(HalpHmaConfig + *(unsigned int *)(v25 + 16));
  for ( i = 0; ; ++i )
  {
    v57 = i;
    if ( i >= *(_DWORD *)(v25 + 4) )
    {
      *a8 = v24;
      return (unsigned int)ProximityNode;
    }
    if ( a4 != 4 && a4 != v27[1] || !(unsigned __int8)HalpNumaSystemLocalityInfoIncludeQueryDataType(v27, a5) )
      goto LABEL_93;
    v31 = *((unsigned __int8 *)v27 + 9);
    v61 = v29;
    v32 = 1;
    v62 = v29;
    v66 = 1;
    if ( !v31 )
    {
      v61 = 0;
      v62 = 2;
      goto LABEL_60;
    }
    v33 = v31 - 1;
    if ( !v33 )
    {
      v61 = 0;
      goto LABEL_61;
    }
    v34 = v33 - 1;
    if ( !v34 )
    {
      v61 = 2;
      goto LABEL_61;
    }
    v35 = v34 - 1;
    if ( !v35 )
    {
      v61 = 1;
      v62 = 3;
LABEL_60:
      v32 = 2;
      v66 = 2;
      goto LABEL_61;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( v36 != 1 )
      {
        ProximityNode = -1073741216;
        goto LABEL_98;
      }
      v61 = 3;
    }
    else
    {
      v61 = 1;
    }
LABEL_61:
    v37 = v27[3];
    v65 = v37;
    v38 = 4 * v37;
    v68 = &v27[v37 + 8];
    if ( (unsigned __int64)(4 * v37) > 0xFFFFFFFF )
      goto LABEL_97;
    v39 = v27[4];
    v64 = v39;
    v40 = 4LL * v39;
    if ( v40 > 0xFFFFFFFF || (int)v40 + v38 < (unsigned int)v40 )
      goto LABEL_97;
    ProximityNode = 0;
    v58 = 0;
    v59 = 0;
    v70 = (char *)v27 + (unsigned int)(v40 + v38) + 32;
    if ( v13 == -1 )
    {
      if ( v14 == -1 )
        goto LABEL_80;
      v41 = HalpNumaSystemLocalityInfoFindTargetIndex(v27, v14, &v59);
      LODWORD(v37) = v65;
      if ( v41 < 0 )
        goto LABEL_77;
      v39 = v59 + 1;
      v64 = v59 + 1;
      goto LABEL_68;
    }
    if ( v14 != -1 )
      break;
    v42 = HalpNumaSystemLocalityInfoFindTargetIndex(v27, v13, &v58);
    v39 = v64;
    if ( v42 < 0 )
    {
      LODWORD(v37) = v65;
      goto LABEL_78;
    }
    LODWORD(v37) = v58 + 1;
    v65 = v58 + 1;
LABEL_68:
    v26 = 1;
LABEL_78:
    if ( v26 )
      goto LABEL_79;
LABEL_92:
    i = v57;
LABEL_93:
    v13 = v67;
    v27 = (unsigned int *)((char *)v27 + *v27);
    v25 = v63;
  }
  if ( (int)HalpNumaSystemLocalityInfoFindInitiatorIndex(v27, v13) < 0
    || (int)HalpNumaSystemLocalityInfoFindTargetIndex(v43, v14, &v59) < 0 )
  {
    LODWORD(v37) = v65;
LABEL_77:
    v39 = v64;
    goto LABEL_78;
  }
  LODWORD(v37) = v58 + 1;
  v39 = v59 + 1;
  v65 = v58 + 1;
  v64 = v59 + 1;
LABEL_79:
  v30 = v60;
LABEL_80:
  for ( j = 0; ; ++j )
  {
    if ( j >= v32 )
    {
      v26 = 0;
      goto LABEL_92;
    }
    v45 = v58;
    v46 = j;
LABEL_83:
    if ( v45 < (unsigned int)v37 )
      break;
    v32 = v66;
  }
  v47 = v59;
  v48 = a6;
  while ( 1 )
  {
    if ( v47 >= v39 )
    {
      LODWORD(v37) = v65;
      ++v45;
      goto LABEL_83;
    }
    v49 = *(&v61 + v46);
    v50 = 32LL * v30;
    v69 = v50;
    *(_DWORD *)&v48[v50 + 20] = v49;
    v51 = v48[v50 + 24] ^ (*((_BYTE *)v27 + 8) ^ v48[v50 + 24]) & 1;
    v48[v50 + 24] = v51;
    v48[v50 + 24] = v51 ^ (*((_BYTE *)v27 + 8) ^ v51) & 2;
    v48[v50 + 25] = *((_BYTE *)v27 + 10);
    *(_DWORD *)&v48[v50 + 16] = v27[1];
    if ( (int)HalpNumaQueryProximityNode(v27[v45 + 8], v56) < 0 )
      break;
    *(_DWORD *)&a6[v50 + 8] = v56[0];
    ProximityNode = HalpNumaQueryProximityNode(v68[v47], v56);
    if ( ProximityNode < 0 )
      break;
    v48 = a6;
    v52 = v69;
    v53 = v60;
    v54 = v70;
    v39 = v64;
    *(_DWORD *)&a6[v69 + 12] = v56[0];
    v46 = j;
    *(_QWORD *)&a6[v52 + 32] = *((_QWORD *)v27 + 3) * *(unsigned __int16 *)&v54[2 * v47 + 2 * v27[4] * v45];
    v30 = v53 + 1;
    v60 = v30;
    ++v47;
  }
  ProximityNode = -1072431089;
LABEL_98:
  if ( a6 )
    memset_0(a6, 0, (unsigned int)Size);
  return (unsigned int)ProximityNode;
}
