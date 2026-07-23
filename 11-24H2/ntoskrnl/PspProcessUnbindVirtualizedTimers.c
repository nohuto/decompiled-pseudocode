/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x14046BC94
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExRemoveVirtualizedTimer @ 0x14046BD44 (ExRemoveVirtualizedTimer.c)
 */

void __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // si
  _QWORD **v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  void *v8; // rax

  if ( (*(_DWORD *)(a1 + 136) & 0x10) != 0 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1800);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
    v4 = (_QWORD **)(a1 + 1808);
    v5 = MEMORY[0xFFFFF78000000008];
    while ( 1 )
    {
      v6 = *v4;
      if ( *v4 == v4 )
        break;
      if ( (_QWORD **)v6[1] != v4 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v4 = v7;
      v7[1] = v4;
      v8 = (void *)ExRemoveVirtualizedTimer(v6, v5);
      ObfDereferenceObjectWithTag(v8, 0x54567350u);
    }
    KeReleaseSpinLock(v2, v3);
  }
}
