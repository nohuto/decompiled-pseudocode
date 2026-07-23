/*
 * XREFs of DbgkRegisterErrorPort @ 0x140A80BEC
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x14057B288 (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14069C0A0 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14069C200 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  size_t v2; // rbx
  wchar_t *Pool2; // rax
  __int64 v6; // rax
  _DWORD *v7; // r15
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING PortName; // [rsp+68h] [rbp-100h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-F0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-E8h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+B0h] [rbp-B8h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+E0h] [rbp-88h] BYREF

  v2 = (unsigned int)Size;
  PortName = 0LL;
  memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
  BufferLength = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  if ( !(_DWORD)v2 || (v2 & 1) != 0 || (unsigned int)v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x101uLL);
  PortName.Buffer = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(Pool2, Src, v2);
  v6 = ExAllocatePool2(0x101uLL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *(unsigned int *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
    BufferLength = 40LL;
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwAlpcConnectPort(
           (PHANDLE)(v6 + 8),
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x120000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
    v9 = v8;
    if ( v8 == 192 )
    {
      v9 = -1073741749;
    }
    else if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936;
      --CurrentThread->KernelApcDisable;
      v13 = KeAbPreAcquire((__int64)v12, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v13, (__int64)v12);
      if ( v14 )
        *((_BYTE *)v14 + 10) = 1;
      v15 = *((_QWORD *)v12 + 1);
      if ( !v15 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
      v9 = 0;
      v7 = 0LL;
      if ( v15 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v15 + 4), 0) )
          ZwAlpcDisconnectPort(*(HANDLE *)(v15 + 8), 0);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)v15);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v9 = -1073741670;
  }
  if ( PortName.Buffer )
    ExFreePool(PortName.Buffer);
  return v9;
}
