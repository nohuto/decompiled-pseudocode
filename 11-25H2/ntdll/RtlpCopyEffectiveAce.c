/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180064630
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180064180 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x180064E00 (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800656E0 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        unsigned __int16 *Src,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v16; // r15
  __int64 v17; // rax
  char v18; // r10
  __int64 v19; // r13
  __int64 v21; // r9
  unsigned __int8 v22; // cl
  __int64 v23; // r14
  unsigned __int8 *v24; // r11
  unsigned __int16 *v25; // rsi
  _BYTE *v26; // r8
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // r15d
  int v30; // r15d
  int v31; // r15d
  char *v32; // r10
  unsigned int v33; // r11d
  _BYTE *v34; // rax
  char *v35; // rdi
  __int64 v36; // rbx
  char *v37; // rbx
  char *v38; // rbx
  unsigned int v39; // ebx
  unsigned __int8 *v41; // r9
  int v42; // r13d
  int v43; // eax
  __int64 v44; // rax
  int v45; // r14d
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rax
  int v53; // r15d
  char *v54; // rcx
  unsigned int i; // r9d
  _QWORD *v56; // r10
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  char v60; // [rsp+20h] [rbp-E0h]
  int Size; // [rsp+30h] [rbp-D0h]
  unsigned int Sizea; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  unsigned __int8 *v64; // [rsp+40h] [rbp-C0h]
  char *Srca; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v72; // [rsp+BCh] [rbp-44h]
  char v73[8]; // [rsp+E8h] [rbp-18h] BYREF
  int v74; // [rsp+F0h] [rbp-10h]

  v16 = a6;
  v17 = a7;
  v18 = 0;
  v19 = a13;
  if ( !a6 )
    v16 = a4;
  if ( !a7 )
    v17 = a5;
  v21 = (__int64)a16;
  v68 = v17;
  v60 = 0;
  v71 = 257;
  v72 = 50331648LL;
  v69 = v16;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v22 = *(_BYTE *)Src;
  v23 = Src[1];
  if ( v22 >= 0xBu && (unsigned __int8)(v22 - 13) > 1u )
  {
    if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      *a16 = 1;
      goto LABEL_50;
    }
    memmove(*a11, Src, Src[1]);
    goto LABEL_44;
  }
  v64 = 0LL;
  v24 = 0LL;
  v67 = 0LL;
  v63 = 0;
  if ( v22 <= 3u )
  {
    Srca = (char *)Src;
    Size = 8;
    v25 = Src + 4;
LABEL_10:
    v26 = a15;
    goto LABEL_11;
  }
  if ( v22 >= 9u && v22 <= 0xAu || (unsigned __int8)(v22 - 13) <= 1u )
  {
    Srca = (char *)Src;
    v25 = Src + 4;
    Size = 8;
    v67 = &Src[2 * *((unsigned __int8 *)Src + 9) + 8];
    v63 = v23 - (4 * *((unsigned __int8 *)Src + 9) + 8) - 8;
LABEL_73:
    v21 = (__int64)a16;
    goto LABEL_10;
  }
  if ( v22 != 4 )
  {
    v51 = *((_DWORD *)Src + 2);
    v52 = 14LL;
    if ( (v51 & 2) == 0 )
      v52 = 6LL;
    v25 = &Src[8 * (*((_DWORD *)Src + 2) & 1) + v52];
    v53 = v52 * 2 + 16 * (*((_DWORD *)Src + 2) & 1);
    Size = v53;
    if ( (v51 & 2) != 0 )
    {
      if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        v54 = (char *)(Src + 14);
      else
        v54 = (char *)(Src + 6);
    }
    else
    {
      v54 = 0LL;
    }
    Srca = (char *)Src;
    if ( a14 )
    {
      Srca = (char *)Src;
      if ( v54 )
      {
        if ( a9 )
        {
          for ( i = 0; i < a10; ++i )
          {
            v56 = *(_QWORD **)(a9 + 8LL * i);
            v57 = *(_QWORD *)v54 - *v56;
            if ( *(_QWORD *)v54 == *v56 )
              v57 = *((_QWORD *)v54 + 1) - v56[1];
            if ( !v57 )
            {
              *a14 = 1;
              if ( (_BYTE)a3 )
              {
                v18 = 1;
                Srca = (char *)Src;
                v60 = 1;
                goto LABEL_111;
              }
              *a15 = 1;
              if ( (Src[4] & 1) != 0 )
              {
                LODWORD(v23) = v23 - 16;
                Size = v53 - 16;
                memmove(v73, Src, (unsigned int)(v53 - 16));
                v74 &= ~2u;
                Srca = v73;
              }
              else
              {
                LODWORD(v23) = v23 - 20;
                Size = v53 - 20;
                memmove(v73, Src, (unsigned int)(v53 - 20));
                Srca = v73;
                v73[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
              }
              goto LABEL_110;
            }
          }
        }
        goto LABEL_114;
      }
    }
LABEL_110:
    v18 = 0;
LABEL_111:
    v24 = 0LL;
    goto LABEL_73;
  }
  Size = 12;
  v64 = (unsigned __int8 *)(Src + 6);
  v25 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
  if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 6, &v71, a3, (unsigned int)Src) )
  {
    v26 = a15;
LABEL_89:
    v24 = 0LL;
    v64 = 0LL;
    Size = 4 * *((unsigned __int8 *)Src + 13) + 20;
    goto LABEL_90;
  }
  v46 = *((_DWORD *)Src + 5);
  v24 = (unsigned __int8 *)(Src + 6);
  if ( !v46 )
  {
    v49 = a4;
    goto LABEL_83;
  }
  v47 = v46 - 1;
  if ( !v47 )
  {
    v49 = a5;
    if ( a5 )
      goto LABEL_83;
LABEL_86:
    v26 = a15;
    if ( *a15 )
      goto LABEL_90;
    goto LABEL_89;
  }
  v48 = v47 - 1;
  if ( !v48 )
  {
    v49 = v16;
    goto LABEL_83;
  }
  if ( v48 != 1 )
    goto LABEL_86;
  v49 = v68;
LABEL_83:
  v26 = a15;
  v24 = (unsigned __int8 *)v49;
  v64 = (unsigned __int8 *)v49;
  v50 = *(unsigned __int8 *)(v49 + 1);
  *a15 = 1;
  LODWORD(v23) = v23 + 4 * v50 - 4;
LABEL_90:
  v21 = (__int64)a16;
  v18 = 0;
  Srca = (char *)Src;
LABEL_11:
  if ( (_DWORD)v23 )
  {
    v27 = *((_DWORD *)Src + 1);
    if ( v27 < 0 )
      v27 |= *a8;
    if ( (v27 & 0x40000000) != 0 )
      v27 |= a8[1];
    if ( (v27 & 0x20000000) != 0 )
      v27 |= a8[2];
    if ( (v27 & 0x10000000) != 0 )
      v27 |= a8[3];
    v28 = *(unsigned __int8 *)Src;
    if ( (unsigned __int8)v28 <= 0xAu && (v21 = 1651LL, _bittest((const int *)&v21, v28)) )
      v29 = a8[3];
    else
      v29 = a8[3] | 0x1000000;
    v30 = v27 & v29 & 0xFFFFFFF;
    if ( v30 != *((_DWORD *)Src + 1) )
      *v26 = 1;
    v31 = v30 & 0x11FFFFF;
    if ( v31 )
    {
LABEL_26:
      if ( *(_BYTE *)v25 != 1
        || *((_BYTE *)v25 + 2)
        || *((_BYTE *)v25 + 3)
        || *((_BYTE *)v25 + 4)
        || *((_BYTE *)v25 + 5)
        || *((_BYTE *)v25 + 6)
        || *((_BYTE *)v25 + 7) != 3
        || *((_BYTE *)v25 + 1) != 1 )
      {
        v32 = Srca;
      }
      else
      {
        v60 = v18;
        v32 = Srca;
        v41 = v24;
        v33 = Size;
        v42 = v23;
        v43 = *((_DWORD *)v25 + 2);
        v64 = v41;
        if ( !v43 )
        {
          v44 = a4;
LABEL_58:
          v25 = (unsigned __int16 *)v44;
          v45 = 4 * *(unsigned __int8 *)(v44 + 1) - 4;
          v34 = a15;
          LODWORD(v23) = v42 + v45;
          v19 = a13;
          *a15 = 1;
LABEL_36:
          if ( v60 && *v34 )
          {
            if ( (Src[4] & 1) != 0 )
            {
              LODWORD(v23) = v23 - 16;
              Sizea = v33 - 16;
              memmove(v73, Src, v33 - 16);
              v74 &= ~2u;
            }
            else
            {
              LODWORD(v23) = v23 - 20;
              Sizea = v33 - 20;
              memmove(v73, Src, v33 - 20);
              v73[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
            }
            v33 = Sizea;
            v32 = v73;
          }
          v35 = (char *)*a11;
          if ( !*a11 || (unsigned int)v23 > v19 + *(unsigned __int16 *)(v19 + 2) - (_QWORD)v35 )
          {
            v21 = (__int64)a16;
            *a16 = 1;
            goto LABEL_50;
          }
          v36 = v33;
          memmove(*a11, v32, v33);
          v37 = &v35[v36];
          if ( v64 )
          {
            memmove(v37, v64, 4LL * v64[1] + 8);
            v37 += 4 * v64[1] + 8;
          }
          memmove(v37, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
          v38 = &v37[4 * *((unsigned __int8 *)v25 + 1) + 8];
          if ( v67 && v63 > 0 )
          {
            memmove(v38, v67, v63);
            LODWORD(v38) = v63 + (_DWORD)v38;
          }
          v39 = (_DWORD)v38 - *(_DWORD *)a11;
          if ( (unsigned int)v23 < v39 )
            return 0;
          LODWORD(v23) = v39;
          *((_WORD *)*a11 + 1) = v39;
          *((_DWORD *)*a11 + 1) = v31;
          goto LABEL_44;
        }
        v58 = v43 - 1;
        if ( !v58 )
        {
          v44 = a5;
          v64 = v41;
          if ( a5 )
            goto LABEL_58;
          v19 = a13;
LABEL_35:
          v34 = a15;
          goto LABEL_36;
        }
        v59 = v58 - 1;
        if ( !v59 )
        {
          v44 = v69;
          goto LABEL_120;
        }
        if ( v59 == 1 )
        {
          v44 = v68;
LABEL_120:
          v64 = v41;
          goto LABEL_58;
        }
        v19 = a13;
      }
      v33 = Size;
      goto LABEL_35;
    }
    if ( (unsigned __int8)RtlEqualPrefixSid(v25, &v71, v26, v21) )
    {
      v24 = v64;
      v18 = v60;
      goto LABEL_26;
    }
LABEL_114:
    LODWORD(v23) = 0;
LABEL_44:
    v21 = (__int64)a16;
  }
  if ( !*(_BYTE *)v21 && (_DWORD)v23 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(v19 + 4);
  }
LABEL_50:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*(_BYTE *)v21 )
    *a11 = (char *)*a11 + (unsigned int)v23;
  *a12 = v23;
  return 1;
}
