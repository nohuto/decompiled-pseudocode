/*
 * XREFs of DbgkpSendErrorMessage @ 0x1409E93F0
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     KeTestAlertThread @ 0x1403D4850 (KeTestAlertThread.c)
 *     KeCopyExceptionRecord @ 0x1404252B0 (KeCopyExceptionRecord.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     AlpcGetMessageAttribute @ 0x140440E90 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140440ED0 (AlpcInitializeMessageAttribute.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     DbgkpDereferenceErrorPort @ 0x14057BA38 (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkpRemoveErrorPort @ 0x1407054F8 (DbgkpRemoveErrorPort.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409E9F88 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpResumeProcess @ 0x140A5A3B4 (DbgkpResumeProcess.c)
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
  char *v14; // r13
  PVOID v15; // rax
  PS_PROTECTION *v16; // r13
  char v17; // r12
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // ecx
  __int16 v23; // ax
  bool v24; // bl
  _DWORD *MessageAttribute; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  char v28; // di
  NTSTATUS v29; // eax
  char v31; // [rsp+40h] [rbp-C0h]
  PS_PROTECTION *Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v37; // [rsp+70h] [rbp-90h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  char v42[96]; // [rsp+C0h] [rbp-40h] BYREF

  v36 = a1;
  memset_0(v42, 0, sizeof(v42));
  RequiredBufferSize = 0LL;
  v35.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = 0;
  v37 = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v8 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936);
  memset_0(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1532) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 680), 1LL, Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)PsGetSessionIdEx(Process) != ServerSiloServiceSessionId && (_DWORD)v40 != 1 && (a2 & 2) != 0 )
    v31 = DbgkpSuspendProcess(Process);
  started = DbgkpStartSystemErrorHandler();
  if ( started < 0 )
    goto LABEL_57;
  if ( DbgkErrorPortStartTimeout == -1 )
  {
    Timeout = 0LL;
  }
  else
  {
    Timeout = &v35;
    v35.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
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
  v14 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v14, (__int64)v8);
  if ( v14 )
    v14[10] = 1;
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
      Object = (PS_PROTECTION *)v8[2];
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
  KeLeaveCriticalRegionThread();
  v17 = 0;
  if ( started >= 0 )
  {
    v18 = v36;
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
    v19 = v39;
    *(_OWORD *)(a3 + 200) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
    *(_DWORD *)(a3 + 264) = 0;
    v20 = v40;
    *(_OWORD *)(a3 + 216) = v19;
    v21 = v41;
    *(_OWORD *)(a3 + 232) = v20;
    *(_OWORD *)(a3 + 248) = v21;
    if ( (*(_BYTE *)(Process + 1530) & 7) != 0 )
    {
      *(_DWORD *)(a3 + 264) = 1;
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    if ( (*(_BYTE *)(Process + 368) & 1) != 0 )
    {
      v22 |= 8u;
      *(_DWORD *)(a3 + 264) = v22;
    }
    if ( *(_QWORD *)(Process + 784) )
    {
      v23 = *(_WORD *)(Process + 1772);
      if ( v23 == 332 || v23 == 452 )
      {
        v22 |= 2u;
        *(_DWORD *)(a3 + 264) = v22;
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v17 = 1;
      *(_DWORD *)(a3 + 264) = v22 | 4;
    }
    v24 = PsTestProtectedProcessIncompatibility(1, v16, (PS_PROTECTION *)Process);
    AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
    Buffer[0].ValidAttributes = 0x10000000;
    MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
    MessageAttribute[4] = 4;
    *((_QWORD *)MessageAttribute + 1) = -2LL;
    MessageAttribute[5] = v24 ? 1055744 : 0x1FFFFF;
    *MessageAttribute = 0;
    RequiredBufferSize = 272LL;
    KeTestAlertThread(0LL, v26);
    v27 = (__int64)v37;
    if ( (*(_DWORD *)(&v37[1].SwapListEntry + 1) & 1) != 0 )
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
        v28 = v31;
        if ( v31 )
        {
          DbgkpResumeProcess(Process);
          v28 = 0;
        }
        started = !DbgkForwardException(v36, 1u, 1) ? 0xC0000144 : 0;
        goto LABEL_42;
      }
    }
LABEL_41:
    v28 = v31;
LABEL_42:
    ObfDereferenceObjectWithTag(Object, 0x50676244u);
    DbgkpDereferenceErrorPort((volatile signed __int32 *)v13);
    goto LABEL_58;
  }
LABEL_57:
  v28 = v31;
LABEL_58:
  if ( v28 )
    DbgkpResumeProcess(Process);
  return (unsigned int)started;
}
