/*
 * XREFs of WdipSemWriteScenarioLimitExceededEvent @ 0x1407A2EEC
 * Callers:
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteScenarioLimitExceededEvent(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int16 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int16 v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = 0;
  v9 = 0;
  v7 = &v10;
  v4 = a2;
  v5 = 16;
  v8 = 2;
  return WdipSemWriteEvent(a1, a1, 0LL, 2LL, &v4);
}
