/*
 * XREFs of RtlpCopyEffectiveAce @ 0x14090D110
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x14090C760 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x14090CC00 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlEqualPrefixSid @ 0x14090C458 (RtlEqualPrefixSid.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
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
  __int64 v16; // r12
  __int64 v18; // r13
  _BYTE *v20; // r9
  signed __int64 v21; // rbx
  unsigned __int8 v22; // cl
  char *v24; // r10
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // eax
  char v30; // dl
  unsigned int v31; // r8d
  _BYTE *v32; // rax
  unsigned __int8 *v33; // r13
  char *v34; // rdx
  char *v35; // r12
  __int64 v36; // rdi
  char *v37; // rdi
  char *v38; // r12
  unsigned int v39; // r12d
  int v40; // eax
  ULONG v41; // eax
  char *v42; // r11
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  __int64 v49; // rax
  char *v50; // r11
  __int64 v51; // rcx
  __int64 i; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  char v57; // [rsp+20h] [rbp-E0h]
  unsigned int Size; // [rsp+28h] [rbp-D8h]
  size_t Sizea; // [rsp+28h] [rbp-D8h]
  size_t Sizeb; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+38h] [rbp-C8h]
  char *v62; // [rsp+40h] [rbp-C0h]
  unsigned __int8 *Sid1; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+50h] [rbp-B0h]
  char *Srca; // [rsp+58h] [rbp-A8h]
  char *v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+7Ch] [rbp-84h]
  int Sid2; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B4h] [rbp-4Ch]
  char v72[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+E8h] [rbp-18h]

  v16 = a6;
  v18 = a7;
  v20 = a15;
  if ( !a6 )
    v16 = (__int64)a4;
  if ( !a7 )
    v18 = (__int64)a5;
  v57 = 0;
  Sid2 = 257;
  v71 = 50331648LL;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v21 = *((unsigned __int16 *)Src + 1);
  v22 = *Src;
  if ( (unsigned __int8)(v22 - 11) > 1u && v22 < 0xFu )
  {
    Sid1 = 0LL;
    v67 = 0LL;
    v61 = 0;
    if ( v22 <= 3u )
    {
      v24 = Src + 8;
      Size = 8;
      v62 = Src + 8;
      Srca = Src;
      goto LABEL_22;
    }
    if ( v22 >= 9u && v22 <= 0xAu || (unsigned __int8)(v22 - 13) <= 1u )
    {
      Size = 8;
      v62 = Src + 8;
      v67 = &Src[RtlLengthSid(Src + 8) + 8];
      v41 = RtlLengthSid(Src + 8);
      v20 = a15;
      v24 = Src + 8;
      Srca = Src;
      v61 = v21 - v41 - 8;
      goto LABEL_22;
    }
    if ( v22 != 4 )
    {
      v48 = *((_DWORD *)Src + 2);
      v49 = 28LL;
      if ( (v48 & 2) == 0 )
        v49 = 12LL;
      v24 = &Src[16 * (*((_DWORD *)Src + 2) & 1) + v49];
      v62 = v24;
      Size = v49 + 16 * (*((_DWORD *)Src + 2) & 1);
      if ( (v48 & 2) != 0 )
      {
        if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          v50 = Src + 28;
        else
          v50 = Src + 12;
      }
      else
      {
        v50 = 0LL;
      }
      Srca = Src;
      if ( a14 )
      {
        Srca = Src;
        if ( v50 )
        {
          v51 = a9;
          if ( a9 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v64 + 1) )
            {
              v64 = i;
              if ( (unsigned int)i >= a10 )
                break;
              v53 = *(_QWORD **)(v51 + 8 * i);
              v54 = *(_QWORD *)v50 - *v53;
              if ( *(_QWORD *)v50 == *v53 )
                v54 = *((_QWORD *)v50 + 1) - v53[1];
              if ( !v54 )
              {
                *a14 = 1;
                if ( a3 )
                {
                  v57 = 1;
                  Srca = Src;
                  goto LABEL_22;
                }
                *a15 = 1;
                if ( (*((_DWORD *)Src + 2) & 1) != 0 )
                {
                  LODWORD(v21) = v21 - 16;
                  Size -= 16;
                  memmove(v72, Src, Size);
                  v73 &= ~2u;
                  Srca = v72;
                }
                else
                {
                  LODWORD(v21) = v21 - 20;
                  Size -= 20;
                  memmove(v72, Src, Size);
                  Srca = v72;
                  v72[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
                }
                v20 = a15;
                goto LABEL_111;
              }
              v51 = a9;
            }
          }
          LODWORD(v21) = 0;
          goto LABEL_11;
        }
      }
LABEL_22:
      if ( !(_DWORD)v21 )
        goto LABEL_11;
      v25 = *((_DWORD *)Src + 1);
      if ( v25 < 0 )
        v25 |= *a8;
      if ( (v25 & 0x40000000) != 0 )
        v25 |= a8[1];
      if ( (v25 & 0x20000000) != 0 )
        v25 |= a8[2];
      if ( (v25 & 0x10000000) != 0 )
        v25 |= a8[3];
      v26 = (unsigned __int8)*Src;
      if ( (unsigned __int8)v26 <= 0xAu && (v27 = 1651, _bittest(&v27, v26)) )
        v28 = a8[3];
      else
        v28 = a8[3] | 0x1000000;
      v29 = v25 & v28 & 0xFFFFFFF;
      if ( v29 != *((_DWORD *)Src + 1) )
        *v20 = 1;
      v68 = v29 & 0x11FFFFF;
      if ( (v29 & 0x11FFFFF) == 0 )
      {
        if ( !RtlEqualPrefixSid(v24, &Sid2) )
        {
          LODWORD(v21) = 0;
          goto LABEL_11;
        }
        v24 = v62;
      }
      if ( *v24 != 1 || v24[2] || v24[3] || v24[4] || v24[5] || v24[6] || v24[7] != 3 || v24[1] != 1 )
      {
        v30 = v57;
      }
      else
      {
        v62 = v24;
        v30 = v57;
        v40 = *((_DWORD *)v24 + 2);
        if ( !v40 )
        {
          v31 = Size;
          v33 = a4;
          v32 = a15;
          LODWORD(v21) = 4 * a4[1] - 4 + v21;
          *a15 = 1;
          goto LABEL_47;
        }
        v55 = v40 - 1;
        if ( !v55 )
        {
          if ( a5 )
          {
            v30 = v57;
            v33 = a5;
            v31 = Size;
            LODWORD(v21) = v21 + 4 * (a5[1] - 1);
            v32 = a15;
            *a15 = 1;
          }
          else
          {
            v32 = a15;
            v33 = (unsigned __int8 *)v24;
            v31 = Size;
          }
LABEL_47:
          if ( v30 && *v32 )
          {
            if ( (*((_DWORD *)Src + 2) & 1) != 0 )
            {
              LODWORD(v21) = v21 - 16;
              Sizea = v31 - 16;
              memmove(v72, Src, Sizea);
              v73 &= ~2u;
              v34 = v72;
              v31 = Sizea;
            }
            else
            {
              LODWORD(v21) = v21 - 20;
              Sizeb = v31 - 20;
              memmove(v72, Src, Sizeb);
              v31 = Sizeb;
              v34 = v72;
              v72[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
            }
          }
          else
          {
            v34 = Srca;
          }
          v35 = (char *)*a11;
          if ( *a11 && (unsigned int)v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v35 )
          {
            v36 = v31;
            memmove(*a11, v34, v31);
            v37 = &v35[v36];
            if ( Sid1 )
            {
              memmove(v37, Sid1, 4LL * Sid1[1] + 8);
              v37 += 4 * Sid1[1] + 8;
            }
            memmove(v37, v33, 4LL * v33[1] + 8);
            v38 = &v37[4 * v33[1] + 8];
            if ( v67 && v61 > 0 )
            {
              memmove(v38, v67, v61);
              LODWORD(v38) = v61 + (_DWORD)v38;
            }
            v39 = (_DWORD)v38 - *(_DWORD *)a11;
            if ( (unsigned int)v21 < v39 )
              return 0;
            LODWORD(v21) = v39;
            *((_WORD *)*a11 + 1) = v39;
            *((_DWORD *)*a11 + 1) = v68;
            goto LABEL_11;
          }
LABEL_60:
          *a16 = 1;
          goto LABEL_16;
        }
        v56 = v55 - 1;
        if ( !v56 )
        {
          v33 = (unsigned __int8 *)v16;
          v31 = Size;
          v32 = a15;
          LODWORD(v21) = 4 * *(unsigned __int8 *)(v16 + 1) - 4 + v21;
          v30 = v57;
          *a15 = 1;
          goto LABEL_47;
        }
        if ( v56 == 1 )
        {
          v31 = Size;
          v62 = (char *)v18;
          v32 = a15;
          LODWORD(v21) = 4 * *(unsigned __int8 *)(v18 + 1) - 4 + v21;
          *a15 = 1;
          goto LABEL_46;
        }
      }
      v31 = Size;
      v32 = a15;
LABEL_46:
      v33 = (unsigned __int8 *)v62;
      goto LABEL_47;
    }
    Sid1 = (unsigned __int8 *)(Src + 12);
    Size = 12;
    v62 = &Src[RtlLengthSid(Src + 12) + 12];
    if ( RtlEqualPrefixSid(Src + 12, &Sid2) )
    {
      v42 = Src + 12;
      v43 = *((_DWORD *)Src + 5);
      if ( !v43 )
      {
        v20 = a15;
        Sid1 = a4;
        v47 = a4[1];
        *a15 = 1;
        LODWORD(v21) = v21 + 4 * v47 - 4;
        goto LABEL_90;
      }
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( !v45 )
        {
          v20 = a15;
          Sid1 = (unsigned __int8 *)v16;
          LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v16 + 1) - 4;
          *a15 = 1;
          goto LABEL_90;
        }
        if ( v45 == 1 )
        {
          v20 = a15;
          Sid1 = (unsigned __int8 *)v18;
          LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v18 + 1) - 4;
          *a15 = 1;
          goto LABEL_90;
        }
      }
      else
      {
        if ( a5 )
        {
          v20 = a15;
          Sid1 = a5;
          LODWORD(v21) = v21 + 4 * a5[1] - 4;
          *a15 = 1;
          goto LABEL_90;
        }
        v42 = Src + 12;
      }
      v20 = a15;
      if ( *a15 )
      {
LABEL_90:
        Srca = Src;
LABEL_111:
        v24 = v62;
        goto LABEL_22;
      }
      v46 = (unsigned __int8)v42[1];
    }
    else
    {
      v20 = a15;
      v46 = (unsigned __int8)Src[13];
    }
    Sid1 = 0LL;
    Size = 4 * v46 + 20;
    goto LABEL_90;
  }
  if ( v21 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_60;
  memmove(*a11, Src, v21);
LABEL_11:
  if ( !*a16 && (_DWORD)v21 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_16:
  if ( (unsigned int)v21 > 0xFFFF )
    return 0;
  if ( !*a16 )
    *a11 = (char *)*a11 + (unsigned int)v21;
  *a12 = v21;
  return 1;
}
