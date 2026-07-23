/*
 * XREFs of NtLoadEnclaveData @ 0x1409CAD50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiDereferenceEnclaveModule @ 0x1407E77C0 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1408FD08C (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1409CB8C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  HANDLE v22; // rbx
  _QWORD *v23; // r15
  volatile signed __int32 *v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rbx
  __int64 v29; // r8
  NTSTATUS DataIntoVsmEnclave; // r15d
  __int64 Tag; // [rsp+20h] [rbp-178h]
  NTSTATUS v32; // [rsp+60h] [rbp-138h] BYREF
  char v33; // [rsp+64h] [rbp-134h]
  int v34; // [rsp+68h] [rbp-130h]
  HANDLE v35; // [rsp+70h] [rbp-128h]
  PSIZE_T v36; // [rsp+78h] [rbp-120h]
  PVOID Object; // [rsp+80h] [rbp-118h] BYREF
  __int64 v38; // [rsp+88h] [rbp-110h] BYREF
  __int64 v39; // [rsp+90h] [rbp-108h]
  int v40; // [rsp+98h] [rbp-100h]
  __int64 v41; // [rsp+A0h] [rbp-F8h]
  __int64 v42; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE *v43; // [rsp+B0h] [rbp-E8h]
  PVOID Base; // [rsp+B8h] [rbp-E0h]
  __int64 v45; // [rsp+C0h] [rbp-D8h]
  PULONG v46; // [rsp+C8h] [rbp-D0h]
  PVOID v47; // [rsp+D0h] [rbp-C8h]
  HANDLE v48; // [rsp+E8h] [rbp-B0h]
  PSIZE_T v49; // [rsp+F0h] [rbp-A8h]
  _OWORD v50[3]; // [rsp+108h] [rbp-90h] BYREF
  _BYTE v51[32]; // [rsp+138h] [rbp-60h] BYREF

  v9 = BufferSize;
  v41 = BufferSize;
  Base = Buffer;
  v39 = (__int64)BaseAddress;
  v10 = ProcessHandle;
  v35 = ProcessHandle;
  v36 = NumberOfBytesWritten;
  v48 = ProcessHandle;
  v11 = PageInformation;
  v47 = PageInformation;
  v12 = PageInformationLength;
  v49 = NumberOfBytesWritten;
  v46 = EnclaveError;
  memset(v50, 0, sizeof(v50));
  v32 = 0;
  v42 = 0LL;
  LODWORD(v38) = 0;
  Pool = 0LL;
  v14 = 0LL;
  v34 = 0;
  v40 = 0;
  Object = 0LL;
  v45 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( EnclaveError )
    {
      v26 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
        v26 = (__int64)EnclaveError;
      *(_DWORD *)v26 = *(_DWORD *)v26;
    }
    if ( NumberOfBytesWritten )
    {
      v27 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)NumberOfBytesWritten < 0x7FFFFFFF0000LL )
        v27 = (__int64)NumberOfBytesWritten;
      *(_QWORD *)v27 = *(_QWORD *)v27;
    }
  }
  if ( PageInformationLength )
  {
    if ( PageInformationLength > 0xFFFF )
      goto LABEL_40;
    if ( PageInformationLength > 0x20 )
    {
      Pool = (_BYTE *)MiAllocatePool(0x40uLL, PageInformationLength, 1230007877);
      v43 = Pool;
      if ( !Pool )
      {
        v32 = -1073741670;
        goto LABEL_41;
      }
      v11 = v47;
    }
    else
    {
      Pool = v51;
      v43 = v51;
    }
    memmove(Pool, v11, PageInformationLength);
    PreviousMode = v33;
    v9 = v41;
    v10 = v35;
  }
  if ( (v39 & 0xFFF) != 0 )
  {
    v32 = -1073741584;
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
    v32 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)v10,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v32 < 0 )
      goto LABEL_41;
  }
  KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v50);
  v34 = 1;
  v18 = MiObtainReferencedVadEx(v39, 0, &v32);
  v14 = v18;
  if ( !v18
    || ((v19 = *(_DWORD *)(v18 + 48), (v19 & 0x200000) == 0) || (v19 & 0xC000000) != 0x8000000 ? (v20 = 0) : (v20 = 1),
        !v20) )
  {
    v32 = -1073741800;
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
                             v39,
                             PageInformationLength,
                             (__int64)Pool,
                             Base,
                             v41,
                             Protect,
                             (__int64)&v42);
    }
    else
    {
      v28 = (void *)PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
      Tag = v39;
      LOBYTE(v29) = PreviousMode;
      DataIntoVsmEnclave = MiLoadSectionIntoVsmEnclave(Object, v14, v29, v28);
      v14 = 0LL;
      ObfDereferenceObject(v28);
    }
    v32 = DataIntoVsmEnclave;
    goto LABEL_41;
  }
  if ( !PageInformationLength )
  {
    v21 = v41;
    if ( v41 )
    {
      KiUnstackDetachProcess((__int64)v50, 0LL);
      v32 = MiCopyPagesIntoEnclave((ULONG_PTR)Object, (__int64)Base, v21, Protect, (__int64)&v42, (__int64)&v38);
      goto LABEL_15;
    }
LABEL_42:
    v32 = -1073741582;
    goto LABEL_41;
  }
LABEL_40:
  v32 = -1073741820;
LABEL_41:
  v12 = v34;
LABEL_15:
  v22 = v35;
  v23 = v36;
  if ( v14 )
    MiUnlockAndDereferenceVad((char *)v14);
  if ( v12 )
    KiUnstackDetachProcess((__int64)v50, 0LL);
  if ( Object && v22 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( Pool && Pool != v51 )
    ExFreePoolWithTag(Pool, 0);
  v24 = (volatile signed __int32 *)v45;
  if ( v45 )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(void **)(v45 + 16),
      (__int64)v11,
      Tag,
      *(_DWORD *)(v45 + 36),
      *(_DWORD *)(v45 + 40));
    MiDereferenceEnclaveModule(v24);
  }
  if ( v23 )
    *v23 = v42;
  if ( EnclaveError )
    *EnclaveError = v38;
  return v32;
}
