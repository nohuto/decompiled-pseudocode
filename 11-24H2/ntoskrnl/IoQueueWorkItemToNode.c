/*
 * XREFs of IoQueueWorkItemToNode @ 0x1403A9180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItemExFromIo @ 0x1403A9120 (ExQueueWorkItemExFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1403AA050 (IopQueueWorkItemProlog.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v7; // rax
  char v8; // bl

  v7 = (_QWORD *)IopQueueWorkItemProlog(a1, a2, a4);
  v8 = ExQueueWorkItemExFromIo(v7, a3, a5);
  if ( !v8 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  return v8;
}
