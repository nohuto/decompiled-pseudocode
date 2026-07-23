/*
 * XREFs of EtwpValidatePayloadFilter @ 0x1407B3F5C
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x1407B3D1C (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int16 *a2, unsigned int a3)
{
  __int16 v5; // dx
  int v6; // edx
  int v7; // r13d
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // eax
  int v11; // r14d
  unsigned __int64 v12; // rdi
  __int64 v13; // r11
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rbx
  int v17; // eax
  int v18; // r15d
  unsigned int v19; // ebp
  int v20; // eax
  unsigned int v21; // r12d
  int v22; // eax
  unsigned int v23; // esi
  int v24; // ecx
  unsigned __int16 *v25; // r15
  int v26; // r8d
  unsigned int v27; // ebp
  __int64 v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // r12
  _WORD *v31; // r11
  unsigned int v32; // ebx
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int i; // ecx
  unsigned int v37; // r13d
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  _WORD *v41; // rcx
  unsigned __int64 v42; // rdx
  _WORD *v43; // rcx
  _BYTE *v44; // rax
  unsigned __int64 j; // rdx
  int v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+4h] [rbp-94h]
  int v49; // [rsp+Ch] [rbp-8Ch]
  unsigned int v50; // [rsp+14h] [rbp-84h]
  int v51; // [rsp+18h] [rbp-80h]
  int v52; // [rsp+24h] [rbp-74h]
  unsigned int v53; // [rsp+28h] [rbp-70h]
  _WORD *v54; // [rsp+30h] [rbp-68h]
  _BYTE *v55; // [rsp+38h] [rbp-60h]
  _WORD *v56; // [rsp+40h] [rbp-58h]
  __int64 v57; // [rsp+48h] [rbp-50h]
  __int64 v58; // [rsp+50h] [rbp-48h]
  int v59; // [rsp+B0h] [rbp+18h]
  int v60; // [rsp+B8h] [rbp+20h]

  if ( a3 < 0x50 )
    return 3221225485LL;
  if ( (unsigned __int16)a2[1] != a3 )
    return 3221225485LL;
  if ( a3 > 0x1000 )
    return 3221225485LL;
  v5 = *a2;
  if ( (v5 & 0xFFF) != 0xA66 )
    return 3221225485LL;
  if ( (v5 & 0xF000) != 0x1000 )
    return 3221225485LL;
  v6 = (unsigned __int16)a2[2];
  if ( (unsigned __int16)v6 > 0xAAu )
    return 3221225485LL;
  v7 = 0;
  if ( a2[3] )
    return 3221225485LL;
  v8 = *a1 - *((_QWORD *)a2 + 2);
  if ( *a1 == *((_QWORD *)a2 + 2) )
    v8 = a1[1] - *((_QWORD *)a2 + 3);
  if ( v8 )
    return 3221225485LL;
  v9 = (unsigned __int16)a2[16];
  v10 = 24 * v6 + 56;
  v11 = (unsigned __int16)a2[2];
  if ( (_DWORD)v9 != v10 )
    return 3221225485LL;
  v12 = (unsigned __int16)a2[17];
  v13 = (unsigned __int16)a2[18];
  v14 = v12 + v10;
  if ( (_DWORD)v13 != v14 )
    return 3221225485LL;
  v15 = (unsigned __int16)a2[19];
  v16 = (unsigned __int16)a2[20];
  v17 = v15 + v14;
  if ( (_DWORD)v16 != v17 )
    return 3221225485LL;
  v18 = (unsigned __int16)a2[22];
  v19 = (unsigned __int16)a2[21];
  v20 = v19 + v17;
  v48 = v18;
  if ( v18 != v20 )
    return 3221225485LL;
  v21 = (unsigned __int16)a2[23];
  v22 = v21 + v20;
  v49 = (unsigned __int16)a2[24];
  if ( v49 != v22 )
    return 3221225485LL;
  v51 = (unsigned __int16)a2[25];
  if ( a3 != v51 + v22
    || v12 != 12 * (v12 / 0xC)
    || (v15 & 3) != 0
    || (v19 & 3) != 0
    || (v21 & 1) != 0
    || (v9 & 3) != 0
    || (v13 & 3) != 0
    || (v16 & 3) != 0
    || (v18 & 3) != 0 )
  {
    return 3221225485LL;
  }
  v23 = v15 >> 2;
  v24 = 0;
  v60 = 0;
  v59 = 0;
  v25 = (unsigned __int16 *)(a2 + 28);
  v26 = 0;
  v27 = v19 >> 2;
  v47 = 0;
  v28 = (__int64)a2 + v9;
  v54 = (__int16 *)((char *)a2 + (unsigned __int16)v48);
  v55 = (char *)a2 + (unsigned __int16)v49;
  v29 = v21 >> 1;
  v30 = (__int64)a2 + v13;
  v31 = (__int16 *)((char *)a2 + v16);
  v53 = v29;
  v32 = 0;
  v56 = v31;
  v33 = 0LL;
  v34 = 0;
  while ( 1 )
  {
    v50 = v34;
    if ( v34 >= (unsigned __int16)a2[17] / 0xCu )
      break;
    v58 = v33 | (1LL << (*(_WORD *)v28 % 0x3Fu));
    if ( *(unsigned __int16 *)(v28 + 4) != v7 )
      return 3221225485LL;
    v35 = *(unsigned __int16 *)(v28 + 6);
    if ( v35 > v23 - v7 )
      return 3221225485LL;
    v57 = v30;
    v52 = v35 + v7;
    for ( i = 0; i < v35; ++i )
    {
      if ( *(_WORD *)(v30 + 2) >= 0x40u
        || *(_BYTE *)(v30 + 1) >= 0x40u
        || *(_BYTE *)v30 >= 0x40u
        || (*(_BYTE *)v30 & 0xFu) >= 9 )
      {
        return 3221225485LL;
      }
      v30 += 4LL;
    }
    if ( *(unsigned __int16 *)(v28 + 8) != v60 )
      return 3221225485LL;
    v37 = *(unsigned __int16 *)(v28 + 10);
    if ( v37 > v27 - v60 )
      return 3221225485LL;
    v60 += v37;
    while ( 2 )
    {
      if ( v32 < v37 )
      {
        if ( (*v31 & 0xFCu) > 0x20 )
          return 3221225485LL;
        if ( (unsigned __int16)v31[1] != v47 )
          return 3221225485LL;
        v38 = (unsigned __int8)*v31 >> 2;
        if ( v38 > v11 - v47 )
          return 3221225485LL;
        v47 += v38;
        v39 = 0;
LABEL_44:
        if ( v39 >= v38 )
        {
          ++v32;
          v31 = v56 + 2;
          v56 += 2;
          continue;
        }
        v40 = *v25;
        if ( v40 >= v23
          || (unsigned __int16)v40 >= (unsigned __int16)v35
          || (unsigned __int16)v40 > *(unsigned __int8 *)(v28 + 3) )
        {
          return 3221225485LL;
        }
        if ( (*(_BYTE *)(v57 + 4LL * *v25) & 0xF) == 3 )
        {
          if ( *((_QWORD *)v25 + 1) != v26 || *((_QWORD *)v25 + 2) )
            return 3221225485LL;
          v44 = v55;
          for ( j = (unsigned __int64)a2 + (unsigned int)(v49 + v51); *v44; ++v44 )
          {
            if ( (unsigned __int64)v44 >= j - 1 )
              break;
          }
          if ( (unsigned __int64)(v44 + 1) > j )
            return 3221225485LL;
          v26 += (_DWORD)v44 + 1 - (_DWORD)v55;
          v55 = v44 + 1;
LABEL_65:
          LOWORD(v35) = *(_WORD *)(v28 + 6);
        }
        else if ( (*(_BYTE *)(v57 + 4LL * *v25) & 0xF) == 4 )
        {
          if ( *((_QWORD *)v25 + 1) != v59 || *((_QWORD *)v25 + 2) )
            return 3221225485LL;
          v41 = v54;
          v42 = (unsigned __int64)a2 + (unsigned int)(unsigned __int16)a2[23] + v48;
          v11 = (unsigned __int16)a2[2];
          if ( *v54 )
          {
            do
            {
              if ( (unsigned __int64)v41 >= v42 - 2 )
                break;
              ++v41;
            }
            while ( *v41 );
            v11 = (unsigned __int16)a2[2];
          }
          v43 = v41 + 1;
          if ( (unsigned __int64)v43 > v42 )
            return 3221225485LL;
          v59 += v43 - v54;
          v54 = v43;
          goto LABEL_65;
        }
        ++v39;
        v25 += 12;
        goto LABEL_44;
      }
      break;
    }
    v28 += 12LL;
    v24 = v60;
    v34 = v50 + 1;
    v7 = v52;
    v32 = 0;
    v33 = v58;
  }
  if ( v33 == *((_QWORD *)a2 + 1) && v47 == v11 && v7 == v23 && v24 == v27 && v59 == v53 )
    return v51 != v26 ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
