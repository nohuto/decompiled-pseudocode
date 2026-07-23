/*
 * XREFs of ExpFreeAsid @ 0x14065738C
 * Callers:
 *     ExFreeSvmAsid @ 0x14048C994 (ExFreeSvmAsid.c)
 *     IommupPasidDeviceDelete @ 0x14054C01C (IommupPasidDeviceDelete.c)
 *     ExFreeAsid @ 0x140656E48 (ExFreeAsid.c)
 *     ExpAssignPasid @ 0x1407C0F58 (ExpAssignPasid.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x14065709C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x140657694 (ExpReleaseSvmAgentsLock.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1, void *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  LONG_PTR result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  v6 = qword_140EFA6D0;
  v7 = *((_QWORD *)qword_140EFA6D0 + 3 * v2 + 1) - 1LL;
  *((_QWORD *)qword_140EFA6D0 + 3 * v2 + 1) = v7;
  if ( v7 )
  {
    v5 = 0x8000000000000000uLL;
    v6[3 * v2 + 1] = v7 | 0x8000000000000000uLL;
    v8 = 0;
  }
  else
  {
    v6[3 * v2] = 0LL;
    v8 = 1;
    --dword_140EFA6C8;
  }
  LOBYTE(v5) = v4;
  result = ExpReleaseSvmAgentsLock(&LockHandle, v5);
  if ( v8 == 1 )
  {
    if ( a2 )
      return ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  }
  return result;
}
