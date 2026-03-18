/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x140906FB4
 * Callers:
 *     NtInitializeNlsFiles @ 0x140906E70 (NtInitializeNlsFiles.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1406A6D50 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1, void *a2)
{
  struct _LIST_ENTRY *Flink; // rsi
  PVOID Blink; // r14
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
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
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Flink, (__int64)v8, (__int64)Flink);
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
