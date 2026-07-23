/*
 * XREFs of EmpParseTargetRules @ 0x140C19B08
 * Callers:
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x140445014 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404477EC (EmpSearchRuleDatabase.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140C18244 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140C182F0 (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140C197EC (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetKeyName @ 0x140C1A21C (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140C1A254 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140C1A2CC (CmpGetSectionLineIndexValueCount.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int SectionLineCount; // eax
  unsigned int i; // ebx
  __int64 KeyName; // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi
  int v8; // eax
  int v9; // ebp
  void *v10; // r14
  _QWORD *v11; // r13
  int v12; // r8d
  unsigned int v13; // r12d
  void *Pool2; // rax
  void *v15; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // edi
  _BYTE *SectionLineIndex; // rax
  __int64 v19; // rax
  unsigned int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+44h] [rbp-54h] BYREF
  unsigned int SectionLineIndexValueCount; // [rsp+48h] [rbp-50h]
  unsigned int v24; // [rsp+4Ch] [rbp-4Ch]
  int GuidFromName; // [rsp+50h] [rbp-48h]
  GUID v26; // [rsp+58h] [rbp-40h] BYREF

  v26 = 0LL;
  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  v21 = SectionLineCount;
  if ( SectionLineCount )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= SectionLineCount )
        return v2;
      v2 = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", i);
      if ( KeyName )
      {
        GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v26);
        v2 = GuidFromName;
        if ( GuidFromName >= 0 )
        {
          v6 = EmpSearchRuleDatabase(&v26);
          v7 = (__int64)v6;
          if ( v6 )
          {
            v8 = *((_DWORD *)v6 + 10);
            v9 = 0;
            v10 = 0LL;
            v22 = 0;
            if ( !(*(_DWORD *)(v7 + 44) + v8) )
              goto LABEL_20;
            SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "TargetRuleDef", i);
            if ( !SectionLineIndexValueCount )
              goto LABEL_5;
            v11 = EmpSearchTargetRuleList(v7);
            v13 = v12 * (*(_DWORD *)(v7 + 44) + *(_DWORD *)(v7 + 40));
            if ( v11 )
            {
              v13 += *((_DWORD *)v11 + 6);
              Pool2 = (void *)ExAllocatePool2(0x100uLL, 4LL * v13, 0x74694D45uLL);
              v10 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              memmove(Pool2, (const void *)v11[2], 4LL * *((unsigned int *)v11 + 6));
              v9 = *((_DWORD *)v11 + 6);
              v15 = (void *)v11[2];
              v22 = v9;
              ExFreePoolWithTag(v15, 0x74694D45u);
            }
            else
            {
              v10 = (void *)ExAllocatePool2(0x100uLL, 4LL * v13, 0x74694D45uLL);
              if ( !v10 )
                return (unsigned int)-1073741670;
            }
            v24 = 0;
            v16 = SectionLineIndexValueCount;
            if ( SectionLineIndexValueCount )
            {
              v17 = v24;
              do
              {
                SectionLineIndex = (_BYTE *)CmpGetSectionLineIndex(a1, "TargetRuleDef", i, v17);
                EmpParseTargetRuleStringIndexList(
                  a1,
                  SectionLineIndex,
                  *(_DWORD *)(v7 + 40),
                  *(_DWORD *)(v7 + 44),
                  (__int64)v10,
                  v13,
                  &v22);
                ++v17;
              }
              while ( v17 < v16 );
              v2 = GuidFromName;
              v9 = v22;
            }
            if ( v9 )
            {
LABEL_20:
              v19 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x74694D45uLL);
              *(_DWORD *)v19 = 0;
              ++EmpNumberOfTargetRules;
              *(_QWORD *)(v19 + 8) = v7;
              *(_QWORD *)(v19 + 16) = v10;
              *(_DWORD *)(v19 + 24) = v9;
              *(_QWORD *)(v19 + 32) = EmpTargetRuleListHead;
              EmpTargetRuleListHead = v19 + 32;
            }
            else
            {
              ExFreePoolWithTag(v10, 0x74694D45u);
            }
          }
        }
      }
LABEL_5:
      SectionLineCount = v21;
    }
  }
  return v2;
}
