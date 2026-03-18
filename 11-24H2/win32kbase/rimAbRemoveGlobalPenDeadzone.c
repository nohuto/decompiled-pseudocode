/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1401D9C70
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140057E30 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void *__fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1)
{
  void *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 133);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  result = memset(v8, 0, sizeof(v8));
  v3 = v8[1];
  *(_OWORD *)(a1 + 608) = v8[0];
  v4 = v8[2];
  *(_OWORD *)(a1 + 624) = v3;
  v5 = v8[3];
  *(_OWORD *)(a1 + 640) = v4;
  v6 = v8[4];
  *(_OWORD *)(a1 + 656) = v5;
  v7 = v8[5];
  *(_OWORD *)(a1 + 672) = v6;
  *(_OWORD *)(a1 + 688) = v7;
  return result;
}
