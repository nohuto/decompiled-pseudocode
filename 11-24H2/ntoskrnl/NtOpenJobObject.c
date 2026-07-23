/*
 * XREFs of NtOpenJobObject @ 0x14085BE00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     EtwTraceJob @ 0x14085C728 (EtwTraceJob.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r14d
  char PreviousMode; // si
  __int64 v7; // rdx
  int v8; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v10; // r8d
  NTSTATUS v11; // ebx
  void *v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  v13 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = (int)PsJobType;
  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v10) = PreviousMode;
  v11 = ObOpenObjectByNameEx(v3, v8, v10, 0, DesiredAccess, 0LL, (__int64)CurrentSilo, (__int64)&v13);
  if ( v11 >= 0 )
    *JobHandle = v13;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v11, 1826LL);
  return v11;
}
