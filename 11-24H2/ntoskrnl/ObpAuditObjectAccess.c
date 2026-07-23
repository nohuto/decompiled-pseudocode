/*
 * XREFs of ObpAuditObjectAccess @ 0x140863834
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14040ED00 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 */

char __fastcall ObpAuditObjectAccess(unsigned int *a1, unsigned __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  void *P; // rbx
  _DWORD *HandleExtraInfo; // rsi
  struct _KTHREAD *CurrentThread; // r14
  void **v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  int v16; // [rsp+28h] [rbp-30h]

  P = 0LL;
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
          a2,
          (unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
                             + 16),
          v15,
          v16,
          P);
      }
      LOBYTE(P) = 1;
    }
    ExUnlockHandleTableEntry(a1, a3);
  }
  KeLeaveCriticalRegionThread();
  return (char)P;
}
