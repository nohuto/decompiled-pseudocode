/*
 * XREFs of RtlpCopyAces @ 0x1800C4840
 * Callers:
 *     RtlpInheritAcl2 @ 0x1800C3540 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1800C5214 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x1800C4070 (RtlpCopyEffectiveAce.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        __int64 a14)
{
  char v14; // r11
  char v15; // si
  int v16; // r14d
  _DWORD *v17; // r10
  unsigned __int8 v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  int *v22; // rbx
  __int64 v23; // r13
  unsigned int v24; // ecx
  unsigned int v25; // r12d
  unsigned int v26; // eax
  int v27; // ecx
  _DWORD *v28; // rdx
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // r8d
  int v32; // eax
  signed __int64 v34; // r14
  int v35; // ecx
  char v36; // r8
  char v37; // al
  char v38; // dl
  int v39; // edx
  unsigned int i; // edx
  _BYTE v42[15]; // [rsp+81h] [rbp-7Fh] BYREF
  void *v43; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+98h] [rbp-68h]
  _DWORD *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  unsigned int *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v53; // [rsp+DCh] [rbp-24h]

  v14 = a4;
  v15 = 0;
  v49 = a6;
  v16 = a3;
  v17 = a2;
  v48 = a7;
  v47 = a8;
  v46 = a9;
  v18 = *(_BYTE *)a14 - 2;
  v44 = a3;
  v19 = a1;
  v45 = a2;
  v50 = a1;
  v51 = a13;
  if ( v18 > 2u )
    return 3221225560LL;
  v20 = a14 + 8;
  v21 = 0;
  v22 = (int *)(a14 + 8);
  while ( v21 < *(unsigned __int16 *)(a14 + 4) )
  {
    if ( (unsigned __int64)v22 >= a14 + (unsigned __int64)*(unsigned __int16 *)(a14 + 2) )
      return 3221225597LL;
    ++v21;
    v22 = (int *)((char *)v22 + *((unsigned __int16 *)v22 + 1));
  }
  v23 = a1 + 8;
  v24 = 0;
  v25 = 0;
  if ( (unsigned __int64)v22 > a14 + (unsigned __int64)*(unsigned __int16 *)(a14 + 2) )
    v22 = 0LL;
  while ( 1 )
  {
    v26 = *(unsigned __int16 *)(v19 + 4);
    *(_DWORD *)&v42[7] = v24;
    if ( v24 >= v26 )
      break;
    if ( *(_BYTE *)v23 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_30;
      for ( i = 0; i < *(unsigned __int16 *)(a14 + 4); ++i )
      {
        if ( *(_BYTE *)v20 == 17 )
          goto LABEL_31;
        v20 += *(unsigned __int16 *)(v20 + 2);
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_30;
    }
    if ( v16 == 1 )
    {
      if ( (*(_BYTE *)(v23 + 1) & 0x10) == 0 )
        goto LABEL_34;
    }
    else if ( v16 )
    {
      if ( v16 == 2 )
      {
LABEL_34:
        if ( !a5 )
        {
          v34 = *(unsigned __int16 *)(v23 + 2);
          if ( v22 && v34 <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v22 )
          {
            if ( !v15 )
            {
              memmove(v22, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
              if ( (*(_BYTE *)v22 < 0xBu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                v27 = v22[1];
                v28 = v45;
                if ( v27 < 0 )
                  v27 |= *v45;
                if ( (v27 & 0x40000000) != 0 )
                  v27 |= v45[1];
                if ( (v27 & 0x20000000) != 0 )
                  v27 |= v45[2];
                if ( (v27 & 0x10000000) != 0 )
                  v27 |= v45[3];
                v29 = v27 & 0xFFFFFFF;
                v22[1] = v29;
                v30 = *(unsigned __int8 *)v22;
                if ( (unsigned __int8)v30 <= 0xAu && (v31 = 1651, _bittest(&v31, v30)) )
                  v32 = v28[3];
                else
                  v32 = v28[3] | 0x1000000;
                v22[1] = v29 & v32;
              }
              v14 = a4;
              *((_BYTE *)v22 + 1) &= ~a4;
LABEL_27:
              ++*(_WORD *)(a14 + 4);
LABEL_28:
              v22 = (int *)((char *)v22 + (unsigned int)v34);
LABEL_29:
              v24 = *(_DWORD *)&v42[7];
              v25 += v34;
              v16 = v44;
              v17 = v45;
              goto LABEL_30;
            }
LABEL_57:
            v22 = (int *)(a14 + *(unsigned __int16 *)(a14 + 2));
            goto LABEL_29;
          }
LABEL_56:
          v15 = 1;
          goto LABEL_57;
        }
        v35 = 0;
        v43 = v22;
        LODWORD(v34) = 0;
        *(_DWORD *)&v42[3] = 0;
        v42[2] = 0;
        v36 = a10 && (*(_BYTE *)(v23 + 1) & 3) != 0;
        v37 = *(_BYTE *)(v23 + 1);
        v42[1] = v36;
        if ( (v37 & 8) == 0 )
        {
          v38 = 0;
          v42[0] = 0;
          if ( a11 )
            v38 = (v37 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (unsigned __int16 *)v23,
                  v38,
                  v36,
                  v49,
                  v48,
                  v47,
                  v46,
                  v17,
                  0LL,
                  0,
                  &v43,
                  &v42[3],
                  a14,
                  0LL,
                  &v42[2],
                  v42) )
            return 3221225597LL;
          v35 = *(_DWORD *)&v42[3];
          LODWORD(v34) = *(_DWORD *)&v42[3];
          if ( v42[0] )
          {
            v15 = 1;
            goto LABEL_49;
          }
          if ( v15 || !*(_DWORD *)&v42[3] )
          {
LABEL_49:
            v14 = a4;
          }
          else
          {
            v14 = a4;
            *((_BYTE *)v22 + 1) &= ~a4;
            v35 = *(_DWORD *)&v42[3];
          }
        }
        if ( !v42[1] )
          goto LABEL_51;
        v39 = *(_DWORD *)(v23 + 10);
        v52 = 0;
        v53 = 768;
        if ( !v39 )
          v39 = *(unsigned __int16 *)(v23 + 14) - v53;
        if ( v35 && !v42[2] )
        {
          if ( !v15 )
          {
            *((_BYTE *)v22 + 1) = ~v14 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v23 + 1) & 0x1F);
            goto LABEL_28;
          }
          goto LABEL_57;
        }
        if ( *(_BYTE *)v23 <= 8u && !*(_DWORD *)(v23 + 4) && v39 )
        {
LABEL_51:
          if ( !v15 )
            goto LABEL_28;
          v22 = (int *)(a14 + *(unsigned __int16 *)(a14 + 2));
          goto LABEL_29;
        }
        LODWORD(v34) = *(unsigned __int16 *)(v23 + 2) + (_DWORD)v34;
        if ( (unsigned int)v34 > 0xFFFF )
          return 3221225597LL;
        if ( *(unsigned __int16 *)(v23 + 2) <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v43 )
        {
          if ( !v15 )
          {
            memmove(v43, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
            v14 = a4;
            *((_BYTE *)v43 + 1) |= 8u;
            *((_BYTE *)v43 + 1) &= ~a4;
            goto LABEL_27;
          }
          goto LABEL_57;
        }
        goto LABEL_56;
      }
    }
    else if ( (*(_BYTE *)(v23 + 1) & 0x10) != 0 )
    {
      goto LABEL_34;
    }
LABEL_30:
    v20 = a14 + 8;
    v19 = v50;
    ++v24;
    v23 += *(unsigned __int16 *)(v23 + 2);
  }
LABEL_31:
  if ( v25 <= 0xFFFF )
  {
    *v51 = v25;
    return v15 != 0 ? 0xC0000023 : 0;
  }
  return 3221225597LL;
}
