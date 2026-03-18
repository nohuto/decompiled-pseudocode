/*
 * XREFs of ?TransferDirtyContentForLiveMigration@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEAVVIDMM_TRANSPORT_BUFFER@@PEA_K@Z @ 0x1400960BC
 * Callers:
 *     VidMmTransferDirtyContentForLiveMigration @ 0x14004C920 (VidMmTransferDirtyContentForLiveMigration.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::TransferDirtyContentForLiveMigration(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v10[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v10, 0, 0x58uLL);
  v10[8] = a5;
  LODWORD(v10[0]) = 133;
  v10[5] = a4;
  v10[6] = a2;
  LODWORD(v10[7]) = a3;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v10, 1);
}
