/*
 * XREFs of KiGetLoadOptions @ 0x140C15B8C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  return *(_QWORD *)(v0 + 216);
}
