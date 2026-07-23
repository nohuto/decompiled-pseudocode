/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1408929D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v11; // ebx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  PVOID v16; // rdi
  ULONG_PTR v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v22; // rsi
  signed __int64 *v23; // rbx
  char *v24; // rdi
  PVOID v25; // rcx
  PVOID Object; // [rsp+30h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B8h]
  unsigned __int64 ClientViewSize; // [rsp+60h] [rbp-A8h]
  void *v31; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES v32; // [rsp+78h] [rbp-90h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h]

  v28 = 0LL;
  v29 = 0LL;
  ClientViewSize = 0LL;
  memset(&v32, 0, 44);
  v31 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_24;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)ProcessHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v33 = 0LL;
    v34 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (Flags & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)PortMessage < 0x7FFFFFFF0000LL )
        v15 = (__int64)PortMessage;
      RtlCopyVolatileMemory(&v33, (const void *)v15, 0x18uLL);
      LOWORD(v28) = v33;
      WORD1(v28) = v33 + 40;
      DWORD1(v28) = DWORD1(v33);
      *((_QWORD *)&v28 + 1) = DWORD2(v33);
      *(_QWORD *)&v29 = HIDWORD(v33);
      DWORD2(v29) = v34;
      ClientViewSize = HIDWORD(v34);
    }
    else
    {
      if ( (unsigned __int64)PortMessage < 0x7FFFFFFF0000LL )
        v15 = (__int64)PortMessage;
      RtlCopyVolatileMemory(&v28, (const void *)v15, 0x28uLL);
    }
    if ( (unsigned __int64)ObjectAttributes < 0x7FFFFFFF0000LL )
      v13 = (__int64)ObjectAttributes;
    RtlCopyVolatileMemory(&v32, (const void *)v13, 0x30uLL);
  }
  else
  {
    v28 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v29 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v32 = *ObjectAttributes;
  }
  v16 = Object;
  v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v29), ClientViewSize, v12, (__int64)&BugCheckParameter2);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v16);
    goto LABEL_24;
  }
  v17 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    ObfDereferenceObject(v16);
    v11 = -1073740029;
    goto LABEL_24;
  }
  v18 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( v18 )
  {
    v19 = v18[161] - *((_QWORD *)&v28 + 1);
    if ( !v19 )
      v19 = v18[162] - v29;
    if ( v19 )
    {
      AlpcpUnlockMessage(BugCheckParameter2);
      ObfDereferenceObject(v16);
      v11 = -1073741813;
      goto LABEL_24;
    }
    v20 = (_QWORD *)v18[68];
    ObfReferenceObjectWithTag(v20, 0x63706C41u);
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v22 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    v25 = v16;
    goto LABEL_38;
  }
  v23 = (signed __int64 *)(v22 + 352);
  v24 = (char *)KeAbPreAcquire(v22 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v22 + 352), 0, v24, v22 + 352);
  if ( v24 )
    v24[10] = 1;
  if ( (*(_DWORD *)(v22 + 416) & 0x40) == 0 )
  {
    v20 = *(_QWORD **)(v22 + 24);
    if ( v20[58] == *((_QWORD *)&v28 + 1) )
    {
      ObfReferenceObjectWithTag(v20, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v17 = BugCheckParameter2;
      v16 = Object;
LABEL_22:
      AlpcpUnlockMessage(v17);
      *(_QWORD *)&v29 = 0LL;
      v11 = PsOpenProcess(
              (unsigned __int64)&v31,
              DesiredAccess,
              (__int64)&v32,
              (__int128 *)((char *)&v28 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v20, 0x63706C41u);
      ObfDereferenceObject(v16);
      if ( v11 >= 0 )
        *ProcessHandle = v31;
      goto LABEL_24;
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    AlpcpUnlockMessage(BugCheckParameter2);
    v25 = Object;
LABEL_38:
    ObfDereferenceObject(v25);
    v11 = -1073741790;
    goto LABEL_24;
  }
  if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v22 + 352));
  KeAbPostRelease(v22 + 352);
  AlpcpUnlockMessage(BugCheckParameter2);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_24:
  KeLeaveCriticalRegionThread();
  return v11;
}
