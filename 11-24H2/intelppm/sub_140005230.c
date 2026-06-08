/*
 * XREFs of sub_140005230 @ 0x140005230
 * Callers:
 *     sub_140005200 @ 0x140005200 (sub_140005200.c)
 *     sub_14000D650 @ 0x14000D650 (sub_14000D650.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140005230(PVOID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v8; // eax
  __int64 Pool2; // rax
  __int64 v10; // rdi

  v8 = IoSizeofWorkItem();
  Pool2 = ExAllocatePool2(64LL, v8 + 32, 1919119952LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = a2;
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 16) = a3;
    *(_QWORD *)(Pool2 + 24) = a4;
    IoInitializeWorkItem(*a1, (PIO_WORKITEM)(Pool2 + 32));
    IoQueueWorkItem((PIO_WORKITEM)(v10 + 32), sub_140045550, DelayedWorkQueue, (PVOID)v10);
  }
}
