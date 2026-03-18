/*
 * XREFs of ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x14018C534
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CF6A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

CTDR_DUMP_BUFFER_CANARY *__fastcall CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY(
        CTDR_DUMP_BUFFER_CANARY *this,
        char *a2,
        int a3)
{
  char *v3; // rdx

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    v3 = &a2[a3];
    *(_QWORD *)this = v3;
    *(_DWORD *)v3 = 5394245;
  }
  return this;
}
