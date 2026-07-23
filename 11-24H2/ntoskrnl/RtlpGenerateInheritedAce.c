/*
 * XREFs of RtlpGenerateInheritedAce @ 0x14090C760
 * Callers:
 *     RtlpInheritAcl2 @ 0x14090D650 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpCompareKnownObjectAces @ 0x1406F8DA4 (RtlpCompareKnownObjectAces.c)
 *     RtlpIsDuplicateAce @ 0x14090C5D0 (RtlpIsDuplicateAce.c)
 *     RtlpCopyEffectiveAce @ 0x14090D110 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // ebx
  char v15; // r12
  int v17; // esi
  unsigned __int8 *v18; // r15
  int v19; // r10d
  bool v20; // r14
  unsigned int v21; // r8d
  unsigned __int8 *v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int8 *v24; // r9
  unsigned int i; // ecx
  unsigned __int64 v26; // rax
  unsigned __int16 *v27; // rcx
  char v28; // al
  unsigned __int8 v29; // cl
  int v30; // eax
  int v31; // r15d
  int v32; // r12d
  int v33; // r14d
  __int64 v34; // rcx
  unsigned __int8 v35; // r9
  __int64 v36; // rdx
  unsigned int v37; // r13d
  bool v38; // zf
  char v40; // al
  unsigned int v41; // eax
  unsigned __int8 v42; // al
  unsigned __int8 v43; // cl
  int v44; // eax
  char v45; // [rsp+80h] [rbp-69h] BYREF
  bool v46; // [rsp+81h] [rbp-68h]
  char v47; // [rsp+82h] [rbp-67h]
  char v48; // [rsp+83h] [rbp-66h] BYREF
  int v49; // [rsp+84h] [rbp-65h] BYREF
  __int64 v50; // [rsp+90h] [rbp-59h] BYREF
  unsigned __int8 *v51; // [rsp+98h] [rbp-51h]
  void *Src; // [rsp+A0h] [rbp-49h]
  __int64 v53; // [rsp+A8h] [rbp-41h]
  __int64 v54; // [rsp+B0h] [rbp-39h]
  __int64 v55; // [rsp+B8h] [rbp-31h]
  __int64 v56; // [rsp+C0h] [rbp-29h]
  __int64 v57; // [rsp+C8h] [rbp-21h]
  __int64 v58; // [rsp+D0h] [rbp-19h]
  __int64 v59; // [rsp+D8h] [rbp-11h]
  int *v60; // [rsp+E0h] [rbp-9h]
  unsigned int *v61; // [rsp+E8h] [rbp-1h]

  v14 = 0;
  v15 = 0;
  v58 = a5;
  v17 = 0;
  v57 = a6;
  v18 = 0LL;
  v19 = 0;
  v56 = a7;
  v55 = a8;
  v54 = a9;
  v60 = a11;
  v61 = a13;
  v59 = a4;
  v47 = a3;
  Src = a1;
  *a14 = 0;
  v53 = (__int64)a14;
  v49 = 0;
  v48 = 0;
  v45 = 0;
  v20 = 0;
  if ( a2 )
  {
    v40 = a1[1];
    if ( (v40 & 4) == 0 && ((v40 & 1) != 0 || (v40 & 2) != 0) )
      v20 = 1;
  }
  v21 = *(unsigned __int16 *)(a12 + 4);
  v22 = (unsigned __int8 *)(a12 + 8);
  v23 = a12 + 8;
  v46 = v20;
  v24 = 0LL;
  v50 = 0LL;
  for ( i = 0; ; ++i )
  {
    v26 = a12 + *(unsigned __int16 *)(a12 + 2);
    if ( i >= v21 )
      break;
    if ( v23 >= v26 )
      return 3221225597LL;
    v23 += *(unsigned __int16 *)(v23 + 2);
  }
  if ( v23 <= v26 )
  {
    v24 = (unsigned __int8 *)v23;
    v50 = v23;
  }
  if ( !v24 )
    return 3221225597LL;
  v27 = (unsigned __int16 *)Src;
  v28 = *((_BYTE *)Src + 1);
  if ( !a2 )
  {
    if ( (v28 & 1) != 0 )
      goto LABEL_10;
LABEL_34:
    v37 = 0;
    goto LABEL_38;
  }
  if ( (v28 & 2) == 0 )
    goto LABEL_34;
LABEL_10:
  v18 = v24;
  v51 = v24;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           v58,
                           v57,
                           v56,
                           v55,
                           v54,
                           a10,
                           (__int64)&v50,
                           (__int64)&v49,
                           a12,
                           v53,
                           (__int64)&v48,
                           (__int64)&v45) )
    return 3221225597LL;
  v19 = v49;
  if ( v45 || !v49 || *v18 == 4 || *v18 > 8u || (v29 = v18[1], (v29 & 0x10) == 0) )
  {
LABEL_36:
    v24 = (unsigned __int8 *)v50;
    v37 = 0;
    goto LABEL_37;
  }
  v30 = *((_DWORD *)v18 + 1);
  v31 = v30;
  v32 = v30;
  v33 = 0;
  if ( (v29 & 2) == 0 )
    v31 = 0;
  if ( (v29 & 1) == 0 )
    v32 = 0;
  if ( (v29 & 8) == 0 )
    v33 = v30;
  while ( 1 )
  {
    if ( v17 >= *(unsigned __int16 *)(a12 + 4) - 1 )
    {
      v19 = v49;
      v20 = v46;
      v18 = v51;
      goto LABEL_36;
    }
    v34 = *v22;
    if ( (unsigned __int8)v34 <= 8u && (_BYTE)v34 != 4 )
    {
      v35 = v22[1];
      if ( (v35 & 0x10) != 0 )
      {
        if ( (unsigned __int8)v34 >= 5u )
        {
          if ( (unsigned __int8)(*v51 - 5) > 3u || !RtlpCompareKnownObjectAces(v22, v51) )
            goto LABEL_31;
        }
        else
        {
          v36 = *v51;
          if ( (unsigned __int8)(v36 - 5) <= 3u
            || *((_BYTE *)RtlBaseAceType + v36) != *((_BYTE *)RtlBaseAceType + v34)
            || *((_BYTE *)RtlIsSystemAceType + v36) && ((v51[1] ^ v35) & 0xC0) != 0
            || !RtlEqualSid(v51 + 8, v22 + 8) )
          {
            goto LABEL_31;
          }
        }
        v43 = v22[1];
        v44 = ~*((_DWORD *)v22 + 1);
        if ( (v43 & 2) != 0 )
          v31 &= v44;
        if ( (v43 & 1) != 0 )
          v32 &= v44;
        if ( (v43 & 8) == 0 )
          v33 &= v44;
        if ( !(v31 | v32 | v33) )
          break;
      }
    }
LABEL_31:
    ++v17;
    v22 += *((unsigned __int16 *)v22 + 1);
  }
  v18 = v51;
  v19 = 0;
  v37 = v49;
  v24 = v51;
  --*(_WORD *)(a12 + 4);
  v20 = v46;
  v50 = (__int64)v24;
  v49 = 0;
LABEL_37:
  v15 = v48;
  v17 = v19;
  v27 = (unsigned __int16 *)Src;
LABEL_38:
  if ( v20 )
  {
    if ( v19 && !v15 )
    {
      if ( !v45 )
      {
        v42 = v18[1] | *((_BYTE *)v27 + 1) & 3;
        v18[1] = v42;
        if ( v47 )
          v18[1] = v42 | 0x10;
      }
      goto LABEL_39;
    }
    if ( *(_BYTE *)v27 <= 8u && !*((_DWORD *)v27 + 1) )
      goto LABEL_39;
    v17 += v27[1];
    if ( (unsigned int)v17 <= 0xFFFF )
    {
      if ( v27[1] > a12 + *(unsigned __int16 *)(a12 + 2) - (_QWORD)v24 )
      {
        v45 = 1;
      }
      else if ( !v45 )
      {
        memmove(v24, v27, v27[1]);
        *(_BYTE *)(v50 + 1) |= 8u;
        ++*(_WORD *)(a12 + 4);
        if ( v47 )
        {
          *(_BYTE *)(v50 + 1) |= 0x10u;
          if ( RtlpIsDuplicateAce(a12, (unsigned __int8 *)v50) )
          {
            --*(_WORD *)(a12 + 4);
            v41 = *((unsigned __int16 *)Src + 1);
            if ( v37 <= v41 )
              v37 = *((unsigned __int16 *)Src + 1);
            v17 -= v41;
          }
        }
      }
      goto LABEL_39;
    }
    return 3221225597LL;
  }
LABEL_39:
  v38 = v45 == 0;
  *v60 = v17;
  *v61 = v37;
  if ( !v38 )
    return (unsigned int)-1073741789;
  return v14;
}
