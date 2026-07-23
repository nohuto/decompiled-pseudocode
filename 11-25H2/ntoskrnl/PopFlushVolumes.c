/*
 * XREFs of PopFlushVolumes @ 0x140B57F10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x14069CF80 (ZwFlushKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  char v2; // al
  char v3; // di
  char v4; // al
  char v5; // al
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 **v12; // rax
  __int64 **v13; // rax
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *StartContext; // [rsp+40h] [rbp-59h] BYREF
  __int64 *p_StartContext; // [rsp+48h] [rbp-51h]
  int v30; // [rsp+50h] [rbp-49h]
  struct _KEVENT Event; // [rsp+58h] [rbp-41h] BYREF
  char v32; // [rsp+70h] [rbp-29h]
  char v33; // [rsp+71h] [rbp-28h]
  _QWORD v34[3]; // [rsp+78h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+27h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+110h] [rbp+77h] BYREF

  ThreadHandle = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_START);
  memset_0(&StartContext, 0, 0x48uLL);
  p_StartContext = (__int64 *)&StartContext;
  StartContext = &StartContext;
  v34[1] = v34;
  v34[0] = v34;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v2 = 2;
  }
  else
  {
    v2 = PopFlushPolicy;
    if ( byte_140F0ADA0 )
      v2 = 3;
  }
  v3 = v2 | 0x10;
  if ( a1 != 5 )
    v3 = v2;
  v4 = v32;
  if ( (v3 & 4) != 0 )
    v4 = 1;
  v32 = v4;
  v5 = v33;
  if ( (v3 & 8) != 0 )
    v5 = 1;
  v33 = v5;
  if ( (v3 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v6 = 0;
  ExAcquireFastMutex(&PopVolumeLock);
  v7 = (__int64 *)PopVolumeDevices;
  while ( v7 != &PopVolumeDevices )
  {
    v8 = *(v7 - 7);
    v9 = v7;
    v7 = (__int64 *)*v7;
    v10 = *(_QWORD *)(v8 + 56);
    if ( (*(_BYTE *)(v10 + 4) & 1) != 0 && (*(_DWORD *)(v8 + 52) & 0x10006) == 0 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      if ( !v11 || (*(_DWORD *)(v11 + 52) & 4) == 0 )
      {
        if ( (__int64 *)v7[1] != v9
          || (v12 = (__int64 **)v9[1], *v12 != v9)
          || (*v12 = v7,
              v7[1] = (__int64)v12,
              v13 = (__int64 **)p_StartContext,
              (_QWORD **)*p_StartContext != &StartContext) )
        {
LABEL_21:
          __fastfail(3u);
        }
        v9[1] = (__int64)p_StartContext;
        *v9 = (__int64)&StartContext;
        ++v6;
        *v13 = v9;
        p_StartContext = v9;
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v14 = StartContext;
    while ( v14 != &StartContext )
    {
      v15 = *(v14 - 7);
      v16 = v14;
      v14 = (_QWORD *)*v14;
      if ( (*(_DWORD *)(v15 + 52) & 1) == 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 56) + 16LL);
        if ( !v17 || (*(_DWORD *)(v17 + 52) & 1) == 0 )
        {
          if ( (v3 & 0x10) == 0
            || ((v18 = *(_DWORD *)(v15 + 48), (v18 & 0x200000) == 0) || (v18 & 0x100) != 0)
            && (!v17 || (v19 = *(_DWORD *)(v17 + 48), (v19 & 0x200000) == 0) || (v19 & 0x100) != 0) )
          {
            v20 = *v16;
            if ( *(_QWORD **)(*v16 + 8LL) != v16 )
              goto LABEL_21;
            v21 = (_QWORD *)v16[1];
            if ( (_QWORD *)*v21 != v16 )
              goto LABEL_21;
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
            v22 = (_QWORD *)qword_140F0B898;
            if ( *(__int64 **)qword_140F0B898 != &PopVolumeDevices )
              goto LABEL_21;
            *v16 = &PopVolumeDevices;
            --v6;
            v16[1] = v22;
            *v22 = v16;
            qword_140F0B898 = (__int64)v16;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopVolumeLock);
  if ( v6 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    if ( v6 > 8 )
      v6 = 8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v30 = v6;
    while ( --v6 > 0 )
    {
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             PopFlushVolumeWorker,
             &StartContext) < 0 )
      {
        ExAcquireFastMutex(&PopVolumeLock);
        v30 -= v6;
        KeReleaseGuardedMutex(&PopVolumeLock);
        break;
      }
      ZwClose(ThreadHandle);
    }
    v23 = PopPushPowerStateTransitionRecordWithCallback(
            (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process,
            (LONGLONG)KeGetCurrentThread(),
            (LARGE_INTEGER)&StartContext,
            1u,
            (LARGE_INTEGER)PopFlushVolumeBlameResolverCallback);
    PopFlushVolumeWorker(&StartContext);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v23 >= 0 )
      PoDelistPowerStateTransitionBlocker(v25, v24, v26, v27);
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_STOP);
}
