/*
 * XREFs of EmpParseRuleExpression @ 0x140C18900
 * Callers:
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C18344 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x140C183E8 (EmpInfParseSearchDependencyList.c)
 *     EmpParseRuleTerm @ 0x140C18E50 (EmpParseRuleTerm.c)
 *     EmpRuleParserStackPop @ 0x140C19D64 (EmpRuleParserStackPop.c)
 *     EmpRuleParserStackPush @ 0x140C19DBC (EmpRuleParserStackPush.c)
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseRuleExpression(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // r14
  void *v7; // r13
  _BYTE *ValueFromSectionAndKeyName; // r12
  __int64 Pool2; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // edx
  int v15; // r9d
  __int64 i; // r8
  unsigned int j; // r8d
  char v18; // r11
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // r12
  _QWORD *v27; // rax
  int v28; // edx
  _QWORD *v29; // rax
  _QWORD *v30; // r12
  _QWORD *v31; // rax
  void *v32; // rcx
  void *v33; // rcx
  ULONG v34; // edx
  void *v35; // rcx
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  int v45; // [rsp+30h] [rbp-20h]
  unsigned int v46; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v47; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v48[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v50; // [rsp+A8h] [rbp+58h] BYREF

  v46 = 0;
  v48[0] = 0LL;
  v47 = 0LL;
  v50 = 0;
  v5 = 0;
  v45 = 0;
  v6 = 0LL;
  v7 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, (__int64)"Rule", a2, a4, &v46);
  if ( !ValueFromSectionAndKeyName )
  {
    v5 = -1073741275;
    goto LABEL_73;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x74734D45uLL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  do
  {
    if ( *ValueFromSectionAndKeyName != 37 )
    {
      if ( *ValueFromSectionAndKeyName == 38 )
        goto LABEL_9;
      if ( *ValueFromSectionAndKeyName != 63 )
      {
        if ( *ValueFromSectionAndKeyName != 124 )
          goto LABEL_55;
LABEL_9:
        if ( *(_DWORD *)v10 < 2u )
          goto LABEL_55;
        v6 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x74734D45uLL);
        if ( !v6
          || (*(_QWORD *)(v6 + 8) = ExAllocatePool2(0x100uLL, 0x20uLL, 0x74734D45uLL),
              v11 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x74734D45uLL),
              v12 = *(_QWORD *)(v6 + 8),
              *(_QWORD *)(v6 + 32) = v11,
              !v12)
          || !v11 )
        {
LABEL_54:
          v5 = -1073741670;
          goto LABEL_56;
        }
        *(_BYTE *)v6 = *ValueFromSectionAndKeyName;
        *(_DWORD *)(v12 + 16) = 0;
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v6 + 32) + 16LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v6 + 32) + 24LL) = 0LL;
        if ( !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v10,
                                 *(_QWORD *)(v6 + 32),
                                 (unsigned int)*(_QWORD *)(v6 + 32) + 8,
                                 (int)v6 + 48,
                                 v6 + 40)
          || !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v10,
                                 *(_QWORD *)(v6 + 8),
                                 (unsigned int)*(_QWORD *)(v6 + 8) + 8,
                                 (int)v6 + 24,
                                 v6 + 16) )
        {
          goto LABEL_53;
        }
        EmpRuleParserStackPush((_DWORD)v10, 2, v6, 0, 0);
        goto LABEL_49;
      }
    }
    v5 = EmpParseRuleTerm(a1, (_DWORD)ValueFromSectionAndKeyName, (unsigned int)v48, (unsigned int)&v47, (__int64)&v50);
    if ( v5 < 0 )
      goto LABEL_56;
    v13 = v48[0];
    if ( *ValueFromSectionAndKeyName == 63 )
    {
      v14 = *(_DWORD *)(v48[0] + 56LL);
      v15 = *(_DWORD *)(v48[0] + 60LL);
    }
    else
    {
      v14 = *(_DWORD *)(v48[0] + 40LL);
      v15 = *(_DWORD *)(v48[0] + 44LL);
    }
    if ( v15 + v14 > v50 )
      goto LABEL_55;
    for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(v47 + 4 * i) >= *(_DWORD *)(a3 + 40) )
        goto LABEL_55;
    }
    for ( j = v14; j < v15 + v14; ++j )
    {
      if ( *(_DWORD *)(v47 + 4LL * j) >= *(_DWORD *)(a3 + 44) )
        goto LABEL_55;
    }
    v18 = *ValueFromSectionAndKeyName;
    v19 = v15 + v14;
    v20 = v15 + v14;
    while ( (unsigned int)v19 < v50 )
    {
      v21 = *(unsigned int *)(v47 + 4 * v19);
      if ( (unsigned int)v21 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_55;
      v22 = (unsigned int)(v19 - v20);
      v23 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v21);
      if ( !(v18 == 63
           ? v23 == *(_QWORD *)(v48[0] + 8 * v22 + 72)
           : v23 == *(_QWORD *)(*(_QWORD *)(v48[0] + 56LL) + 8 * v22)) )
        goto LABEL_55;
      v19 = (unsigned int)(v19 + 1);
    }
    if ( v18 == 63 )
    {
      v25 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x74694D45uLL);
      if ( !v25 )
        goto LABEL_54;
      *v25 = v13;
      v26 = (_QWORD *)(v13 + 48);
      v25[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v25 + 1;
      if ( !EmpInfParseSearchDependencyList((_QWORD **)(v13 + 48), a3) )
      {
        v27 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74694D45uLL);
        if ( !v27 )
          goto LABEL_54;
        *v27 = a3;
        v27[1] = *v26;
        *v26 = v27 + 1;
      }
      v28 = 0;
    }
    else
    {
      v29 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74694D45uLL);
      if ( !v29 )
        goto LABEL_54;
      *v29 = v13;
      v30 = (_QWORD *)(v13 + 32);
      v29[1] = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 72) = v29 + 1;
      if ( !EmpInfParseSearchDependencyList((_QWORD **)(v13 + 32), a3) )
      {
        v31 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74694D45uLL);
        if ( !v31 )
          goto LABEL_54;
        *v31 = a3;
        v31[1] = *v30;
        *v30 = v31 + 1;
      }
      v28 = 1;
    }
    EmpRuleParserStackPush((_DWORD)v10, v28, v13, v47, v50);
LABEL_49:
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v46, (unsigned int)++v45);
  }
  while ( ValueFromSectionAndKeyName );
  if ( *(_DWORD *)v10 == 1 )
  {
    v7 = (void *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x74694D45uLL);
    if ( (unsigned __int8)EmpRuleParserStackPop((_DWORD)v10, (_DWORD)v7, (int)v7 + 8, (int)v7 + 24, (__int64)v7 + 16) )
    {
      *(_QWORD *)(a3 + 96) = v7;
      goto LABEL_56;
    }
LABEL_53:
    v5 = -1073741275;
    goto LABEL_56;
  }
LABEL_55:
  v5 = -1073741811;
LABEL_56:
  if ( v10 )
  {
    while ( v10[1] )
      EmpRuleParserStackPop((_DWORD)v10, (unsigned int)&v46, (unsigned int)&v47, (unsigned int)v48, (__int64)&v50);
    ExFreePoolWithTag(v10, 0x74734D45u);
  }
  if ( v5 < 0 )
  {
    if ( v6 )
    {
      v32 = *(void **)(v6 + 8);
      if ( v32 )
        ExFreePoolWithTag(v32, 0x74734D45u);
      v33 = *(void **)(v6 + 32);
      if ( v33 )
        ExFreePoolWithTag(v33, 0x74734D45u);
      v34 = 1953713477;
      v35 = (void *)v6;
      goto LABEL_72;
    }
LABEL_73:
    while ( 1 )
    {
      v39 = *(_QWORD **)(a3 + 72);
      if ( !v39 )
        break;
      v36 = v39 - 1;
      *(_QWORD *)(a3 + 72) = *v39;
      v37 = *(v39 - 1);
      v38 = *(_QWORD **)(v37 + 32);
      if ( *(v38 - 1) == a3 )
      {
        if ( v38 )
          *(_QWORD *)(v37 + 32) = *v38;
        ExFreePoolWithTag(v38 - 1, 0x74694D45u);
      }
      v34 = 1953058117;
      v35 = v36;
LABEL_72:
      ExFreePoolWithTag(v35, v34);
    }
    while ( 1 )
    {
      v43 = *(_QWORD **)(a3 + 64);
      if ( !v43 )
        break;
      v40 = v43 - 1;
      *(_QWORD *)(a3 + 64) = *v43;
      v41 = *(v43 - 1);
      v42 = *(_QWORD **)(v41 + 48);
      if ( *(v42 - 1) == a3 )
      {
        if ( v42 )
          *(_QWORD *)(v41 + 48) = *v42;
        ExFreePoolWithTag(v42 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v40, 0x74694D45u);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x74694D45u);
  }
  return (unsigned int)v5;
}
