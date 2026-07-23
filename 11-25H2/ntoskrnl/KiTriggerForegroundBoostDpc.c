/*
 * XREFs of KiTriggerForegroundBoostDpc @ 0x1405BF1F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 */

void __fastcall KiTriggerForegroundBoostDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = -1LL;
  KeSetTimer2((__int64)&KiForegroundState, (LARGE_INTEGER)-150000LL, 0LL, (__int64)v4);
}
