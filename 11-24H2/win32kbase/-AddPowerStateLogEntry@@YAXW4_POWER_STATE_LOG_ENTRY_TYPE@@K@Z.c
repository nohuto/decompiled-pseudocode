/*
 * XREFs of ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x14012B784
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddPowerStateLogEntry(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // r8
  __int64 result; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = UserSessionState
     + 368
     + 16 * ((_InterlockedExchangeAdd((volatile signed __int32 *)(UserSessionState + 616), 1u) & 0x7F) + 16LL);
  result = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v5 + 8) = v3;
  *(_QWORD *)v5 = result;
  *(_DWORD *)(v5 + 12) = a2;
  return result;
}
