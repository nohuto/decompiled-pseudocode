/*
 * XREFs of NtCreateEnclave @ 0x1407E7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlIsEnclaveFeaturePresent @ 0x14076DD4C (RtlIsEnclaveFeaturePresent.c)
 *     MiCreateEnclave @ 0x1407E71F0 (MiCreateEnclave.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MiValidateZeroBits @ 0x1408FEBC0 (MiValidateZeroBits.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v13; // r12
  int Enclave; // ebx
  int v15; // edi
  __int64 v16; // rcx
  void *Process; // rdi
  char v19; // [rsp+50h] [rbp-E8h]
  size_t Size; // [rsp+64h] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-C8h] BYREF
  void *v23; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v24[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-A8h]
  __int64 v26[6]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v27[48]; // [rsp+C8h] [rbp-70h] BYREF

  v25 = a4;
  v26[1] = (__int64)a2;
  v26[0] = a3;
  Size = a8;
  v24[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v27, 0, sizeof(v27));
  v24[0] = 0LL;
  Pool = 0LL;
  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = PreviousMode;
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
    if ( qword_140E37278 )
    {
      v15 = 4096;
      v13 = a5;
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
  v13 = a5;
  if ( a5 )
  {
LABEL_11:
    Enclave = -1073741581;
    goto LABEL_46;
  }
  if ( a8 > 0x24 )
    goto LABEL_13;
  v15 = 0;
LABEL_19:
  if ( (int)MiValidateZeroBits(v26) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_46;
  }
  if ( !v25 )
  {
    Enclave = -1073741582;
    goto LABEL_46;
  }
  if ( v13 > v25 )
    goto LABEL_11;
  if ( v19 == 1 )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v16 = (__int64)a2;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v24[0] = *a2;
  if ( (_DWORD)Size )
  {
    if ( v15 && (_DWORD)Size != v15 )
    {
LABEL_13:
      Enclave = -1073741820;
      goto LABEL_46;
    }
    Pool = (void *)MiAllocatePool(0x100uLL, ((unsigned int)Size + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1145400653);
    v23 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_46;
    }
    if ( v19 != 1 )
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
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v27);
  }
  Enclave = MiCreateEnclave((int)Process, v24, v26[0], v25, v13, a6, (__int64)Pool, Size, (__int64)&Size + 4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v27, 0LL);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_46:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *a2 = v24[0];
  if ( a9 )
    *a9 = HIDWORD(Size);
  return (unsigned int)Enclave;
}
