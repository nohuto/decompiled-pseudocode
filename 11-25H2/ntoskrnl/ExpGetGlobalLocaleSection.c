/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x1408FA174
 * Callers:
 *     NtInitializeNlsFiles @ 0x1408FA030 (NtInitializeNlsFiles.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14069BA80 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1, void *a2)
{
  struct _LIST_ENTRY *Flink; // rsi
  PVOID Blink; // r14
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v8; // rax
  __int64 *v9; // rdi
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE SectionHandle; // [rsp+D8h] [rbp+58h] BYREF

  Object = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[64].Flink;
  Blink = Flink->Blink;
  if ( (unsigned __int64)Blink > 1 )
  {
    PsReferenceSiloContext(Flink->Blink);
LABEL_3:
    *a1 = Blink;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    Blink = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)Flink, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Flink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Flink, v8, (__int64)Flink);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = Flink->Blink;
    if ( v10 == (struct _LIST_ENTRY *)1 )
    {
      v11 = (struct _LIST_ENTRY *)Object;
      PsReferenceSiloContext(Object);
      Flink->Blink = v11;
    }
    else if ( v10 )
    {
      ObfDereferenceObject(Object);
      Blink = v10;
      PsReferenceSiloContext(v10);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Flink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Flink);
    KeAbPostRelease((ULONG_PTR)Flink);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    goto LABEL_3;
  }
  return result;
}
