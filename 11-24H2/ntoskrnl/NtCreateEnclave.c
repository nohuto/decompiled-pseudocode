/*
 * XREFs of NtCreateEnclave @ 0x1407F7960
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlIsEnclaveFeaturePresent @ 0x14077D080 (RtlIsEnclaveFeaturePresent.c)
 *     MiCreateEnclave @ 0x1407F7080 (MiCreateEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MiValidateZeroBits @ 0x1408DFE40 (MiValidateZeroBits.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *Src,
        unsigned int a8,
        _DWORD *a9)
{
  void *Pool; // rsi
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned __int64 v14; // r12
  int Enclave; // ebx
  int v16; // edi
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-E8h]
  size_t Size; // [rsp+64h] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-C8h] BYREF
  void *v24; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v25[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-A8h]
  __int64 v27[6]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v28[48]; // [rsp+C8h] [rbp-70h] BYREF

  v26 = a4;
  v27[1] = (__int64)a2;
  v27[0] = a3;
  Size = a8;
  v25[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v28, 0, sizeof(v28));
  v25[0] = 0LL;
  Pool = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a9;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
LABEL_17:
    if ( qword_140E374B8 )
    {
      v16 = 4096;
      v14 = a5;
      goto LABEL_19;
    }
LABEL_16:
    Enclave = -1073741637;
    goto LABEL_46;
  }
  if ( a6 == 2 )
  {
    if ( !RtlIsEnclaveFeaturePresent(2u) )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( (unsigned int)(a6 - 16) > 1 || !RtlIsEnclaveFeaturePresent(8u) )
    goto LABEL_16;
  v14 = a5;
  if ( a5 )
  {
LABEL_11:
    Enclave = -1073741581;
    goto LABEL_46;
  }
  if ( v13 > 0x24 )
    goto LABEL_13;
  v16 = 0;
LABEL_19:
  if ( (int)MiValidateZeroBits(v27) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_46;
  }
  if ( !v26 )
  {
    Enclave = -1073741582;
    goto LABEL_46;
  }
  if ( v14 > v26 )
    goto LABEL_11;
  if ( v20 == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a2;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v25[0] = *a2;
  if ( (_DWORD)Size )
  {
    if ( v16 && (_DWORD)Size != v16 )
    {
LABEL_13:
      Enclave = -1073741820;
      goto LABEL_46;
    }
    Pool = (void *)MiAllocatePool(0x100uLL, ((unsigned int)Size + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1145400653);
    v24 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_46;
    }
    if ( v20 != 1 )
      goto LABEL_39;
    if ( (unsigned int)Size >= 0x10000uLL )
    {
      if ( ((unsigned __int8)Src & 3) == 0 )
      {
LABEL_39:
        memmove(Pool, Src, (unsigned int)Size);
        goto LABEL_40;
      }
    }
    else if ( ((unsigned __int8)Src & 3) == 0 )
    {
      goto LABEL_39;
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_40:
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    BugCheckParameter1 = (ULONG_PTR)Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(a1, 0x6D566D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL);
    if ( Enclave < 0 )
      goto LABEL_46;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
  }
  Enclave = MiCreateEnclave((int)Process, v25, v27[0], v26, v14, a6, (__int64)Pool, Size, (__int64)&Size + 4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v28, 0);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_46:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *a2 = v25[0];
  if ( a9 )
    *a9 = HIDWORD(Size);
  return (unsigned int)Enclave;
}
