/*
 * XREFs of NtOpenJobObject @ 0x1408DB200
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     EtwTraceJob @ 0x1408DBB24 (EtwTraceJob.c)
 */

__int64 __fastcall NtOpenJobObject(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE *v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v10; // ebx
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = PsJobType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(a3, (__int64)v8, PreviousMode, 0LL, a2, 0, (__int64)CurrentSilo, &v12);
  if ( v10 >= 0 )
    *a1 = v12;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v10, 1826LL);
  return (unsigned int)v10;
}
