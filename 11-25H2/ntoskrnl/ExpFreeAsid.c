/*
 * XREFs of ExpFreeAsid @ 0x14064CDF8
 * Callers:
 *     ExFreeSvmAsid @ 0x140492894 (ExFreeSvmAsid.c)
 *     IommupPasidDeviceDelete @ 0x14054BDCC (IommupPasidDeviceDelete.c)
 *     ExFreeAsid @ 0x14064C8C8 (ExFreeAsid.c)
 *     ExpAssignPasid @ 0x1407B1338 (ExpAssignPasid.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x14064CB1C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x14064D100 (ExpReleaseSvmAgentsLock.c)
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
  v6 = qword_140EFA070;
  v7 = *((_QWORD *)qword_140EFA070 + 3 * v2 + 1) - 1LL;
  *((_QWORD *)qword_140EFA070 + 3 * v2 + 1) = v7;
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
    --dword_140EFA068;
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
