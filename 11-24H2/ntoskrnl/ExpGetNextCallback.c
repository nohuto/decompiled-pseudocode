/*
 * XREFs of ExpGetNextCallback @ 0x140A585B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     ExpUnlockCallbackListShared @ 0x14049C948 (ExpUnlockCallbackListShared.c)
 *     ExpLockCallbackListShared @ 0x1404A1FA4 (ExpLockCallbackListShared.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // esi
  __int64 *v4; // rbp
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  ExpLockCallbackListShared((__int64)CurrentThread);
  v5 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v5 = (__int64 *)Object[5];
  while ( v5 != &ExpCallbackListHead )
  {
    v4 = v5 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 5), 0x6E457845u) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  ExpUnlockCallbackListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v4 & -(__int64)(v3 != 0);
}
