/*
 * XREFs of CarDeregisterRuleClassConfiguration @ 0x140614E20
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     CarRegisterRuleClassConfiguration @ 0x140615500 (CarRegisterRuleClassConfiguration.c)
 * Callees:
 *     CarDeleteRuleOverrideEntry @ 0x140614D8C (CarDeleteRuleOverrideEntry.c)
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x140614F2C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeregisterRuleClassConfiguration(__int64 a1)
{
  __int64 RuleClassConfigurationEntryByRuleClassId; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, (unsigned int)a1);
  v2 = (_QWORD *)RuleClassConfigurationEntryByRuleClassId;
  if ( RuleClassConfigurationEntryByRuleClassId )
  {
    v3 = (_QWORD *)(RuleClassConfigurationEntryByRuleClassId + 88);
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
LABEL_11:
      __fastfail(3u);
    *v5 = v4;
    v6 = v2 + 9;
    *(_QWORD *)(v4 + 8) = v5;
    while ( (_QWORD *)*v6 != v6 )
    {
      v7 = (_QWORD *)v2[10];
      if ( (_QWORD *)*v7 != v6 )
        goto LABEL_11;
      v8 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v8 != v7 )
        goto LABEL_11;
      v2[10] = v8;
      *v8 = v6;
      v9 = v7 - 8;
      CarDeleteRuleOverrideEntry((void **)&v9);
    }
    ExFreePoolWithTag(v2, 0x4E726143u);
  }
}
