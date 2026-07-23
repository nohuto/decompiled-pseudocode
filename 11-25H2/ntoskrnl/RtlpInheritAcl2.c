/*
 * XREFs of RtlpInheritAcl2 @ 0x1409273F0
 * Callers:
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404052C0 (RtlFindAceByType.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpGenerateInheritedAce @ 0x1409264F0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x140926990 (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int16 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  _DWORD *v18; // r13
  PACL v19; // rdi
  int v20; // r12d
  char v21; // r15
  unsigned int v23; // ebx
  unsigned __int8 *v24; // r10
  unsigned int v25; // r8d
  int v26; // r14d
  int v27; // r11d
  char v28; // bl
  _BYTE *v29; // r9
  int *v30; // rax
  int v31; // ecx
  int v32; // ecx
  unsigned int v33; // r12d
  char v34; // si
  unsigned int v35; // ebx
  __int64 v36; // rax
  _BYTE *v38; // r8
  char v39; // r9
  char v40; // al
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  _BYTE *v44; // rsi
  unsigned int v45; // ecx
  unsigned int v46; // edx
  char v47; // r15
  unsigned int v48; // ebp
  int v49; // ecx
  PACL v50; // rcx
  unsigned int j; // edx
  unsigned int AceCount; // eax
  unsigned __int16 *v53; // rdx
  unsigned int i; // ecx
  bool v55; // cf
  __int64 AclSize; // rax
  __int64 v57; // [rsp+50h] [rbp-88h]
  char v58; // [rsp+70h] [rbp-68h]
  unsigned int v59; // [rsp+74h] [rbp-64h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v61; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v62; // [rsp+80h] [rbp-58h]
  unsigned int v63; // [rsp+84h] [rbp-54h] BYREF
  void *Src; // [rsp+88h] [rbp-50h]
  bool v67; // [rsp+F0h] [rbp+18h]

  v18 = a15;
  v19 = Acl;
  v20 = 2;
  v21 = 0;
  v59 = 0;
  v60 = 0;
  v23 = *a15;
  v24 = a2;
  v25 = 0;
  LOWORD(v62) = 0;
  v26 = 0;
  Src = 0LL;
  v67 = 0;
  v27 = 2;
  v58 = 1;
  v61 = 2;
  if ( v23 - 8 <= 0xFFF4 )
  {
    memset_0(Acl, 0, v23);
    v24 = a2;
    *(_WORD *)&v19->AclRevision = 2;
    v19->AclSize = v23 & 0xFFFC;
    v25 = 0;
    *(_DWORD *)&v19->AceCount = 0;
    v27 = 2;
  }
  v28 = a5;
  v29 = a17;
  v30 = a18;
  v31 = -(a5 != 0);
  *a17 = 0;
  v32 = v31 & 0x400;
  *v30 = v32;
  if ( (a3 & 8) != 0 )
    goto LABEL_7;
  if ( (a3 & 0x1000) != 0 )
  {
    v21 = 1;
    *v30 = v32 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
LABEL_7:
    v33 = v60;
    goto LABEL_8;
  }
  if ( v24 )
  {
    v58 = 0;
    if ( *v24 >= 2u )
      v27 = *v24;
    v61 = v27;
    if ( v28 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v39 = 16;
      }
      else
      {
        v20 = 1;
        v39 = 0;
      }
      v40 = 1;
    }
    else
    {
      v39 = 0;
      v40 = 0;
    }
    LOBYTE(v57) = 0;
    v41 = RtlpCopyAces((__int64)v24, a11, v20, v39, v40, a7, a8, a9, a10, a4, v57, a12, &v59, v19);
    v25 = v59;
    v33 = v59;
    v67 = v41 == -1073741789;
    v42 = 0;
    if ( v41 != -1073741789 )
      v42 = v41;
    if ( v42 < 0 )
      return (unsigned int)v42;
    if ( a6 && v59 )
    {
      AceCount = v19->AceCount;
      v53 = (unsigned __int16 *)&v19[1];
      v62 = AceCount;
      for ( i = 0; ; ++i )
      {
        v55 = i < AceCount;
        AclSize = v19->AclSize;
        if ( !v55 )
          break;
        if ( v53 >= (unsigned __int16 *)((char *)v19 + AclSize) )
          return 3221225597LL;
        v53 = (unsigned __int16 *)((char *)v53 + v53[1]);
        AceCount = v62;
      }
      if ( v53 > (unsigned __int16 *)((char *)v19 + AclSize) )
        v53 = 0LL;
      Src = v53;
    }
    v29 = a17;
    v24 = a2;
LABEL_35:
    v43 = a12;
    if ( a12 == 1 )
    {
LABEL_36:
      *v29 = 1;
      goto LABEL_8;
    }
    goto LABEL_38;
  }
  if ( !v28 )
  {
    v33 = v60;
    goto LABEL_35;
  }
  v43 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    v33 = v60;
    goto LABEL_36;
  }
  v33 = v60;
LABEL_38:
  if ( v43 == 2 )
  {
    if ( !v25 && !v21 )
    {
      if ( v24 && !*((_WORD *)v24 + 2) )
        *v29 = 1;
      goto LABEL_8;
    }
    goto LABEL_36;
  }
LABEL_8:
  if ( (v28 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v28 || v21) || (v38 = a1) == 0LL )
  {
    v34 = v67;
    v35 = v59;
    goto LABEL_14;
  }
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  v44 = a1 + 8;
  v45 = v61;
  if ( v61 <= (unsigned __int8)*a1 )
    v45 = (unsigned __int8)*a1;
  v46 = 0;
  v61 = v45;
  LODWORD(a18) = 0;
  v47 = 0;
  LOBYTE(a15) = 0;
  v48 = 0;
  v60 = 0;
  v63 = 0;
  a5 = 0;
  while ( v48 < *((unsigned __int16 *)v38 + 2) )
  {
    if ( *v44 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_58;
      if ( RtlFindAceByType(v19, 0x11u, 0LL) )
      {
        v46 = (unsigned int)a18;
        break;
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_58;
    }
    v49 = RtlpGenerateInheritedAce(
            v44,
            a4,
            v28,
            a7,
            a8,
            a9,
            a10,
            (__int64)a11,
            a13,
            a14,
            (int *)&v60,
            (__int64)v19,
            &v63,
            &a5);
    if ( v49 == -1073741789 )
    {
      v47 = 1;
    }
    else if ( v49 < 0 )
    {
      return (unsigned int)v49;
    }
    if ( a5 )
      LOBYTE(a15) = 1;
    v26 += v60;
    if ( v60 > (unsigned int)a18 || (v46 = (_DWORD)a18 - v60, LODWORD(a18) = v46, v46 <= v63) )
    {
      v46 = v63;
      LODWORD(a18) = v63;
    }
    v38 = a1;
LABEL_58:
    ++v48;
    v44 += *((unsigned __int16 *)v44 + 1);
  }
  if ( v47 || (v34 = v67) != 0 )
  {
    v26 += v46;
    v34 = 1;
  }
  v35 = v59;
  if ( a6 && v59 && (_BYTE)a15 && !v34 )
  {
    v50 = v19 + 1;
    for ( j = 0; j < v19->AceCount; ++j )
    {
      if ( v50 >= (PACL)((char *)v19 + v19->AclSize) )
        return 3221225597LL;
      v50 = (PACL)((char *)v50 + v50->AclSize);
    }
    if ( v50 > (PACL)((char *)v19 + v19->AclSize) )
      v50 = 0LL;
    if ( !v50 )
      LODWORD(v50) = (_DWORD)v19 + v19->AclSize;
    memmove(&v19[1], Src, (unsigned int)((_DWORD)v50 - (_DWORD)Src));
    v19->AceCount -= v62;
    v33 = 0;
  }
LABEL_14:
  v36 = v26 + v33;
  if ( !(_DWORD)v36 )
  {
    if ( !*a17 )
    {
      *v18 = 0;
      return 2147483659LL;
    }
    if ( v58 )
    {
      *v18 = 0;
      return 0LL;
    }
  }
  if ( (unsigned __int64)(v36 + 8) > 0xFFFF )
    return 3221225597LL;
  *v18 = v26 + v35 + 8;
  if ( v34 )
    return 3221225507LL;
  v19->AclRevision = v61;
  v19->AclSize = v33 + v26 + 8;
  return 0LL;
}
