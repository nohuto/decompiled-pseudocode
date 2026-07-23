/*
 * XREFs of PopFlushVolumeWorker @ 0x140B5CB30
 * Callers:
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopFlushAndHold @ 0x1404D5B70 (PopFlushAndHold.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x14069BAA0 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x14069BBE0 (ZwCreateFile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObQueryNameString @ 0x1408C0E00 (ObQueryNameString.c)
 *     NtDeviceIoControlFile @ 0x1408C3A60 (NtDeviceIoControlFile.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext)
{
  PVOID *p_Flink; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  char ***v7; // rdx
  struct _LIST_ENTRY *v8; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  char ***p_WaitListHead; // [rsp+70h] [rbp-90h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+D0h] [rbp-30h] BYREF

  ReturnLength = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_0(&ObjectNameInfo, 0, 0x200uLL);
  ExAcquireFastMutex(&PopVolumeLock);
  CurrentThread = KeGetCurrentThread();
  p_Flink = (PVOID *)&StartContext[2].Header.WaitListHead.Blink->Flink;
  if ( *p_Flink != &StartContext[2].Header.WaitListHead )
    goto LABEL_7;
  Blink = StartContext[2].Header.WaitListHead.Blink;
  p_WaitListHead = (char ***)&StartContext[2].Header.WaitListHead;
  *p_Flink = &p_WaitListHead;
  StartContext[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&p_WaitListHead;
  while ( 1 )
  {
    v3 = *(_QWORD **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_7;
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v5 != v3 )
      goto LABEL_7;
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = (_QWORD *)qword_140F0B898;
    if ( *(__int64 **)qword_140F0B898 != &PopVolumeDevices )
      goto LABEL_7;
    *v3 = &PopVolumeDevices;
    v3[1] = v6;
    *v6 = v3;
    qword_140F0B898 = (__int64)v3;
    KeReleaseGuardedMutex(&PopVolumeLock);
    if ( ObQueryNameString((PVOID)*(v3 - 7), &ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo.Name.Buffer )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObjectNameInfo;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(
               &FileHandle,
               0x100003u,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0xC0000000,
               3u,
               1u,
               0x20u,
               0LL,
               0) >= 0 )
        {
          if ( StartContext[2].Header.Type )
          {
            PopFlushAndHold(FileHandle, &IoStatusBlock);
          }
          else if ( StartContext[2].Header.Signalling )
          {
            NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x53C004u, 0LL, 0, 0LL, 0);
          }
          else
          {
            ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
          }
          ZwClose(FileHandle);
        }
      }
    }
    ExAcquireFastMutex(&PopVolumeLock);
  }
  v7 = p_WaitListHead;
  v8 = Blink;
  if ( p_WaitListHead[1] != (char **)&p_WaitListHead || (char ****)Blink->Flink != &p_WaitListHead )
LABEL_7:
    __fastfail(3u);
  Blink->Flink = (struct _LIST_ENTRY *)p_WaitListHead;
  v7[1] = (char **)v8;
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  KeReleaseGuardedMutex(&PopVolumeLock);
}
