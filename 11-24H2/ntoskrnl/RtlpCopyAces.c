/*
 * XREFs of RtlpCopyAces @ 0x14090CC00
 * Callers:
 *     RtlpComputeMergedAcl2 @ 0x1407810E4 (RtlpComputeMergedAcl2.c)
 *     RtlpInheritAcl2 @ 0x14090D650 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x14090D110 (RtlpCopyEffectiveAce.c)
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
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  char v14; // si
  int v15; // r15d
  unsigned __int8 v16; // al
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  int *i; // rbx
  int *v21; // rax
  int v22; // ecx
  _BYTE *v23; // r13
  unsigned int v24; // r12d
  unsigned int v25; // edx
  unsigned int v26; // eax
  signed __int64 v27; // r15
  int v28; // eax
  _DWORD *v29; // rdx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  int v35; // ecx
  bool v36; // r12
  char v37; // r8
  char v38; // al
  int v39; // edx
  _BYTE v41[11]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v42; // [rsp+8Ch] [rbp-74h]
  void *v43; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  unsigned int *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v53; // [rsp+DCh] [rbp-24h]

  v14 = 0;
  v15 = a3;
  v49 = a7;
  v48 = a8;
  v47 = a9;
  v16 = Acl->AclRevision - 2;
  v45 = a3;
  v17 = (__int64)a2;
  v44 = a2;
  v18 = a1;
  v50 = a1;
  v46 = a6;
  v51 = a13;
  if ( v16 > 2u )
    return 3221225560LL;
  v19 = 0;
  for ( i = (int *)&Acl[1]; ; i = (int *)((char *)i + *((unsigned __int16 *)i + 1)) )
  {
    v21 = (int *)((char *)Acl + Acl->AclSize);
    if ( v19 >= Acl->AceCount )
      break;
    if ( i >= v21 )
      return 3221225597LL;
    ++v19;
  }
  v22 = a12;
  v23 = (_BYTE *)(v18 + 8);
  *(_DWORD *)&v41[3] = 0;
  v24 = 0;
  v25 = 0;
  if ( i > v21 )
    i = 0LL;
  while ( 1 )
  {
    v26 = *(unsigned __int16 *)(v18 + 4);
    v42 = v25;
    if ( v25 >= v26 )
      break;
    if ( *v23 != 17 )
    {
      if ( v22 == 3 )
        goto LABEL_33;
LABEL_9:
      if ( v15 != 2 )
      {
        if ( v15 )
        {
          if ( v15 != 1 )
            goto LABEL_32;
          v38 = ~(v23[1] >> 4);
        }
        else
        {
          v38 = v23[1] >> 4;
        }
        if ( (v38 & 1) != 0 )
          goto LABEL_10;
LABEL_32:
        v22 = a12;
        goto LABEL_33;
      }
LABEL_10:
      if ( !a5 )
      {
        v27 = *((unsigned __int16 *)v23 + 1);
        if ( i && v27 <= (__int64)Acl + Acl->AclSize - (_QWORD)i )
        {
          if ( !v14 )
          {
            memmove(i, v23, *((unsigned __int16 *)v23 + 1));
            if ( (*(_BYTE *)i < 0xBu || (unsigned __int8)(*(_BYTE *)i - 13) <= 1u) && (*((_BYTE *)i + 1) & 8) == 0 )
            {
              v28 = i[1];
              v29 = v44;
              if ( v28 < 0 )
                v28 |= *v44;
              if ( (v28 & 0x40000000) != 0 )
                v28 |= v44[1];
              if ( (v28 & 0x20000000) != 0 )
                v28 |= v44[2];
              if ( (v28 & 0x10000000) != 0 )
                v28 |= v44[3];
              v30 = v28 & 0xFFFFFFF;
              i[1] = v30;
              v31 = *(unsigned __int8 *)i;
              if ( (unsigned __int8)v31 <= 0xAu && (v32 = 1651, _bittest(&v32, v31)) )
                v33 = v29[3];
              else
                v33 = v29[3] | 0x1000000;
              i[1] = v30 & v33;
            }
            *((_BYTE *)i + 1) &= ~a4;
LABEL_29:
            ++Acl->AceCount;
LABEL_30:
            i = (int *)((char *)i + (unsigned int)v27);
LABEL_31:
            v25 = v42;
            v24 += v27;
            v15 = v45;
            *(_DWORD *)&v41[3] = v24;
            goto LABEL_32;
          }
        }
        else
        {
          v14 = 1;
        }
        goto LABEL_54;
      }
      v35 = 0;
      *(_DWORD *)&v41[7] = 0;
      LODWORD(v27) = 0;
      v41[1] = 0;
      v43 = i;
      v36 = a10 && (v23[1] & 3) != 0;
      if ( (v23[1] & 8) != 0 )
        goto LABEL_44;
      v41[0] = 0;
      if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                               v23,
                               v49,
                               v48,
                               v47,
                               v17,
                               0LL,
                               0,
                               (__int64)&v43,
                               (__int64)&v41[7],
                               (__int64)Acl,
                               0LL,
                               (__int64)&v41[1],
                               (__int64)v41) )
        return 3221225597LL;
      v35 = *(_DWORD *)&v41[7];
      LODWORD(v27) = *(_DWORD *)&v41[7];
      if ( v41[0] )
      {
        v14 = 1;
        goto LABEL_44;
      }
      if ( v14 || !*(_DWORD *)&v41[7] )
      {
LABEL_44:
        v37 = a4;
      }
      else
      {
        v37 = a4;
        *((_BYTE *)i + 1) &= ~a4;
        v35 = *(_DWORD *)&v41[7];
      }
      if ( !v36 )
        goto LABEL_59;
      v39 = *(_DWORD *)(v23 + 10);
      v52 = 0;
      v53 = 768;
      if ( !v39 )
        v39 = *((unsigned __int16 *)v23 + 7) - v53;
      if ( v35 && !v41[1] )
      {
        v24 = *(_DWORD *)&v41[3];
        if ( !v14 )
        {
          *((_BYTE *)i + 1) = ~v37 & (*((_BYTE *)i + 1) | v23[1] & 0x1F);
          goto LABEL_30;
        }
        goto LABEL_54;
      }
      if ( *v23 > 8u || *((_DWORD *)v23 + 1) || !v39 )
      {
        LODWORD(v27) = *((unsigned __int16 *)v23 + 1) + (_DWORD)v27;
        if ( (unsigned int)v27 > 0xFFFF )
          return 3221225597LL;
        if ( *((unsigned __int16 *)v23 + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v43 )
        {
          v14 = 1;
        }
        else if ( !v14 )
        {
          memmove(v43, v23, *((unsigned __int16 *)v23 + 1));
          v24 = *(_DWORD *)&v41[3];
          *((_BYTE *)v43 + 1) |= 8u;
          *((_BYTE *)v43 + 1) &= ~a4;
          goto LABEL_29;
        }
      }
      else
      {
LABEL_59:
        if ( !v14 )
        {
          v24 = *(_DWORD *)&v41[3];
          goto LABEL_30;
        }
      }
      v24 = *(_DWORD *)&v41[3];
LABEL_54:
      i = (int *)((char *)Acl + Acl->AclSize);
      goto LABEL_31;
    }
    if ( v22 == 3 )
    {
      if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
        break;
      v25 = v42;
      v17 = (__int64)v44;
      goto LABEL_9;
    }
LABEL_33:
    ++v25;
    v17 = (__int64)v44;
    v23 += *((unsigned __int16 *)v23 + 1);
    v18 = v50;
  }
  if ( v24 <= 0xFFFF )
  {
    *v51 = v24;
    return v14 != 0 ? 0xC0000023 : 0;
  }
  return 3221225597LL;
}
