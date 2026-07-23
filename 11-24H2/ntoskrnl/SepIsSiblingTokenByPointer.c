/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x140A25848
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SepReleaseOrderedReadLocks @ 0x14044A464 (SepReleaseOrderedReadLocks.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdi
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v6 + 24);
  ObFastDereferenceObject((__int64 *)(Process + 584), v6, 0x746C6644u);
  v11 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v8 )
  {
    if ( v11 == v9 )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v7, a1, v10);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v13 = *(_QWORD *)(a1 + 216);
        v14 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v14 + 40) & *(_BYTE *)(v13 + 40) & 0x40) != 0
          && v9 == *(_QWORD *)(v13 + 176)
          && v11 == *(_QWORD *)(v14 + 176) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v7, a1);
    }
  }
  return 0LL;
}
