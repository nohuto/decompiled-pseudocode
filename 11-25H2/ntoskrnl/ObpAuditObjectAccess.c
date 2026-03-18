/*
 * XREFs of ObpAuditObjectAccess @ 0x140971330
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x1404018A0 (ExLockHandleTableEntry.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14041DC70 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 */

char __fastcall ObpAuditObjectAccess(unsigned int *a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  void *P; // rbx
  int v8; // r12d
  _DWORD *HandleExtraInfo; // rsi
  struct _KTHREAD *CurrentThread; // r14
  void **v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // [rsp+28h] [rbp-30h]

  P = 0LL;
  v8 = a2;
  if ( !a1[1] )
    return 1;
  HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry((__int64)a1, a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    if ( a4 == ExGetHandlePointer(a3) )
    {
      if ( (a5 & *HandleExtraInfo) != 0 )
      {
        *HandleExtraInfo &= ~a5;
        v13 = (void **)OBJECT_HEADER_TO_AUDIT_INFO(a4);
        if ( v13 )
          P = *v13;
        SeOperationAuditAlarm(
          v14,
          a4 + 48,
          v8,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v15,
          v16,
          P);
      }
      LOBYTE(P) = 1;
    }
    ExUnlockHandleTableEntry(a1, a3);
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (char)P;
}
