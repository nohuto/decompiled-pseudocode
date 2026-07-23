/*
 * XREFs of GetOperandValue @ 0x140864998
 * Callers:
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcstoxq @ 0x1404FE264 (wcstoxq.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpReAlloc @ 0x140796D08 (SddlpReAlloc.c)
 *     GetBinaryOperandLen @ 0x140797088 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1407970E4 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1407971FC (GetNextNoneWhiteSpace.c)
 *     GetStringOperandValue @ 0x140864028 (GetStringOperandValue.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 *     FreeOperandValue @ 0x140864B04 (FreeOperandValue.c)
 *     IsValueSizeFixed @ 0x140864B3C (IsValueSizeFixed.c)
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     LocalGetSidForString @ 0x14086B0D4 (LocalGetSidForString.c)
 */

__int64 __fastcall GetOperandValue(
        wint_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        char a6,
        unsigned int a7,
        int a8,
        char a9)
{
  unsigned int *v9; // r15
  unsigned int AttributeName; // esi
  char v14; // r13
  __int64 v15; // rax
  PSID v16; // rbx
  unsigned int StringOperandValue; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  wint_t *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  char v24; // r12
  void *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // eax
  unsigned int v29; // r14d
  void *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  wint_t v33; // dx
  char v34; // r14
  __int64 v35; // r14
  bool v36; // zf
  __int64 v37; // rdi
  PSID v38; // rcx
  unsigned int v39; // r13d
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  wint_t *v49; // rdx
  unsigned __int64 v50; // r13
  wint_t v51; // ax
  unsigned __int64 v52; // rax
  __int16 v53; // r15
  __int64 v54; // rax
  unsigned __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // [rsp+58h] [rbp-28h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  wint_t *v59; // [rsp+68h] [rbp-18h] BYREF
  __int64 v60; // [rsp+70h] [rbp-10h] BYREF
  char v62; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  a7 = 0;
  a6 = 0;
  v62 = 0;
  v59 = 0LL;
  AttributeName = 0;
  Sid = 0LL;
  v14 = 0;
  a9 = 0;
  v57 = 0LL;
  v60 = 0LL;
  a8 = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = v15;
  if ( !v15 )
  {
LABEL_13:
    AttributeName = 8;
LABEL_14:
    v16 = 0LL;
    goto LABEL_12;
  }
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1);
    if ( !AttributeName )
    {
LABEL_4:
      v16 = 0LL;
      goto LABEL_5;
    }
    goto LABEL_14;
  }
  if ( *a1 == 34 )
  {
    StringOperandValue = GetStringOperandValue((__int64)a1, a4, v9);
    v16 = 0LL;
    AttributeName = StringOperandValue;
    if ( !StringOperandValue )
      goto LABEL_5;
    goto LABEL_12;
  }
  if ( *a1 == 123 )
  {
    v19 = *a4;
    v20 = 1;
    a7 = 1;
    *(_BYTE *)(v19 + 1) = 80;
    while ( a1[v20] )
    {
      AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
      if ( AttributeName )
        goto LABEL_14;
      v21 = &a1[a7];
      if ( *v21 == 123 )
        goto LABEL_40;
      AttributeName = GetOperandValue((_DWORD)v21, 0, 0, (unsigned int)&v57, (__int64)v9, 0, 0, 0, 0);
      if ( AttributeName )
        goto LABEL_14;
      if ( a3 )
      {
        if ( v14 && v14 != *(_BYTE *)(v57 + 1) )
          goto LABEL_40;
        v14 = *(_BYTE *)(v57 + 1);
      }
      LOBYTE(v22) = *(_BYTE *)(v57 + 1);
      v24 = IsValueSizeFixed(v22);
      v25 = *(void **)(*a4 + 8);
      v26 = v24 != 0 ? 1 : 5;
      if ( v25 )
      {
        v27 = *(_DWORD *)(*a4 + 4);
        v28 = v27 + *(_DWORD *)(v23 + 4);
        if ( v28 < v27 || (v29 = v26 + v28, v26 + v28 < v28) )
        {
LABEL_41:
          AttributeName = 534;
          goto LABEL_14;
        }
        v30 = SddlpReAlloc(v27, v29, v25);
        v31 = *a4;
        *(_QWORD *)(*a4 + 8) = v30;
        if ( !v30 )
          goto LABEL_13;
      }
      else
      {
        v29 = v26 + *(_DWORD *)(v23 + 4);
        if ( v29 < v26 )
          goto LABEL_41;
        v31 = *a4;
        *(_QWORD *)(v31 + 8) = SddlpAlloc(v29);
      }
      v32 = *(_QWORD *)(v31 + 8);
      if ( !v32 )
        goto LABEL_13;
      *(_BYTE *)(*(unsigned int *)(v31 + 4) + v32) = *(_BYTE *)(v57 + 1);
      if ( !v24 )
        *(_DWORD *)(*(unsigned int *)(v31 + 4) + *(_QWORD *)(v31 + 8) + 1LL) = *(_DWORD *)(v57 + 4);
      memmove(
        (void *)(*(_QWORD *)(v31 + 8) + *(unsigned int *)(v31 + 4) + (-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 5),
        *(const void **)(v57 + 8),
        *(unsigned int *)(v57 + 4));
      *(_DWORD *)(v31 + 4) = v29;
      FreeOperandValue(v57);
      v57 = 0LL;
      a7 += *v9;
      AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
      if ( AttributeName )
        goto LABEL_14;
      v33 = a1[a7];
      if ( v33 != 44 )
      {
        v16 = 0LL;
        if ( v33 != 125 )
          goto LABEL_44;
        *v9 = a7 + 1;
        goto LABEL_5;
      }
      v20 = ++a7;
    }
    goto LABEL_4;
  }
  v34 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    a7 = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
    if ( AttributeName )
      goto LABEL_14;
    if ( a1[a7] == 40 )
    {
      v35 = a7 + 1;
      AttributeName = LocalGetSidForString(&a1[v35], &Sid, &v60, &a9);
      if ( AttributeName
        || (a7 = v35 + ((v60 - 2 * v35 - (__int64)a1) >> 1),
            (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v36 = a1[a7] == 41;
        v16 = Sid;
        if ( v36 )
        {
          v37 = *a4;
          v38 = Sid;
          *v9 = a7 + 1;
          *(_BYTE *)(v37 + 1) = 81;
          *(_DWORD *)(v37 + 4) = RtlLengthSid(v38);
          v36 = a9 == 0;
          *(_QWORD *)(v37 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v37 = v36;
          goto LABEL_5;
        }
LABEL_44:
        AttributeName = 1336;
      }
LABEL_12:
      FreeOperandValue(*a4);
      *a4 = 0LL;
      goto LABEL_5;
    }
    goto LABEL_40;
  }
  GetBinaryOperandLen(a1, &a7);
  if ( *a1 == 35 )
  {
    v39 = a7;
    if ( a7 >= 2 )
    {
      v40 = *a4;
      LODWORD(v41) = a7 >> 1;
      *v9 = a7;
      *(_BYTE *)(v40 + 1) = 24;
      *(_DWORD *)(v40 + 4) = v41;
      v42 = SddlpAlloc((unsigned int)v41);
      *(_QWORD *)(*a4 + 8) = v42;
      if ( v42 )
      {
        v43 = (int)(v39 - 1);
        while ( v43 >= 1 )
        {
          if ( !GetDigitFromChar(a1[v43], &a6) || !GetDigitFromChar(a1[v44 - 1], &v62) )
            goto LABEL_13;
          v41 = (unsigned int)(v41 - 1);
          v43 = v45 - 2;
          *(_BYTE *)(v41 + *(_QWORD *)(v46 + 8)) = a6 | (16 * v62);
        }
        goto LABEL_4;
      }
      goto LABEL_13;
    }
LABEL_40:
    AttributeName = 1336;
    goto LABEL_14;
  }
  v47 = a7;
  if ( !a7 )
    goto LABEL_40;
  *v9 = a7;
  v48 = wcstoxq(0LL, a1, &v59, 0, 1, &a8);
  v49 = v59;
  v50 = v48;
  if ( v59 == a1 && !v48 )
    goto LABEL_40;
  if ( v59 != &a1[v47] || a8 )
    goto LABEL_40;
  v51 = *a1;
  if ( *a1 == 45 )
  {
    v52 = wcstoxq(0LL, ++a1, &v59, 0, 1, &a8);
    if ( v52 >= v50 && v52 )
      goto LABEL_40;
    v51 = *a1;
    v53 = 2;
    v49 = v59;
  }
  else if ( v51 == 43 )
  {
    ++a1;
    v53 = 1;
    v51 = *a1;
  }
  else
  {
    v53 = 3;
  }
  if ( v51 == 48 )
  {
    if ( a1 + 1 >= v49 || ((a1[1] - 88) & 0xFFDF) != 0 )
      v34 = 1;
  }
  else
  {
    v34 = 2;
  }
  v54 = *a4;
  *(_BYTE *)(v54 + 1) = 4;
  *(_DWORD *)(v54 + 4) = 10;
  v55 = (unsigned __int64 *)SddlpAlloc(0xAuLL);
  v56 = *a4;
  v16 = 0LL;
  *(_QWORD *)(*a4 + 8) = v55;
  if ( !v55 )
  {
    AttributeName = 8;
    goto LABEL_12;
  }
  *v55 = v50;
  *(_WORD *)(*(_QWORD *)(v56 + 8) + 8LL) = v53;
  *(_BYTE *)(*(_QWORD *)(v56 + 8) + 9LL) = v34;
LABEL_5:
  if ( v57 )
    FreeOperandValue(v57);
  if ( v16 && a9 )
    SddlpFree(v16);
  return AttributeName;
}
