/*
 * XREFs of ExpSvmDereferenceAsid @ 0x14064D750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x14064CB1C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x14064D100 (ExpReleaseSvmAgentsLock.c)
 */

void __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // al
  _QWORD *v3; // r8
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = ExpAcquireSvmAgentsLock(&LockHandle);
  v3 = qword_140EFA070;
  v4 = v2;
  v5 = *((_QWORD *)qword_140EFA070 + 3 * v1 + 1) - 1LL;
  *((_QWORD *)qword_140EFA070 + 3 * v1 + 1) = v5;
  if ( v5 < 0 && (v5 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    v6 = (void *)v3[3 * v1];
    v3[3 * v1] = 0LL;
    --dword_140EFA068;
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  ExpReleaseSvmAgentsLock(&LockHandle, v4);
}
