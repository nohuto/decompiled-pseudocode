/*
 * XREFs of ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x14006AE10
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

char __fastcall CInputGlobals::UpdateGlobalTickCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = a2;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  LOBYTE(v2) = *(_QWORD *)(a1 + 8 * v2 + 16) != v4;
  *(_QWORD *)(a1 + 8 * v5 + 16) = v4;
  *(_QWORD *)(a1 + 8 * v5 + 80) = (*(_QWORD *)(a1 + 72))++;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  return v2;
}
