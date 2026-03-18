/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1403EEDD0
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CF460 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1402835F4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018C514 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v1; // rbx
  int v2; // ecx

  Pool2 = ExAllocatePool2(64LL, 2928LL, 1380209782LL);
  v1 = (struct _TDR_RECOVERY_CONTEXT *)Pool2;
  if ( Pool2 )
  {
    v2 = g_TdrConfig;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 116) = 0;
    *(_DWORD *)(Pool2 + 2784) = v2;
    *(_DWORD *)(Pool2 + 2788) = dword_140160A0C;
    *(_DWORD *)(Pool2 + 2792) = dword_140160A18;
    *(_DWORD *)Pool2 = 1380209782;
    *(_DWORD *)(Pool2 + 112) = 1380209782;
    *(_DWORD *)(Pool2 + 128) = 12;
    *(_QWORD *)(Pool2 + 120) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(Pool2 + 2840) = 1380209782;
  }
  else
  {
    WdLogSingleEntry1(2LL, 2928LL);
    WdLogGlobalForLineNumber = 2487;
  }
  return TdrReferenceRecoveryContext(v1);
}
