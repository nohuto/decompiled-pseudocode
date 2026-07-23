/*
 * XREFs of PpmHeteroHgsGetWpsHint @ 0x1405D4848
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall PpmHeteroHgsGetWpsHint(__int64 a1, struct _KAFFINITY_EX *a2, int *a3)
{
  __int64 v3; // r9
  int v4; // eax

  v3 = *(_QWORD *)(a1 + 1280);
  v4 = 2;
  *a3 = 2;
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 808) )
    {
      v4 = *(_DWORD *)(v3 + 812);
      *a3 = v4;
    }
    KiCopyAffinityEx(a2, a2->Size, (struct _KAFFINITY_EX *)(v3 + 16 + 264LL * v4));
  }
}
