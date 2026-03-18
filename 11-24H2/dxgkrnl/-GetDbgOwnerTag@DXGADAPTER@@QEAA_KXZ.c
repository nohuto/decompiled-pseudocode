/*
 * XREFs of ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x140071BB8
 * Callers:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140186D64 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CF460 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1402835F4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DXGADAPTER::GetDbgOwnerTag(DXGADAPTER *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 75);
  if ( !result )
  {
    result = *((_QWORD *)this + 214);
    if ( !result )
      return *((_QWORD *)this + 57);
  }
  return result;
}
