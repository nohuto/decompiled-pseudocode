/*
 * XREFs of KiBugCheckWriteCrashDump @ 0x1405B0068
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 */

char __fastcall KiBugCheckWriteCrashDump(__int64 a1)
{
  char v1; // bl

  v1 = IoWriteCrashDump(
         (unsigned int)KiBugCheckData,
         qword_140F22A08,
         qword_140F22A10,
         qword_140F22A18,
         qword_140F22A20,
         *(_OWORD **)a1,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         *(_BYTE *)(a1 + 32));
  IoSaveBugCheckProgress(3);
  return v1;
}
