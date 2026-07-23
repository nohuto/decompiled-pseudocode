/*
 * XREFs of NtLoadEnclaveData @ 0x140A29800
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiDereferenceEnclaveModule @ 0x1407F7DC4 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  __int16 v9; // r10
  HANDLE v10; // r11
  PVOID v11; // r9
  ULONG v12; // r13d
  _BYTE *Pool; // rsi
  __int64 v14; // r14
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  HANDLE v23; // rbx
  _QWORD *v24; // r15
  volatile signed __int32 *v25; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *v29; // rbx
  __int64 v30; // r8
  NTSTATUS DataIntoVsmEnclave; // r15d
  __int64 Tag; // [rsp+20h] [rbp-178h]
  NTSTATUS v33; // [rsp+60h] [rbp-138h] BYREF
  char v34; // [rsp+64h] [rbp-134h]
  int v35; // [rsp+68h] [rbp-130h]
  HANDLE v36; // [rsp+70h] [rbp-128h]
  PSIZE_T v37; // [rsp+78h] [rbp-120h]
  PVOID Object; // [rsp+80h] [rbp-118h] BYREF
  __int64 v39; // [rsp+88h] [rbp-110h] BYREF
  __int64 v40; // [rsp+90h] [rbp-108h]
  int v41; // [rsp+98h] [rbp-100h]
  __int64 v42; // [rsp+A0h] [rbp-F8h]
  __int64 v43; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE *v44; // [rsp+B0h] [rbp-E8h]
  PVOID Base; // [rsp+B8h] [rbp-E0h]
  __int64 v46; // [rsp+C0h] [rbp-D8h]
  PULONG v47; // [rsp+C8h] [rbp-D0h]
  PVOID v48; // [rsp+D0h] [rbp-C8h]
  HANDLE v49; // [rsp+E8h] [rbp-B0h]
  PSIZE_T v50; // [rsp+F0h] [rbp-A8h]
  _OWORD v51[3]; // [rsp+108h] [rbp-90h] BYREF
  _BYTE v52[32]; // [rsp+138h] [rbp-60h] BYREF

  v9 = BufferSize;
  v42 = BufferSize;
  Base = Buffer;
  v40 = (__int64)BaseAddress;
  v10 = ProcessHandle;
  v36 = ProcessHandle;
  v37 = NumberOfBytesWritten;
  v49 = ProcessHandle;
  v11 = PageInformation;
  v48 = PageInformation;
  v12 = PageInformationLength;
  v50 = NumberOfBytesWritten;
  v47 = EnclaveError;
  memset(v51, 0, sizeof(v51));
  v33 = 0;
  v43 = 0LL;
  LODWORD(v39) = 0;
  Pool = 0LL;
  v14 = 0LL;
  v35 = 0;
  v41 = 0;
  Object = 0LL;
  v46 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( EnclaveError )
    {
      v27 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
        v27 = (__int64)EnclaveError;
      *(_DWORD *)v27 = *(_DWORD *)v27;
    }
    if ( NumberOfBytesWritten )
    {
      v28 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)NumberOfBytesWritten < 0x7FFFFFFF0000LL )
        v28 = (__int64)NumberOfBytesWritten;
      *(_QWORD *)v28 = *(_QWORD *)v28;
    }
  }
  if ( PageInformationLength )
  {
    if ( PageInformationLength > 0xFFFF )
      goto LABEL_40;
    if ( PageInformationLength > 0x20 )
    {
      Pool = (_BYTE *)MiAllocatePool(0x40uLL, PageInformationLength, 1230007877);
      v44 = Pool;
      if ( !Pool )
      {
        v33 = -1073741670;
        goto LABEL_41;
      }
      v11 = v48;
    }
    else
    {
      Pool = v52;
      v44 = v52;
    }
    memmove(Pool, v11, PageInformationLength);
    PreviousMode = v34;
    v9 = v42;
    v10 = v36;
  }
  if ( (v40 & 0xFFF) != 0 )
  {
    v33 = -1073741584;
    goto LABEL_41;
  }
  if ( (v9 & 0xFFF) != 0 )
    goto LABEL_42;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( v10 == (HANDLE)-1LL )
  {
    Object = CurrentThread->ApcState.Process;
  }
  else
  {
    v33 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)v10,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v33 < 0 )
      goto LABEL_41;
  }
  KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v51);
  v35 = 1;
  v19 = MiObtainReferencedVadEx(v40, 0LL, &v33, v18);
  v14 = v19;
  if ( !v19
    || ((v20 = *(_DWORD *)(v19 + 48), (v20 & 0x200000) == 0) || (v20 & 0xC000000) != 0x8000000 ? (v21 = 0) : (v21 = 1),
        !v21) )
  {
    v33 = -1073741800;
    goto LABEL_41;
  }
  if ( (*(_DWORD *)(v14 + 64) & 1) == 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v14 + 72) + 76LL) )
    {
      LOBYTE(v11) = PreviousMode;
      DataIntoVsmEnclave = MiLoadDataIntoVsmEnclave(
                             (int)Object,
                             Process,
                             v14,
                             (int)v11,
                             v40,
                             PageInformationLength,
                             (__int64)Pool,
                             Base,
                             v42,
                             Protect,
                             (__int64)&v43);
    }
    else
    {
      v29 = (void *)PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
      Tag = v40;
      LOBYTE(v30) = PreviousMode;
      DataIntoVsmEnclave = MiLoadSectionIntoVsmEnclave(Object, v14, v30, v29);
      v14 = 0LL;
      ObfDereferenceObject(v29);
    }
    v33 = DataIntoVsmEnclave;
    goto LABEL_41;
  }
  if ( !PageInformationLength )
  {
    v22 = v42;
    if ( v42 )
    {
      KiUnstackDetachProcess((__int64)v51, 0, (__int64)Buffer, (__int64)v11);
      v33 = MiCopyPagesIntoEnclave((ULONG_PTR)Object, (__int64)Base, v22, Protect, (__int64)&v43, (__int64)&v39);
      goto LABEL_15;
    }
LABEL_42:
    v33 = -1073741582;
    goto LABEL_41;
  }
LABEL_40:
  v33 = -1073741820;
LABEL_41:
  v12 = v35;
LABEL_15:
  v23 = v36;
  v24 = v37;
  if ( v14 )
    MiUnlockAndDereferenceVad((PVOID)v14);
  if ( v12 )
    KiUnstackDetachProcess((__int64)v51, 0, (__int64)Buffer, (__int64)v11);
  if ( Object && v23 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( Pool && Pool != v52 )
    ExFreePoolWithTag(Pool, 0);
  v25 = (volatile signed __int32 *)v46;
  if ( v46 )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(void **)(v46 + 16),
      (__int64)v11,
      Tag,
      *(_DWORD *)(v46 + 36),
      *(_DWORD *)(v46 + 40));
    MiDereferenceEnclaveModule(v25);
  }
  if ( v24 )
    *v24 = v43;
  if ( EnclaveError )
    *EnclaveError = v39;
  return v33;
}
