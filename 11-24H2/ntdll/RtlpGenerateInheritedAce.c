/*
 * XREFs of RtlpGenerateInheritedAce @ 0x1800C3BC0
 * Callers:
 *     RtlpInheritAcl2 @ 0x1800C3540 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x1800C4070 (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x1800C4D30 (RtlpIsDuplicateAce.c)
 *     RtlpCompareKnownObjectAces @ 0x1800C4ECC (RtlpCompareKnownObjectAces.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *a1,
        char a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // edi
  char v15; // si
  unsigned __int8 *v17; // r11
  unsigned int v18; // r9d
  bool v19; // r12
  unsigned int v20; // r8d
  unsigned __int8 *v21; // r13
  unsigned __int16 *v22; // rdx
  unsigned __int8 *v23; // r10
  unsigned int i; // eax
  unsigned __int16 *v25; // rcx
  char v26; // al
  unsigned __int8 v27; // cl
  int v28; // r15d
  int v29; // r12d
  int v30; // r14d
  int v31; // esi
  __int64 v32; // rcx
  unsigned __int8 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned int v36; // r14d
  char v38; // al
  unsigned __int8 v39; // al
  unsigned __int8 v40; // cl
  int v41; // eax
  unsigned int v42; // eax
  char v43; // [rsp+80h] [rbp-69h] BYREF
  bool v44; // [rsp+81h] [rbp-68h]
  __int16 v45; // [rsp+82h] [rbp-67h] BYREF
  unsigned int v46; // [rsp+84h] [rbp-65h] BYREF
  void *v47; // [rsp+90h] [rbp-59h] BYREF
  unsigned __int8 *v48; // [rsp+98h] [rbp-51h]
  void *Src; // [rsp+A0h] [rbp-49h]
  __int64 v50; // [rsp+A8h] [rbp-41h]
  __int64 v51; // [rsp+B0h] [rbp-39h]
  __int64 v52; // [rsp+B8h] [rbp-31h]
  __int64 v53; // [rsp+C0h] [rbp-29h]
  __int64 v54; // [rsp+C8h] [rbp-21h]
  __int64 v55; // [rsp+D0h] [rbp-19h]
  unsigned int *v56; // [rsp+D8h] [rbp-11h]
  unsigned int *v57; // [rsp+E0h] [rbp-9h]

  v14 = 0;
  Src = a1;
  v15 = 0;
  v54 = a5;
  v17 = 0LL;
  v53 = a6;
  v52 = a7;
  v51 = a8;
  v50 = a9;
  v56 = a11;
  v55 = a4;
  v18 = 0;
  v57 = a13;
  v45 = a3;
  v46 = 0;
  v43 = 0;
  *a14 = 0;
  v19 = 0;
  if ( a2 )
  {
    v38 = a1[1];
    if ( (v38 & 4) == 0 && ((v38 & 1) != 0 || (v38 & 2) != 0) )
      v19 = 1;
  }
  v20 = *(unsigned __int16 *)(a12 + 4);
  v21 = (unsigned __int8 *)(a12 + 8);
  v22 = (unsigned __int16 *)(a12 + 8);
  v44 = v19;
  v23 = 0LL;
  v47 = 0LL;
  for ( i = 0; i < v20; ++i )
  {
    if ( (unsigned __int64)v22 >= a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
      return 3221225597LL;
    v22 = (unsigned __int16 *)((char *)v22 + v22[1]);
  }
  if ( (unsigned __int64)v22 <= a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
  {
    v23 = (unsigned __int8 *)v22;
    v47 = v22;
  }
  if ( !v23 )
    return 3221225597LL;
  v25 = (unsigned __int16 *)Src;
  v26 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v26 & 2) != 0 )
      goto LABEL_12;
LABEL_41:
    v36 = 0;
    goto LABEL_38;
  }
  if ( (v26 & 1) == 0 )
    goto LABEL_41;
LABEL_12:
  v48 = v23;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           v54,
                           v53,
                           v52,
                           v51,
                           v50,
                           a10,
                           (__int64)&v47,
                           (__int64)&v46,
                           a12,
                           (__int64)a14,
                           (__int64)&v45 + 1,
                           (__int64)&v43) )
    return 3221225597LL;
  v18 = v46;
  v17 = v48;
  if ( v43 || !v46 || !v48 || *v48 > 8u || *v48 == 4 || (v27 = v48[1], (v27 & 0x10) == 0) )
  {
LABEL_36:
    v23 = (unsigned __int8 *)v47;
    v36 = 0;
    goto LABEL_37;
  }
  v28 = *((_DWORD *)v48 + 1);
  v29 = v28;
  v30 = 0;
  if ( (v27 & 2) == 0 )
    v28 = 0;
  v31 = 0;
  if ( (v27 & 1) == 0 )
    v29 = 0;
  if ( (v27 & 8) == 0 )
    v30 = *((_DWORD *)v48 + 1);
  while ( 1 )
  {
    if ( v31 >= *(unsigned __int16 *)(a12 + 4) - 1 )
    {
      v18 = v46;
      v19 = v44;
      goto LABEL_36;
    }
    v32 = *v21;
    if ( (unsigned __int8)v32 > 8u )
      goto LABEL_34;
    if ( (_BYTE)v32 == 4 )
      goto LABEL_34;
    v33 = v21[1];
    if ( (v33 & 0x10) == 0 )
      goto LABEL_34;
    v34 = *v17;
    if ( (unsigned __int8)v32 < 5u )
      break;
    if ( (unsigned __int8)(v34 - 5) <= 3u )
    {
      if ( !(unsigned __int8)RtlpCompareKnownObjectAces(v21, v17, 0LL, 0LL) )
        goto LABEL_43;
      goto LABEL_58;
    }
LABEL_34:
    ++v31;
    v21 += *((unsigned __int16 *)v21 + 1);
  }
  if ( (unsigned __int8)(v34 - 5) <= 3u
    || RtlBaseAceType[v34] != RtlBaseAceType[v32]
    || RtlIsSystemAceType[v34] && ((v17[1] ^ v33) & 0xC0) != 0 )
  {
    goto LABEL_34;
  }
  v35 = *((unsigned __int16 *)v17 + 4);
  if ( (_WORD)v35 != *((_WORD *)v21 + 4) )
    goto LABEL_34;
  if ( memcmp(v17 + 8, v21 + 8, 4 * (v35 >> 8) + 8) )
  {
LABEL_43:
    v17 = v48;
    goto LABEL_34;
  }
LABEL_58:
  v40 = v21[1];
  v41 = ~*((_DWORD *)v21 + 1);
  if ( (v40 & 2) != 0 )
    v28 &= v41;
  if ( (v40 & 1) != 0 )
    v29 &= v41;
  if ( (v40 & 8) == 0 )
    v30 &= v41;
  if ( v28 | v29 | v30 )
    goto LABEL_43;
  v17 = v48;
  v18 = 0;
  v36 = v46;
  v23 = v48;
  --*(_WORD *)(a12 + 4);
  v19 = v44;
  v47 = v23;
  v46 = 0;
LABEL_37:
  v15 = HIBYTE(v45);
  v14 = v18;
  v25 = (unsigned __int16 *)Src;
LABEL_38:
  if ( !v19 )
  {
LABEL_39:
    *v56 = v14;
    *v57 = v36;
    return v43 != 0 ? 0xC0000023 : 0;
  }
  if ( v18 && !v15 )
  {
    if ( !v43 )
    {
      v39 = v17[1] | *((_BYTE *)v25 + 1) & 3;
      v17[1] = v39;
      if ( (_BYTE)v45 )
        v17[1] = v39 | 0x10;
    }
    goto LABEL_39;
  }
  if ( *(_BYTE *)v25 <= 8u && !*((_DWORD *)v25 + 1) )
    goto LABEL_39;
  v14 += v25[1];
  if ( v14 <= 0xFFFF )
  {
    if ( v25[1] > a12 + *(unsigned __int16 *)(a12 + 2) - (_QWORD)v23 )
    {
      v43 = 1;
    }
    else if ( !v43 )
    {
      memmove(v23, v25, v25[1]);
      *((_BYTE *)v47 + 1) |= 8u;
      ++*(_WORD *)(a12 + 4);
      if ( (_BYTE)v45 )
      {
        *((_BYTE *)v47 + 1) |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v47) )
        {
          --*(_WORD *)(a12 + 4);
          v42 = *((unsigned __int16 *)Src + 1);
          if ( v36 <= v42 )
            v36 = *((unsigned __int16 *)Src + 1);
          v14 -= v42;
        }
      }
    }
    goto LABEL_39;
  }
  return 3221225597LL;
}
