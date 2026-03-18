/*
 * XREFs of ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14010CB0C
 * Callers:
 *     ?ApplyDeBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x14010CAD0 (-ApplyDeBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z.c)
 *     ?ApplyBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x14010CAF0 (-ApplyBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x140046170 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x14010CBC0 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14010CC90 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall GroupedFGBoostProp::applyBoostIfNeeded(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  char v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v8,
    *(_QWORD *)(a1 + 144));
  v7 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v7) )
  {
    v5 = v7;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 24); i = (unsigned int)(i + 1) )
      GroupedFGBoostProp::doBoost(v4, *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * i), a2);
  }
  if ( v10 && v11 )
  {
    if ( v9 )
      RIMUnlockExclusive(v9);
  }
}
