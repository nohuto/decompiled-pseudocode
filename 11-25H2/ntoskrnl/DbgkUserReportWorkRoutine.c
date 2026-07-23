/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x1406FB730
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsMultiResumeThread @ 0x140462278 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x14069B440 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x14069BB80 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x14069CA60 (ZwCreateThreadEx.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  struct _KPROCESS *v3; // rax
  NTSTATUS v4; // edx
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, 44);
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KeStackAttachProcess(v3, &ApcState);
  v4 = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( v4 >= 0 )
  {
    v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( v4 >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v5 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v5 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v5 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v5 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v5 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v5 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v5 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v5 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v5 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v5 + 18) = *((_QWORD *)P + 21);
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             StartRoutine,
             BaseAddress,
             0x27u,
             0LL,
             0LL,
             0LL,
             0LL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( v4 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1440), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsMultiResumeThread(v2, 0LL, 1u);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDbgkWerReportActive, &qword_1400259D0, 4u);
    ZwResumeThread(ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  ExFreePoolWithTag(P, 0x4B474244u);
  return ObfDereferenceObject((PVOID)v2);
}
