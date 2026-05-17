/*
 * XREFs of RtlpCopyAces @ 0x1800CCC80
 * Callers:
 *     RtlpInheritAcl2 @ 0x1800CB980 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1800CD654 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x1800CC4B0 (RtlpCopyEffectiveAce.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
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
  char v36; // al
  char v37; // dl
  int v38; // edx
  unsigned int i; // edx
  _BYTE v41[15]; // [rsp+81h] [rbp-7Fh] BYREF
  void *v42; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+98h] [rbp-68h]
  _DWORD *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  unsigned int *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v52; // [rsp+DCh] [rbp-24h]

  v14 = a4;
  v15 = 0;
  v48 = a6;
  v16 = a3;
  v17 = a2;
  v47 = a7;
  v46 = a8;
  v45 = a9;
  v18 = *(_BYTE *)a14 - 2;
  v43 = a3;
  v19 = a1;
  v44 = a2;
  v49 = a1;
  v50 = a13;
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
    *(_DWORD *)&v41[7] = v24;
    if ( v24 >= v26 )
      break;
    if ( *(_BYTE *)v23 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_30;
      v19 = *(unsigned __int16 *)(a14 + 4);
      for ( i = 0; i < (unsigned int)v19; ++i )
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
                v28 = v44;
                if ( v27 < 0 )
                  v27 |= *v44;
                if ( (v27 & 0x40000000) != 0 )
                  v27 |= v44[1];
                if ( (v27 & 0x20000000) != 0 )
                  v27 |= v44[2];
                if ( (v27 & 0x10000000) != 0 )
                  v27 |= v44[3];
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
              v24 = *(_DWORD *)&v41[7];
              v25 += v34;
              v16 = v43;
              v17 = v44;
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
        v42 = v22;
        LODWORD(v34) = 0;
        *(_DWORD *)&v41[3] = 0;
        v41[2] = 0;
        LOBYTE(v19) = a10 && (*(_BYTE *)(v23 + 1) & 3) != 0;
        v36 = *(_BYTE *)(v23 + 1);
        v41[1] = v19;
        if ( (v36 & 8) == 0 )
        {
          v37 = 0;
          v41[0] = 0;
          if ( a11 )
            v37 = (v36 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (unsigned __int16 *)v23,
                  v37,
                  v19,
                  v48,
                  v47,
                  v46,
                  v45,
                  v17,
                  0LL,
                  0,
                  &v42,
                  &v41[3],
                  a14,
                  0LL,
                  &v41[2],
                  v41) )
            return 3221225597LL;
          v35 = *(_DWORD *)&v41[3];
          LODWORD(v34) = *(_DWORD *)&v41[3];
          if ( v41[0] )
          {
            v15 = 1;
            goto LABEL_49;
          }
          if ( v15 || !*(_DWORD *)&v41[3] )
          {
LABEL_49:
            v14 = a4;
          }
          else
          {
            v14 = a4;
            *((_BYTE *)v22 + 1) &= ~a4;
            v35 = *(_DWORD *)&v41[3];
          }
        }
        if ( !v41[1] )
          goto LABEL_51;
        v38 = *(_DWORD *)(v23 + 10);
        v51 = 0;
        v52 = 768;
        if ( !v38 )
          v38 = *(unsigned __int16 *)(v23 + 14) - v52;
        if ( v35 && !v41[2] )
        {
          if ( !v15 )
          {
            *((_BYTE *)v22 + 1) = ~v14 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v23 + 1) & 0x1F);
            goto LABEL_28;
          }
          goto LABEL_57;
        }
        if ( *(_BYTE *)v23 <= 8u && !*(_DWORD *)(v23 + 4) && v38 )
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
        if ( *(unsigned __int16 *)(v23 + 2) <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v42 )
        {
          if ( !v15 )
          {
            memmove(v42, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
            v14 = a4;
            *((_BYTE *)v42 + 1) |= 8u;
            *((_BYTE *)v42 + 1) &= ~a4;
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
    v19 = v49;
    ++v24;
    v23 += *(unsigned __int16 *)(v23 + 2);
  }
LABEL_31:
  if ( v25 <= 0xFFFF )
  {
    *v50 = v25;
    return v15 != 0 ? 0xC0000023 : 0;
  }
  return 3221225597LL;
}
