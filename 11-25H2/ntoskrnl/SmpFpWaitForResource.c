/*
 * XREFs of SmpFpWaitForResource @ 0x1406022D8
 * Callers:
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall SmpFpWaitForResource(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // esi
  struct _KTHREAD *i; // rax
  KIRQL v8; // al
  _QWORD *j; // rdx
  __int64 v10; // rdi

  v3 = a2;
  CurrentThread = a3;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
  }
  for ( i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 14);
        CurrentThread != i
     && (*((_QWORD *)SpinLock + 14)
      || _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock + 14, (signed __int64)CurrentThread, 0LL));
        i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 14) )
  {
    KeWaitForSingleObject((PVOID)(SpinLock + 2), Executive, 0, 0, 0LL);
  }
  v8 = ExAcquireSpinLockExclusive(SpinLock);
  for ( j = *(_QWORD **)&SpinLock[2 * v3 + 10]; (j[1] & 1) != 0; j = (_QWORD *)*j )
    ;
  v10 = j[1];
  *((_DWORD *)j + 2) |= 1u;
  ++*((_BYTE *)SpinLock + v3 + 88);
  ++*((_BYTE *)SpinLock + 94);
  ExReleaseSpinLockExclusive(SpinLock, v8);
  if ( v6 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 14, v10);
  return v10;
}
