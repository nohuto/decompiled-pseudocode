/*
 * XREFs of _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$7 @ 0x1802BC0A3
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 48));
  }
}
