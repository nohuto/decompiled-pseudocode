/*
 * XREFs of RtlpInheritAcl2 @ 0x14090D650
 * Callers:
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpGenerateInheritedAce @ 0x14090C760 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x14090CC00 (RtlpCopyAces.c)
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
        unsigned int *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  PACL v18; // rbx
  int v19; // r13d
  char v20; // r15
  int v21; // esi
  unsigned int v22; // edi
  char v23; // r11
  unsigned __int8 *v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // r12d
  int v28; // r9d
  char v29; // di
  int *v30; // rax
  int v31; // ecx
  _BYTE *v32; // r13
  char v33; // bp
  unsigned int v34; // edi
  __int64 v35; // rax
  _BYTE *v37; // r8
  char v38; // r9
  char v39; // al
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  _BYTE *v45; // rbp
  unsigned int v46; // edx
  char v47; // r14
  unsigned int v48; // r15d
  int v49; // eax
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
  unsigned int v60; // [rsp+78h] [rbp-60h]
  unsigned int v61; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v62; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+84h] [rbp-54h] BYREF
  void *Src; // [rsp+88h] [rbp-50h]
  bool v67; // [rsp+F0h] [rbp+18h]

  v18 = Acl;
  v19 = 2;
  v20 = 0;
  v59 = 0;
  v21 = 0;
  LOWORD(v61) = 0;
  v22 = *a15;
  v23 = a4;
  Src = 0LL;
  v25 = a2;
  v67 = 0;
  v26 = 0;
  v58 = 1;
  v60 = 2;
  v27 = 0;
  v28 = 2;
  if ( v22 - 8 <= 0xFFF4 )
  {
    memset_0(Acl, 0, v22);
    v25 = a2;
    v23 = a4;
    v18->AclSize = v22 & 0xFFFC;
    v26 = 0;
    *(_WORD *)&v18->AclRevision = 2;
    v28 = 2;
    *(_DWORD *)&v18->AceCount = 0;
  }
  v29 = a5;
  *a17 = 0;
  v30 = a18;
  v31 = v29 != 0 ? 0x400 : 0;
  *a18 = v31;
  if ( (a3 & 8) != 0 )
    goto LABEL_7;
  if ( (a3 & 0x1000) != 0 )
  {
    v20 = 1;
    *v30 = v31 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
    goto LABEL_7;
  if ( v25 )
  {
    v58 = 0;
    if ( *v25 >= 2u )
      v28 = *v25;
    v60 = v28;
    if ( v29 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v38 = 16;
      }
      else
      {
        v19 = 1;
        v38 = 0;
      }
      v39 = 1;
    }
    else
    {
      v38 = 0;
      v39 = 0;
    }
    LOBYTE(v57) = 0;
    v40 = RtlpCopyAces((__int64)v25, a11, v19, v38, v39, a7, a8, a9, a10, v23, v57, a12, &v59, v18);
    v26 = v59;
    v27 = v59;
    v67 = v40 == -1073741789;
    v41 = 0;
    if ( v40 != -1073741789 )
      v41 = v40;
    if ( v41 < 0 )
      return (unsigned int)v41;
    if ( a6 && v59 )
    {
      AceCount = v18->AceCount;
      v53 = (unsigned __int16 *)&v18[1];
      v61 = AceCount;
      for ( i = 0; ; ++i )
      {
        v55 = i < AceCount;
        AclSize = v18->AclSize;
        if ( !v55 )
          break;
        if ( v53 >= (unsigned __int16 *)((char *)v18 + AclSize) )
          return 3221225597LL;
        v53 = (unsigned __int16 *)((char *)v53 + v53[1]);
        AceCount = v61;
      }
      if ( v53 > (unsigned __int16 *)((char *)v18 + AclSize) )
        v53 = 0LL;
      Src = v53;
    }
    v25 = a2;
  }
  else if ( v29 )
  {
    v42 = a12;
    if ( a12 == 1 )
    {
      if ( (a3 & 0x1004) == 4 )
        return 3221225591LL;
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  v42 = a12;
  if ( a12 == 1 )
  {
LABEL_36:
    v32 = a17;
    *a17 = 1;
    goto LABEL_8;
  }
LABEL_38:
  if ( v42 != 2 )
    goto LABEL_7;
  if ( v26 || v20 )
    goto LABEL_36;
  if ( !v25 || *((_WORD *)v25 + 2) )
  {
LABEL_7:
    v32 = a17;
    goto LABEL_8;
  }
  v32 = a17;
  *a17 = 1;
LABEL_8:
  if ( (v29 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v29 || v20) || (v37 = a1) == 0LL )
  {
    v33 = v67;
    v34 = v59;
    goto LABEL_14;
  }
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  v43 = (unsigned __int8)*a1;
  a5 = 0;
  v44 = v60;
  v45 = a1 + 8;
  if ( v60 <= v43 )
    v44 = v43;
  v46 = 0;
  v60 = v44;
  LODWORD(a18) = 0;
  v47 = 0;
  LOBYTE(a17) = 0;
  v48 = 0;
  v62 = 0;
  v63 = 0;
  while ( v48 < *((unsigned __int16 *)v37 + 2) )
  {
    if ( *v45 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_59;
      if ( RtlFindAceByType(v18, 0x11u, 0LL) )
      {
        v46 = (unsigned int)a18;
        break;
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_59;
    }
    v49 = RtlpGenerateInheritedAce(
            v45,
            a4,
            v29,
            a7,
            a8,
            a9,
            a10,
            (__int64)a11,
            a13,
            a14,
            (int *)&v62,
            (__int64)v18,
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
      LOBYTE(a17) = 1;
    v21 += v62;
    if ( v62 > (unsigned int)a18 || (v46 = (_DWORD)a18 - v62, LODWORD(a18) = v46, v46 <= v63) )
    {
      v46 = v63;
      LODWORD(a18) = v63;
    }
    v37 = a1;
LABEL_59:
    ++v48;
    v45 += *((unsigned __int16 *)v45 + 1);
  }
  if ( v47 || (v33 = v67) != 0 )
  {
    v21 += v46;
    v33 = 1;
  }
  v34 = v59;
  if ( a6 && v59 && (_BYTE)a17 && !v33 )
  {
    v50 = v18 + 1;
    for ( j = 0; j < v18->AceCount; ++j )
    {
      if ( v50 >= (PACL)((char *)v18 + v18->AclSize) )
        return 3221225597LL;
      v50 = (PACL)((char *)v50 + v50->AclSize);
    }
    if ( v50 > (PACL)((char *)v18 + v18->AclSize) )
      v50 = 0LL;
    if ( !v50 )
      LODWORD(v50) = (_DWORD)v18 + v18->AclSize;
    memmove(&v18[1], Src, (unsigned int)((_DWORD)v50 - (_DWORD)Src));
    v18->AceCount -= v61;
    v27 = 0;
  }
LABEL_14:
  v35 = v21 + v27;
  if ( !(_DWORD)v35 )
  {
    if ( !*v32 )
    {
      *a15 = 0;
      return 2147483659LL;
    }
    if ( v58 )
    {
      *a15 = 0;
      return 0LL;
    }
  }
  if ( (unsigned __int64)(v35 + 8) > 0xFFFF )
    return 3221225597LL;
  *a15 = v21 + v34 + 8;
  if ( v33 )
    return 3221225507LL;
  v18->AclRevision = v60;
  v18->AclSize = v27 + v21 + 8;
  return 0LL;
}
