/*
 * XREFs of VidSchCreateContext @ 0x1401029F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCreateContextInternal @ 0x140032228 (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039538 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140045BD8 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  unsigned int v5; // edx
  __int64 v6; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v11; // rcx

  if ( a1 && a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 800LL);
    v4 = *a2 & 0xFFFFFFF6 | 8;
    *a2 = (4 * ((*a2 & 0x440) != 0)) | *a2 & 0xFFFFFFE2 | 8 | (16 * ((*a2 & 0x440) == 0));
    v5 = a2[2];
    v6 = *(_QWORD *)(v3 + 32);
    if ( (v4 & 0x440) != 0 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v6, v5);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v6, a2[1], v5);
    *(_DWORD *)(v8 + 4) = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v3, (__int128 *)v8, v9);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5046;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 0LL;
  }
}
