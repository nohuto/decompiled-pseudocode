/*
 * XREFs of ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1403E8F10
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CF6A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTDR_DUMP_BUFFER_CANARY::Check(const void **this)
{
  const void *v1; // rcx

  v1 = *this;
  return !v1 || RtlCompareMemory(v1, "EOR", 4uLL) == 4;
}
