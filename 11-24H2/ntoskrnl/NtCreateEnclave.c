/*
 * XREFs of NtCreateEnclave @ 0x1407F80D0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlIsEnclaveFeaturePresent @ 0x14077CFB0 (RtlIsEnclaveFeaturePresent.c)
 *     MiCreateEnclave @ 0x1407F77F4 (MiCreateEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MiValidateZeroBits @ 0x1409169F0 (MiValidateZeroBits.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  void *Pool; // rsi
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned int v13; // r8d
  SIZE_T v14; // r12
  NTSTATUS Enclave; // ebx
  int v16; // edi
  __int64 v17; // rcx
  void *Process; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+50h] [rbp-E8h]
  size_t Sizea; // [rsp+64h] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-C8h] BYREF
  void *v26; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v27[2]; // [rsp+80h] [rbp-B8h] BYREF
  SIZE_T v28; // [rsp+90h] [rbp-A8h]
  __int64 v29[6]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v30[48]; // [rsp+C8h] [rbp-70h] BYREF

  v28 = Size;
  v29[1] = (__int64)BaseAddress;
  v29[0] = ZeroBits;
  Sizea = EnclaveInformationLength;
  v27[1] = (unsigned __int64)EnclaveError;
  BugCheckParameter1 = 0LL;
  memset(v30, 0, sizeof(v30));
  v27[0] = 0LL;
  Pool = 0LL;
  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
      v12 = (__int64)EnclaveError;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( EnclaveType == 1 )
  {
LABEL_17:
    if ( qword_140E375F8 )
    {
      v16 = 4096;
      v14 = InitialCommitment;
      goto LABEL_19;
    }
LABEL_16:
    Enclave = -1073741637;
    goto LABEL_46;
  }
  if ( EnclaveType == 2 )
  {
    if ( !RtlIsEnclaveFeaturePresent(2u) )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( EnclaveType - 16 > 1 || !RtlIsEnclaveFeaturePresent(8u) )
    goto LABEL_16;
  v14 = InitialCommitment;
  if ( InitialCommitment )
  {
LABEL_11:
    Enclave = -1073741581;
    goto LABEL_46;
  }
  if ( v13 > 0x24 )
    goto LABEL_13;
  v16 = 0;
LABEL_19:
  if ( (int)MiValidateZeroBits(v29) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_46;
  }
  if ( !v28 )
  {
    Enclave = -1073741582;
    goto LABEL_46;
  }
  if ( v14 > v28 )
    goto LABEL_11;
  if ( v22 == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v17 = (__int64)BaseAddress;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v27[0] = (unsigned __int64)*BaseAddress;
  if ( (_DWORD)Sizea )
  {
    if ( v16 && (_DWORD)Sizea != v16 )
    {
LABEL_13:
      Enclave = -1073741820;
      goto LABEL_46;
    }
    Pool = (void *)MiAllocatePool(0x100uLL, ((unsigned int)Sizea + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1145400653);
    v26 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_46;
    }
    if ( v22 != 1 )
      goto LABEL_39;
    if ( (unsigned int)Sizea >= 0x10000uLL )
    {
      if ( ((unsigned __int8)EnclaveInformation & 3) == 0 )
      {
LABEL_39:
        memmove(Pool, EnclaveInformation, (unsigned int)Sizea);
        goto LABEL_40;
      }
    }
    else if ( ((unsigned __int8)EnclaveInformation & 3) == 0 )
    {
      goto LABEL_39;
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_40:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    BugCheckParameter1 = (ULONG_PTR)Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                0x6D566D4Du,
                (__int64)&BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_46;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
  }
  Enclave = MiCreateEnclave((int)Process, v27, v29[0], v28, v14, EnclaveType, (__int64)Pool, Sizea, (__int64)&Sizea + 4);
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v30, 0, v19, v20);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_46:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *BaseAddress = (PVOID)v27[0];
  if ( EnclaveError )
    *EnclaveError = HIDWORD(Sizea);
  return Enclave;
}
