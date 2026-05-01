/*
 * XREFs of _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801DF758
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1801E510C (--1-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 48LL;
  return std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(*(_QWORD *)(a2 + 80));
}
