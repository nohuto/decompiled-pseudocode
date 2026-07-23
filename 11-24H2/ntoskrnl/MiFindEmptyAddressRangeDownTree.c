/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x140918CD0
 * Callers:
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 * Callees:
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiHonorRangeStraddleRequirement @ 0x14044EA18 (MiHonorRangeStraddleRequirement.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 i; // r11
  _BYTE *v20; // rbx
  _BYTE *v21; // rsi
  unsigned __int64 v22; // rdi
  _BYTE *v23; // r12
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r10
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  _BYTE v41[28]; // [rsp+20h] [rbp-68h] BYREF
  int v42; // [rsp+3Ch] [rbp-4Ch]
  char v43; // [rsp+41h] [rbp-47h]
  __int64 v44; // [rsp+98h] [rbp+10h]

  memset_0(v41, 0, 0x40uLL);
  v11 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = a4 >> 12;
  v13 = v11 >> 12;
  v44 = v11 >> 12;
  if ( a5 >= a6 || a6 - a5 < v11 )
    return 3221225495LL;
  v14 = a6 >> 12;
  v15 = a3 >> 12;
  v16 = -(__int64)a3 & (a6 - v11);
  v17 = v16 >> 12;
  if ( v12 )
  {
    v39 = MiHonorRangeStraddleRequirement(v16 >> 12, v44, v12, 1);
    v14 = a6 >> 12;
    v13 = v40;
    v17 = ~(v15 - 1) & v39;
    v16 = v17 << 12;
  }
  if ( v16 < a5 )
    return 3221225495LL;
  v18 = *a1;
  if ( !*a1 )
  {
    *a7 = v16;
    return 0LL;
  }
  i = 0LL;
  do
  {
    v20 = (_BYTE *)v18;
    v18 = *(_QWORD *)(v18 + 8);
  }
  while ( v18 );
  v21 = v20;
  v22 = a5 >> 12;
  while ( 1 )
  {
    v23 = v21;
    if ( v20 )
    {
      v20 = 0LL;
      MiUpdateVadStartVpn((__int64)v41, v14);
      v23 = v41;
    }
    else
    {
      v24 = *(_QWORD *)i;
      v25 = i;
      if ( *(_QWORD *)i )
      {
        i = *(_QWORD *)i;
        if ( *(_QWORD *)(v24 + 8) )
        {
          do
            i = *(_QWORD *)(i + 8);
          while ( *(_QWORD *)(i + 8) );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)(i + 8) == v25 )
            break;
          v25 = i;
        }
      }
      if ( !i )
      {
        v42 = 0;
        v21 = v41;
        v43 = 0;
        v28 = v22 - 1;
        goto LABEL_22;
      }
    }
    v21 = v41;
    v26 = *(unsigned int *)(i + 28);
    v27 = a5 >> 12;
    if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 >= v22 )
    {
      v27 = (v26 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1;
      v21 = (_BYTE *)i;
    }
    v28 = v27 - 1;
LABEL_22:
    v29 = ~(v15 - 1);
    v30 = v29 & (v15 + v28);
    if ( v12 )
    {
      v32 = MiHonorRangeStraddleRequirement(v30, v44, v12, 0);
      v14 = a6 >> 12;
      v30 = v32;
      v13 = v33;
    }
    if ( v30 <= v17 )
    {
      v34 = (unsigned __int8)v23[32];
      v35 = *((unsigned int *)v23 + 6);
      v36 = v14;
      v37 = v35 | (v34 << 32);
      if ( v37 <= v14 )
        v36 = v37;
      if ( v36 > v30 && v13 <= v36 - v30 )
        break;
    }
    if ( v21 == v41 )
      return 3221225495LL;
  }
  v38 = v29 & (v36 - v13);
  if ( v12 )
    v38 = v29 & MiHonorRangeStraddleRequirement(v38, v44, v12, 1);
  *a7 = v38 << 12;
  return 0LL;
}
