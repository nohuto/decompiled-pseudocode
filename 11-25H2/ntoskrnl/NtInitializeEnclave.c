/*
 * XREFs of NtInitializeEnclave @ 0x1407E7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiInitializeEnclave @ 0x1407E77E4 (MiInitializeEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  size_t v5; // r13
  void *Pool; // rdi
  char PreviousMode; // dl
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  PVOID v14; // rsi
  ULONG v16; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  void *v18; // [rsp+58h] [rbp-A0h]
  HANDLE v19; // [rsp+68h] [rbp-90h]
  PULONG v20; // [rsp+70h] [rbp-88h]
  PVOID v21; // [rsp+78h] [rbp-80h]
  _BYTE v22[48]; // [rsp+88h] [rbp-70h] BYREF

  v5 = EnclaveInformationLength;
  v21 = BaseAddress;
  v19 = ProcessHandle;
  v20 = EnclaveError;
  memset(v22, 0, sizeof(v22));
  Object = 0LL;
  v16 = 0;
  Pool = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
      v10 = (__int64)EnclaveError;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !EnclaveInformationLength )
    goto LABEL_12;
  if ( EnclaveInformationLength <= 0x1000 )
  {
    Pool = (void *)MiAllocatePool(0x100uLL, EnclaveInformationLength, 1145400653);
    v18 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_17;
    }
    memmove(Pool, EnclaveInformation, v5);
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
      if ( v11 < 0 )
        goto LABEL_17;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v22);
    }
    v11 = MiInitializeEnclave(Process, (unsigned __int64)v21, (__int64)Pool, v5, &v16);
    goto LABEL_17;
  }
  v11 = -1073741820;
LABEL_17:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v22, 0LL);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v16;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return v11;
}
