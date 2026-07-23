/*
 * XREFs of NtSetEventEx @ 0x140973E70
 * Callers:
 *     NtSetEvent @ 0x140973E50 (NtSetEvent.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeAbIsValidUserModeLockAddress @ 0x14041D6A0 (KeAbIsValidUserModeLockAddress.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExpSetCrossVmEvent @ 0x140974030 (ExpSetCrossVmEvent.c)
 */

__int64 __fastcall NtSetEventEx(HANDLE Handle, _DWORD *a2, __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  struct _KEVENT *v10; // rdi
  int v11; // eax
  signed int Priority; // [rsp+34h] [rbp-44h] BYREF
  PVOID SystemArgument1; // [rsp+38h] [rbp-40h] BYREF
  PVOID v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  SystemArgument1 = 0LL;
  v8 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &SystemArgument1, 0LL);
  v9 = v8;
  v10 = (struct _KEVENT *)SystemArgument1;
  v15 = SystemArgument1;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        SystemArgument1 = 0LL;
        v9 = ObReferenceObjectByHandle(Handle, 2u, ExCrossVmEventObjectType, PreviousMode, &SystemArgument1, 0LL);
        v10 = (struct _KEVENT *)SystemArgument1;
        v15 = SystemArgument1;
        if ( v9 >= 0 )
          v9 = ExpSetCrossVmEvent(SystemArgument1, &v17);
      }
    }
    v11 = v17;
  }
  else
  {
    if ( KeAbIsValidUserModeLockAddress(a3) )
    {
      Priority = KeGetCurrentThread()->Priority;
      v11 = KeSetEventBoostPriorityEx((volatile signed __int32 *)SystemArgument1, (__int64)&v16, &Priority, a3, 0, 1);
    }
    else
    {
      v11 = KeSetEvent(v10, 1, 0);
    }
    v17 = v11;
  }
  if ( v9 >= 0 && a2 )
    *a2 = v11;
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v9;
}
