/*
 * XREFs of ?OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18014D870 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::OnHitTest(
        DragNDropProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 1;
  if ( (*(_DWORD *)a2 & 0x1A) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
      DragNDropProcessor::SetupInteractionContext(
        this,
        *((unsigned int *)a2 + 10),
        *(unsigned int *)a2,
        *((_QWORD *)a3 + 22),
        *(_QWORD *)((char *)a2 + 44));
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
