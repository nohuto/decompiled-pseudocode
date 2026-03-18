/*
 * XREFs of ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140186D64
 * Callers:
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1401D0C2C (TdrAllowToDebugTimeout.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x140071BB8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 */

unsigned __int64 __fastcall TdrGetDbgOwnerTag(const struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned __int64 result; // rax
  DXGADAPTER *v2; // rcx

  if ( !a1 )
    return -1LL;
  result = *((_QWORD *)a1 + 13);
  if ( !result )
  {
    v2 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
    if ( !v2 )
      return -1LL;
    result = DXGADAPTER::GetDbgOwnerTag(v2);
    if ( !result )
      return -1LL;
  }
  return result;
}
