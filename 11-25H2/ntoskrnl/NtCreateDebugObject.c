/*
 * XREFs of NtCreateDebugObject @ 0x140AA4F70
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char v4; // r14
  char PreviousMode; // r10
  __int64 v8; // rcx
  NTSTATUS result; // eax
  PRKEVENT v10; // rbx
  bool v11; // di
  _KPROCESS *Process; // rax
  __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-68h]
  PRKEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16[4]; // [rsp+60h] [rbp-28h] BYREF

  v4 = Flags;
  v16[0] = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DebugObjectHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)DebugObjectHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *DebugObjectHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             DbgkDebugObjectType,
             (int)ObjectAttributes,
             PreviousMode,
             v14,
             104,
             0,
             0,
             &Event,
             0LL);
  if ( result >= 0 )
  {
    v10 = Event;
    v11 = 1;
    Event[1].Header.LockNV = 1;
    v10[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v10[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v10 + 2, SynchronizationEvent, 0);
    v10[3].Header.WaitListHead.Blink = &v10[3].Header.WaitListHead;
    v10[3].Header.WaitListHead.Flink = &v10[3].Header.WaitListHead;
    KeInitializeEvent(v10, NotificationEvent, 0);
    v10[4].Header.LockNV = 2 * (v4 & 1);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v13 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v13 != 332 )
        v11 = v13 == 452;
      if ( v11 )
        Event[4].Header.LockNV |= 4u;
    }
    result = ObInsertObjectEx((char *)Event, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)v16);
    if ( result >= 0 )
      *DebugObjectHandle = (HANDLE)v16[0];
  }
  return result;
}
