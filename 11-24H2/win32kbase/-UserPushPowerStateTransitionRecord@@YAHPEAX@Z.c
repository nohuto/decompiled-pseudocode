/*
 * XREFs of ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1400EAB90
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserPushPowerStateTransitionRecord(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 CurrentProcess; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  void *v8; // [rsp+50h] [rbp-28h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  InputBuffer[1] = 0;
  InputBuffer[3] = 0;
  InputBuffer[2] = 0;
  v9 = 0LL;
  InputBuffer[0] = 88;
  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x38u, 0LL, 0) >= 0;
}
