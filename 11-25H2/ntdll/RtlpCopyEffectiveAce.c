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
        char a3,
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
  _BYTE *v21; // r9
  unsigned __int8 v22; // cl
  __int64 v23; // r14
  unsigned __int8 *v24; // r11
  unsigned __int16 *v25; // rsi
  _BYTE *v26; // r8
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // r9d
  int v30; // r15d
  int v31; // r15d
  int v32; // r15d
  char *v33; // r10
  unsigned int v34; // r11d
  _BYTE *v35; // rax
  char *v36; // rdi
  __int64 v37; // rbx
  char *v38; // rbx
  char *v39; // rbx
  unsigned int v40; // ebx
  unsigned __int8 *v42; // r9
  int v43; // r13d
  int v44; // eax
  __int64 v45; // rax
  int v46; // r14d
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // eax
  int v52; // ecx
  __int64 v53; // rax
  int v54; // r15d
  char *v55; // rcx
  unsigned int i; // r9d
  _QWORD *v57; // r10
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  char v61; // [rsp+20h] [rbp-E0h]
  int Size; // [rsp+30h] [rbp-D0h]
  unsigned int Sizea; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+38h] [rbp-C8h]
  unsigned __int8 *v65; // [rsp+40h] [rbp-C0h]
  char *Srca; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  int Sid2; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v73; // [rsp+BCh] [rbp-44h]
  char v74[8]; // [rsp+E8h] [rbp-18h] BYREF
  int v75; // [rsp+F0h] [rbp-10h]

  v16 = a6;
  v17 = a7;
  v18 = 0;
  v19 = a13;
  if ( !a6 )
    v16 = a4;
  if ( !a7 )
    v17 = a5;
  v21 = a16;
  v69 = v17;
  v61 = 0;
  Sid2 = 257;
  v73 = 50331648LL;
  v70 = v16;
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
  v65 = 0LL;
  v24 = 0LL;
  v68 = 0LL;
  v64 = 0;
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
    v68 = &Src[2 * *((unsigned __int8 *)Src + 9) + 8];
    v64 = v23 - (4 * *((unsigned __int8 *)Src + 9) + 8) - 8;
LABEL_73:
    v21 = a16;
    goto LABEL_10;
  }
  if ( v22 != 4 )
  {
    v52 = *((_DWORD *)Src + 2);
    v53 = 14LL;
    if ( (v52 & 2) == 0 )
      v53 = 6LL;
    v25 = &Src[8 * (*((_DWORD *)Src + 2) & 1) + v53];
    v54 = v53 * 2 + 16 * (*((_DWORD *)Src + 2) & 1);
    Size = v54;
    if ( (v52 & 2) != 0 )
    {
      if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        v55 = (char *)(Src + 14);
      else
        v55 = (char *)(Src + 6);
    }
    else
    {
      v55 = 0LL;
    }
    Srca = (char *)Src;
    if ( a14 )
    {
      Srca = (char *)Src;
      if ( v55 )
      {
        if ( a9 )
        {
          for ( i = 0; i < a10; ++i )
          {
            v57 = *(_QWORD **)(a9 + 8LL * i);
            v58 = *(_QWORD *)v55 - *v57;
            if ( *(_QWORD *)v55 == *v57 )
              v58 = *((_QWORD *)v55 + 1) - v57[1];
            if ( !v58 )
            {
              *a14 = 1;
              if ( a3 )
              {
                v18 = 1;
                Srca = (char *)Src;
                v61 = 1;
                goto LABEL_111;
              }
              *a15 = 1;
              if ( (Src[4] & 1) != 0 )
              {
                LODWORD(v23) = v23 - 16;
                Size = v54 - 16;
                memmove(v74, Src, (unsigned int)(v54 - 16));
                v75 &= ~2u;
                Srca = v74;
              }
              else
              {
                LODWORD(v23) = v23 - 20;
                Size = v54 - 20;
                memmove(v74, Src, (unsigned int)(v54 - 20));
                Srca = v74;
                v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
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
  v65 = (unsigned __int8 *)(Src + 6);
  v25 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
  if ( !RtlEqualPrefixSid(Src + 6, &Sid2) )
  {
    v26 = a15;
LABEL_89:
    v24 = 0LL;
    v65 = 0LL;
    Size = 4 * *((unsigned __int8 *)Src + 13) + 20;
    goto LABEL_90;
  }
  v47 = *((_DWORD *)Src + 5);
  v24 = (unsigned __int8 *)(Src + 6);
  if ( !v47 )
  {
    v50 = a4;
    goto LABEL_83;
  }
  v48 = v47 - 1;
  if ( !v48 )
  {
    v50 = a5;
    if ( a5 )
      goto LABEL_83;
LABEL_86:
    v26 = a15;
    if ( *a15 )
      goto LABEL_90;
    goto LABEL_89;
  }
  v49 = v48 - 1;
  if ( !v49 )
  {
    v50 = v16;
    goto LABEL_83;
  }
  if ( v49 != 1 )
    goto LABEL_86;
  v50 = v69;
LABEL_83:
  v26 = a15;
  v24 = (unsigned __int8 *)v50;
  v65 = (unsigned __int8 *)v50;
  v51 = *(unsigned __int8 *)(v50 + 1);
  *a15 = 1;
  LODWORD(v23) = v23 + 4 * v51 - 4;
LABEL_90:
  v21 = a16;
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
    if ( (unsigned __int8)v28 <= 0xAu && (v29 = 1651, _bittest(&v29, v28)) )
      v30 = a8[3];
    else
      v30 = a8[3] | 0x1000000;
    v31 = v27 & v30 & 0xFFFFFFF;
    if ( v31 != *((_DWORD *)Src + 1) )
      *v26 = 1;
    v32 = v31 & 0x11FFFFF;
    if ( v32 )
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
        v33 = Srca;
      }
      else
      {
        v61 = v18;
        v33 = Srca;
        v42 = v24;
        v34 = Size;
        v43 = v23;
        v44 = *((_DWORD *)v25 + 2);
        v65 = v42;
        if ( !v44 )
        {
          v45 = a4;
LABEL_58:
          v25 = (unsigned __int16 *)v45;
          v46 = 4 * *(unsigned __int8 *)(v45 + 1) - 4;
          v35 = a15;
          LODWORD(v23) = v43 + v46;
          v19 = a13;
          *a15 = 1;
LABEL_36:
          if ( v61 && *v35 )
          {
            if ( (Src[4] & 1) != 0 )
            {
              LODWORD(v23) = v23 - 16;
              Sizea = v34 - 16;
              memmove(v74, Src, v34 - 16);
              v75 &= ~2u;
            }
            else
            {
              LODWORD(v23) = v23 - 20;
              Sizea = v34 - 20;
              memmove(v74, Src, v34 - 20);
              v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
            }
            v34 = Sizea;
            v33 = v74;
          }
          v36 = (char *)*a11;
          if ( !*a11 || (unsigned int)v23 > v19 + *(unsigned __int16 *)(v19 + 2) - (_QWORD)v36 )
          {
            v21 = a16;
            *a16 = 1;
            goto LABEL_50;
          }
          v37 = v34;
          memmove(*a11, v33, v34);
          v38 = &v36[v37];
          if ( v65 )
          {
            memmove(v38, v65, 4LL * v65[1] + 8);
            v38 += 4 * v65[1] + 8;
          }
          memmove(v38, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
          v39 = &v38[4 * *((unsigned __int8 *)v25 + 1) + 8];
          if ( v68 && v64 > 0 )
          {
            memmove(v39, v68, v64);
            LODWORD(v39) = v64 + (_DWORD)v39;
          }
          v40 = (_DWORD)v39 - *(_DWORD *)a11;
          if ( (unsigned int)v23 < v40 )
            return 0;
          LODWORD(v23) = v40;
          *((_WORD *)*a11 + 1) = v40;
          *((_DWORD *)*a11 + 1) = v32;
          goto LABEL_44;
        }
        v59 = v44 - 1;
        if ( !v59 )
        {
          v45 = a5;
          v65 = v42;
          if ( a5 )
            goto LABEL_58;
          v19 = a13;
LABEL_35:
          v35 = a15;
          goto LABEL_36;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          v45 = v70;
          goto LABEL_120;
        }
        if ( v60 == 1 )
        {
          v45 = v69;
LABEL_120:
          v65 = v42;
          goto LABEL_58;
        }
        v19 = a13;
      }
      v34 = Size;
      goto LABEL_35;
    }
    if ( RtlEqualPrefixSid(v25, &Sid2) )
    {
      v24 = v65;
      v18 = v61;
      goto LABEL_26;
    }
LABEL_114:
    LODWORD(v23) = 0;
LABEL_44:
    v21 = a16;
  }
  if ( !*v21 && (_DWORD)v23 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(v19 + 4);
  }
LABEL_50:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v21 )
    *a11 = (char *)*a11 + (unsigned int)v23;
  *a12 = v23;
  return 1;
}
