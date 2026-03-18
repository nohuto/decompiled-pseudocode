/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x14091EB80
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x14091DD10 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14091E690 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // r8
  unsigned __int64 HandlePointer; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rcx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 4 * a2;
  --CurrentThread->KernelApcDisable;
  v5 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 0x3FC) != 0 && (v6 = (__int64 *)ExpLookupHandleTableEntry(*(unsigned int **)(a1 + 16), v3)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v6);
        v7 = *v6;
        if ( (*v6 & 1) != 0 )
          break;
        if ( !v7 )
          goto LABEL_10;
        ExpBlockOnLockedHandleEntry(v5, v6, v7);
      }
    }
    while ( v7 != _InterlockedCompareExchange64(v6, v7 - 1, v7) );
    HandlePointer = ExGetHandlePointer(v6);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = HandlePointer;
    _InterlockedIncrement64(v6);
    v11 = (_QWORD *)(v9 + 48);
    _InterlockedOr(v13, 0);
    if ( *v11 )
      ExfUnblockPushLock((__int64)v11, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v10;
  }
  else
  {
LABEL_10:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
