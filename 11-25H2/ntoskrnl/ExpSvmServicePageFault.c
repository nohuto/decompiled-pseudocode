/*
 * XREFs of ExpSvmServicePageFault @ 0x14064DAD0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     ExpAcquireSvmAgentsLock @ 0x14064CB1C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x14064D100 (ExpReleaseSvmAgentsLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  _KPROCESS *Process; // rbx
  unsigned __int8 v8; // al
  _KPROCESS *v9; // rsi
  char v10; // bp
  ULONG_PTR v11; // rcx
  unsigned int v12; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF

  v3 = a3;
  memset(v14, 0, sizeof(v14));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a1 & 8) != 0 )
    return 3221225477LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ExpAcquireSvmAgentsLock(&LockHandle);
  v9 = (_KPROCESS *)*((_QWORD *)qword_140EFA070 + 3 * v3);
  ExpReleaseSvmAgentsLock(&LockHandle, v8);
  v10 = 0;
  if ( Process != v9 )
  {
    KiStackAttachProcess(v9, 0, (__int64)v14);
    v10 = 1;
  }
  v11 = a1 & 2 | 0x10LL;
  if ( (a1 & 4) == 0 )
    v11 = a1 & 2;
  v12 = MmAccessFault(v11, a2, 1, 0LL);
  if ( v10 )
    KiUnstackDetachProcess((__int64)v14, 0LL);
  return v12;
}
