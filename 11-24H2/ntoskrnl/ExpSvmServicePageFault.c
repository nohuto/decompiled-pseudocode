/*
 * XREFs of ExpSvmServicePageFault @ 0x140659970
 * Callers:
 *     <none>
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406589FC (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x140658FF4 (ExpReleaseSvmAgentsLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  _KPROCESS *Process; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  _KPROCESS *v10; // rsi
  char v11; // bp
  ULONG_PTR v12; // rcx
  unsigned int v13; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-50h] BYREF

  v3 = a3;
  memset(v15, 0, sizeof(v15));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a1 & 8) != 0 )
    return 3221225477LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ExpAcquireSvmAgentsLock(&LockHandle);
  v9 = 3 * v3;
  v10 = (_KPROCESS *)*((_QWORD *)qword_140EFA450 + 3 * v3);
  LOBYTE(v9) = v8;
  ExpReleaseSvmAgentsLock((volatile signed __int64 **)&LockHandle, v9);
  v11 = 0;
  if ( Process != v10 )
  {
    KiStackAttachProcess(v10, 0, (__int64)v15);
    v11 = 1;
  }
  v12 = a1 & 2 | 0x10LL;
  if ( (a1 & 4) == 0 )
    v12 = a1 & 2;
  v13 = MmAccessFault(v12, a2, 1, 0LL);
  if ( v11 )
    KiUnstackDetachProcess((__int64)v15, 0);
  return v13;
}
