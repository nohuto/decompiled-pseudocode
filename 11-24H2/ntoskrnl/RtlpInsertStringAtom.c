/*
 * XREFs of RtlpInsertStringAtom @ 0x140A249F0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  __int64 Handle; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rax

  Handle = ExCreateHandleEx(*(unsigned int **)(a1 + 16), a2, 0, 0, 0LL);
  v5 = Handle;
  if ( Handle )
  {
    v6 = (unsigned int)Handle >> 2;
    if ( v6 <= 0xFFFF && v6 + 49152 >= v6 && v6 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 10) = v6 - 0x4000;
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v9);
    KeLeaveCriticalRegion();
  }
  return 0;
}
