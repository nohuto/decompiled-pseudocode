/*
 * XREFs of RtlpInheritAcl2 @ 0x1800C3540
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x1800C3320 (RtlpInheritAcl.c)
 * Callees:
 *     RtlpGenerateInheritedAce @ 0x1800C3BC0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x1800C4840 (RtlpCopyAces.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int *a15,
        __int64 a16,
        _BYTE *a17,
        int *a18)
{
  bool v19; // dl
  int v22; // eax
  char v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  unsigned int v27; // r13d
  unsigned __int8 v28; // r10
  _BYTE *v29; // r11
  int *v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int8 *v33; // rbp
  char v34; // r12
  unsigned int v35; // r15d
  char v36; // r13
  unsigned int j; // esi
  int InheritedAce; // ecx
  char v39; // al
  int v40; // edi
  int v41; // r8d
  __int64 v42; // rax
  char v44; // al
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // r8
  unsigned int k; // ecx
  unsigned __int64 v50; // rcx
  unsigned int m; // edx
  unsigned int v52; // eax
  unsigned __int16 *v53; // r8
  unsigned int i; // ecx
  bool v55; // cf
  __int64 v56; // rax
  char v57; // [rsp+70h] [rbp-68h]
  int v58; // [rsp+74h] [rbp-64h]
  int v59; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v61; // [rsp+80h] [rbp-58h]
  unsigned int v62; // [rsp+84h] [rbp-54h] BYREF
  unsigned int v63; // [rsp+88h] [rbp-50h] BYREF
  void *Src; // [rsp+90h] [rbp-48h]
  char v65; // [rsp+F0h] [rbp+18h]

  v19 = 0;
  v59 = 0;
  v58 = 0;
  v22 = *a15;
  v23 = 0;
  v24 = 2LL;
  LOWORD(v61) = 0;
  v25 = 0LL;
  Src = 0LL;
  v26 = 0;
  v65 = 0;
  v57 = 1;
  v27 = 2;
  if ( (unsigned int)(v22 - 8) <= 0xFFF4 )
  {
    *(_WORD *)a16 = 2;
    *(_DWORD *)(a16 + 4) = 0;
    *(_WORD *)(a16 + 2) = v22 & 0xFFFC;
  }
  v28 = a5;
  v29 = a17;
  v30 = a18;
  v31 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *v30 = v31;
  if ( (a3 & 8) != 0 )
    goto LABEL_8;
  if ( (a3 & 0x1000) != 0 )
  {
    v23 = 1;
    *v30 = v31 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
    v19 = 0;
    goto LABEL_8;
  }
  if ( a2 )
  {
    v57 = 0;
    if ( *a2 >= 2u )
      v27 = *a2;
    if ( a5 )
    {
      if ( (a3 & 0x1000) != 0 )
        LOBYTE(v25) = 16;
      else
        v24 = 1LL;
      v44 = 1;
    }
    else
    {
      v44 = 0;
    }
    v45 = RtlpCopyAces(a2, a11, v24, v25, v44, a7, a8, a9, a10, a4, 0, a12, &v59, a16);
    LODWORD(v25) = v59;
    v58 = v59;
    v19 = v45 == -1073741789;
    v65 = v19;
    v46 = 0;
    if ( v45 != -1073741789 )
      v46 = v45;
    if ( v46 < 0 )
      return (unsigned int)v46;
    if ( a6 && v59 )
    {
      v52 = *(unsigned __int16 *)(a16 + 4);
      v53 = (unsigned __int16 *)(a16 + 8);
      v61 = v52;
      for ( i = 0; ; ++i )
      {
        v55 = i < v52;
        v56 = *(unsigned __int16 *)(a16 + 2);
        if ( !v55 )
          break;
        if ( (unsigned __int64)v53 >= a16 + v56 )
          return 3221225597LL;
        v53 = (unsigned __int16 *)((char *)v53 + v53[1]);
        v52 = v61;
      }
      if ( (unsigned __int64)v53 > a16 + v56 )
        v53 = 0LL;
      Src = v53;
    }
    v28 = a5;
    v29 = a17;
LABEL_51:
    v47 = a12;
    if ( a12 == 1 )
    {
LABEL_52:
      *v29 = 1;
      goto LABEL_8;
    }
    goto LABEL_68;
  }
  if ( !a5 )
  {
    v19 = 0;
    goto LABEL_51;
  }
  v47 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    v19 = 0;
    goto LABEL_52;
  }
  v19 = 0;
LABEL_68:
  if ( v47 == 2 )
  {
    if ( !(_DWORD)v25 && !v23 )
    {
      if ( a2 && !*((_WORD *)a2 + 2) )
        *v29 = 1;
      goto LABEL_8;
    }
    goto LABEL_52;
  }
LABEL_8:
  if ( (v28 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v28 || v23) || !a1 )
  {
    v40 = v59;
LABEL_33:
    v41 = v58;
    goto LABEL_34;
  }
  v32 = *a1;
  if ( (unsigned __int8)(v32 - 2) > 2u )
    return 3221225560LL;
  v33 = a1 + 8;
  if ( v27 <= v32 )
    v27 = *a1;
  v34 = 0;
  v60 = v27;
  v62 = 0;
  v35 = 0;
  v63 = 0;
  v36 = 0;
  LOBYTE(a18) = 0;
  for ( j = 0; j < *((unsigned __int16 *)a1 + 2); ++j )
  {
    if ( *v33 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_27;
      if ( a16 )
      {
        v48 = a16 + 8;
        for ( k = 0; k < *(unsigned __int16 *)(a16 + 4); ++k )
        {
          if ( *(_BYTE *)v48 == 17 )
            goto LABEL_28;
          v48 += *(unsigned __int16 *)(v48 + 2);
        }
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_27;
    }
    InheritedAce = RtlpGenerateInheritedAce(
                     (_DWORD)v33,
                     a4,
                     v28,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a13,
                     a14,
                     (__int64)&v62,
                     a16,
                     (__int64)&v63,
                     (__int64)&a18);
    if ( InheritedAce == -1073741789 )
    {
      v34 = 1;
    }
    else if ( InheritedAce < 0 )
    {
      return (unsigned int)InheritedAce;
    }
    if ( (_BYTE)a18 )
      v36 = 1;
    v26 += v62;
    if ( v62 > v35 || (v35 -= v62, v35 <= v63) )
      v35 = v63;
    v28 = a5;
LABEL_27:
    v33 += *((unsigned __int16 *)v33 + 1);
  }
LABEL_28:
  if ( v34 || (v39 = v65) != 0 )
  {
    v39 = 1;
    v26 += v35;
    v65 = 1;
  }
  v40 = v59;
  if ( !a6 || !v59 || !v36 || v39 )
  {
    LOBYTE(v27) = v60;
    v19 = v65;
    goto LABEL_33;
  }
  v50 = a16 + 8;
  for ( m = 0; m < *(unsigned __int16 *)(a16 + 4); ++m )
  {
    if ( v50 >= a16 + (unsigned __int64)*(unsigned __int16 *)(a16 + 2) )
      return 3221225597LL;
    v50 += *(unsigned __int16 *)(v50 + 2);
  }
  if ( v50 > a16 + (unsigned __int64)*(unsigned __int16 *)(a16 + 2) )
    v50 = 0LL;
  if ( !v50 )
    LODWORD(v50) = a16 + *(unsigned __int16 *)(a16 + 2);
  memmove((void *)(a16 + 8), Src, (unsigned int)(v50 - (_DWORD)Src));
  *(_WORD *)(a16 + 4) -= v61;
  LOBYTE(v27) = v60;
  v19 = v65;
  v41 = 0;
LABEL_34:
  v42 = (unsigned int)(v26 + v41);
  if ( !(_DWORD)v42 )
  {
    if ( !*a17 )
    {
      *a15 = 0;
      return 2147483659LL;
    }
    if ( v57 )
    {
      *a15 = 0;
      return 0LL;
    }
  }
  if ( (unsigned __int64)(v42 + 8) > 0xFFFF )
    return 3221225597LL;
  *a15 = v26 + v40 + 8;
  if ( v19 )
    return 3221225507LL;
  *(_BYTE *)a16 = v27;
  *(_WORD *)(a16 + 2) = v41 + v26 + 8;
  return 0LL;
}
