/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x1405B30F8
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         (unsigned int)KiBugCheckData,
         qword_140F22748,
         qword_140F22750,
         qword_140F22758,
         qword_140F22760,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
