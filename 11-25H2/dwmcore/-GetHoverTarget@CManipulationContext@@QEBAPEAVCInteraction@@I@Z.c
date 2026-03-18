/*
 * XREFs of ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x18021AF20
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CManipulationContext::GetHoverTarget(CManipulationContext *this, int a2)
{
  int v2; // r8d
  __int64 v4; // rcx
  __int64 i; // r9

  v2 = 0;
  v4 = *((int *)this + 18);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v4 )
      return 0LL;
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 4 * i) == a2 )
      break;
    ++v2;
  }
  if ( v2 == -1 )
    return 0LL;
  return *(struct CInteraction **)(*((_QWORD *)this + 8) + 8LL * v2);
}
