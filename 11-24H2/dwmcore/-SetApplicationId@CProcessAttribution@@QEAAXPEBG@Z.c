/*
 * XREFs of ?SetApplicationId@CProcessAttribution@@QEAAXPEBG@Z @ 0x1801E6D40
 * Callers:
 *     ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x1801A72A8 (-SetApplicationId@CChannelContext@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1801E6E24 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 */

void __fastcall CProcessAttribution::SetApplicationId(CProcessAttribution *this, const unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v4,
    *(_QWORD *)qword_1803FAFC0,
    *((_QWORD *)qword_1803FAFC0 + 1),
    (char *)this + 16);
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  std::wstring::assign((void *)(*(_QWORD *)v4 + 128LL));
}
