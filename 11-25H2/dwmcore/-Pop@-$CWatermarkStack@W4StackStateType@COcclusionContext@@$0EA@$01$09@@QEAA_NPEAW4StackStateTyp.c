/*
 * XREFs of ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1801D8840
 * Callers:
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180206ABC (-PopClip@COcclusionContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = v2 - 1;
  *(_DWORD *)(a1 + 8) = v3;
  if ( a2 )
    *a2 = *(_DWORD *)(*(_QWORD *)a1 + 4LL * v3);
  return 1;
}
