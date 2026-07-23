/*
 * XREFs of ExpSvmDereferenceAsid @ 0x140657C90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x14065709C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x140657694 (ExpReleaseSvmAgentsLock.c)
 */

char __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // al
  _QWORD *v3; // r8
  __int64 v4; // rdx
  unsigned __int8 v5; // di
  __int64 v6; // rcx
  void *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = ExpAcquireSvmAgentsLock(&LockHandle);
  v3 = qword_140EFA6D0;
  v4 = 3 * v1;
  v5 = v2;
  v6 = *((_QWORD *)qword_140EFA6D0 + 3 * v1 + 1) - 1LL;
  *((_QWORD *)qword_140EFA6D0 + 3 * v1 + 1) = v6;
  if ( v6 < 0 && (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    v7 = (void *)v3[3 * v1];
    v3[3 * v1] = 0LL;
    --dword_140EFA6C8;
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  LOBYTE(v4) = v5;
  return ExpReleaseSvmAgentsLock((volatile signed __int64 **)&LockHandle, v4);
}
