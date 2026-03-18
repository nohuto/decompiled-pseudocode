/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C0169A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_AVL_TABLE *Table, char *Buffer)
{
  if ( Buffer )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Buffer);
}
