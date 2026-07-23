/*
 * XREFs of SepIsChildTokenByPointer @ 0x140A257AC
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 */

__int64 __fastcall SepIsChildTokenByPointer(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  ULONG_PTR v6; // rax
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  if ( !v6 )
    return 3221225473LL;
  v7 = *(_QWORD *)(v6 + 16);
  ObFastDereferenceObject((__int64 *)(Process + 584), v6, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 32) == v7 )
    *a2 = 1;
  return 0LL;
}
