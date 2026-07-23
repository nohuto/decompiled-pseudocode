/*
 * XREFs of DbgkpSendErrorMessage @ 0x1408B6DA4
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeTestAlertThread @ 0x140261EE0 (KeTestAlertThread.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     KeCopyExceptionRecord @ 0x1404367D0 (KeCopyExceptionRecord.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     AlpcGetMessageAttribute @ 0x14044A490 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14044A4D0 (AlpcInitializeMessageAttribute.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     DbgkpDereferenceErrorPort @ 0x14057B288 (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkpRemoveErrorPort @ 0x1406FBA58 (DbgkpRemoveErrorPort.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408B7284 (DbgkpStartSystemErrorHandler.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x14091FB94 (DbgkpSuspendProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpResumeProcess @ 0x140A60364 (DbgkpResumeProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  PVOID *v8; // rdi
  signed int started; // ebx
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // eax
  PVOID v13; // r14
  __int64 *v14; // r13
  PVOID v15; // rax
  PVOID v16; // r13
  char v17; // r12
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int16 v23; // ax
  char v24; // bl
  _DWORD *MessageAttribute; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  char v28; // di
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  char v32; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v38; // [rsp+70h] [rbp-90h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  char v43[96]; // [rsp+C0h] [rbp-40h] BYREF

  v37 = a1;
  memset_0(v43, 0, sizeof(v43));
  RequiredBufferSize = 0LL;
  v36.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  v38 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v8 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936);
  memset_0(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1532) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 680), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)PsGetSessionIdEx(Process) != ServerSiloServiceSessionId && (_DWORD)v41 != 1 && (a2 & 2) != 0 )
    v32 = DbgkpSuspendProcess(Process);
  started = DbgkpStartSystemErrorHandler();
  if ( started < 0 )
    goto LABEL_57;
  if ( DbgkErrorPortStartTimeout == -1 )
  {
    Timeout = 0LL;
  }
  else
  {
    Timeout = &v36;
    v36.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
  }
  v12 = KeWaitForSingleObject(v8[3], Executive, 1, 0, Timeout);
  if ( v12 == 258 || !v8[1] )
  {
    started = -1073740973;
    goto LABEL_57;
  }
  if ( v12 == 257 || v12 == 192 )
  {
    started = -1073741749;
    goto LABEL_57;
  }
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  started = 0;
  v13 = 0LL;
  v14 = KeAbPreAcquire((__int64)v8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v14, (unsigned __int64)v8);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  v15 = v8[2];
  if ( (PVOID)Process == v15 )
  {
    started = -1073741420;
  }
  else
  {
    v13 = v8[1];
    if ( v13 )
    {
      Object = v8[2];
      v16 = Object;
      ObfReferenceObjectWithTag(v15, 0x50676244u);
      _InterlockedIncrement((volatile signed __int32 *)v13);
      goto LABEL_25;
    }
    started = -1073740973;
  }
  v16 = 0LL;
LABEL_25:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v17 = 0;
  if ( started >= 0 )
  {
    v18 = v37;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 4) = 8;
    *(_WORD *)(a3 + 4) = -32761;
    *(_DWORD *)a3 = 17826024;
    *(_DWORD *)(a3 + 40) = 7;
    *(_DWORD *)(a3 + 44) = -2147418111;
    KeCopyExceptionRecord(a3 + 48, v18);
    v19 = v40;
    *(_OWORD *)(a3 + 200) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
    *(_DWORD *)(a3 + 264) = 0;
    v20 = v41;
    *(_OWORD *)(a3 + 216) = v19;
    v21 = v42;
    *(_OWORD *)(a3 + 232) = v20;
    *(_OWORD *)(a3 + 248) = v21;
    if ( (*(_BYTE *)(Process + 1530) & 7) != 0 )
    {
      *(_DWORD *)(a3 + 264) = 1;
      v22 = 1LL;
    }
    else
    {
      v22 = 0LL;
    }
    if ( (*(_BYTE *)(Process + 368) & 1) != 0 )
    {
      v22 = (unsigned int)v22 | 8;
      *(_DWORD *)(a3 + 264) = v22;
    }
    if ( *(_QWORD *)(Process + 784) )
    {
      v23 = *(_WORD *)(Process + 1772);
      if ( v23 == 332 || v23 == 452 )
      {
        v22 = (unsigned int)v22 | 2;
        *(_DWORD *)(a3 + 264) = v22;
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v22 = (unsigned int)v22 | 4;
      v17 = 1;
      *(_DWORD *)(a3 + 264) = v22;
    }
    LOBYTE(v22) = 1;
    v24 = PsTestProtectedProcessIncompatibility(v22, v16, Process);
    AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
    Buffer[0].ValidAttributes = 0x10000000;
    MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
    MessageAttribute[4] = 4;
    *((_QWORD *)MessageAttribute + 1) = -2LL;
    MessageAttribute[5] = v24 != 0 ? 1055744 : 0x1FFFFF;
    *MessageAttribute = 0;
    RequiredBufferSize = 272LL;
    KeTestAlertThread(0LL, v26);
    v27 = (__int64)v38;
    if ( (*(_DWORD *)(&v38[1].SwapListEntry + 1) & 1) != 0 )
      goto LABEL_40;
    v29 = ZwAlpcSendWaitReceivePort(
            *((HANDLE *)v13 + 1),
            0x220000u,
            (PPORT_MESSAGE)a3,
            Buffer,
            (PPORT_MESSAGE)a3,
            &RequiredBufferSize,
            0LL,
            0LL);
    started = v29;
    if ( v29 < 0 )
    {
      if ( v29 == -1073741769 )
        DbgkpRemoveErrorPort(v27, (ULONG_PTR)v8, (volatile signed __int32 *)v13);
      goto LABEL_41;
    }
    if ( v29 == 257 )
    {
LABEL_40:
      started = -1073741749;
    }
    else
    {
      if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
        ZwAlpcSendWaitReceivePort(*((HANDLE *)v13 + 1), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
      started = *(_DWORD *)(a3 + 44);
      if ( started >= 0 && !v17 && started == 65538 )
      {
        v28 = v32;
        if ( v32 )
        {
          DbgkpResumeProcess(Process);
          v28 = 0;
        }
        LOBYTE(v30) = 1;
        started = (unsigned __int8)DbgkForwardException(v37, v30) == 0 ? 0xC0000144 : 0;
        goto LABEL_42;
      }
    }
LABEL_41:
    v28 = v32;
LABEL_42:
    ObfDereferenceObjectWithTag(Object, 0x50676244u);
    DbgkpDereferenceErrorPort((volatile signed __int32 *)v13);
    goto LABEL_58;
  }
LABEL_57:
  v28 = v32;
LABEL_58:
  if ( v28 )
    DbgkpResumeProcess(Process);
  return (unsigned int)started;
}
