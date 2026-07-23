/*
 * XREFs of ExpDeleteCallback @ 0x1407BB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnlockCallbackListExclusive @ 0x1404C547C (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListExclusive @ 0x1404C6590 (ExpLockCallbackListExclusive.c)
 */

_QWORD *__fastcall ExpDeleteCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockCallbackListExclusive((__int64)CurrentThread);
  v3 = (_QWORD *)(a1 + 40);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  return ExpUnlockCallbackListExclusive((__int64)CurrentThread);
}
