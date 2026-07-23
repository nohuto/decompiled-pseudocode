/*
 * XREFs of KiDecodeTolerableDelayValue @ 0x14046BE58
 * Callers:
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KeCancelTimerInternal @ 0x14046BBF4 (KeCancelTimerInternal.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1405C1FC4 (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiDecodeTolerableDelayValue(unsigned __int8 a1)
{
  int v1; // ebx
  char v2; // r8
  char v3; // cl

  v1 = a1;
  if ( !(unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline() )
    return (unsigned int)(v1 << 18);
  v2 = ((unsigned __int8)v1 >> 3) & 7;
  v3 = v2 + 2;
  if ( !v2 )
    v3 = 3;
  return 10000 * ((unsigned __int16)((v1 & 7 | ((((unsigned __int8)v1 >> 3) & 7) != 0 ? 8 : 0)) << v3) >> 3);
}
