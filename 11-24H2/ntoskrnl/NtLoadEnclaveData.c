/*
 * XREFs of NtLoadEnclaveData @ 0x1408D9D70
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiDereferenceEnclaveModule @ 0x1407F7650 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        void *Src,
        size_t Size,
        unsigned __int64 a8,
        _DWORD *a9)
{
  __int16 v9; // r10
  ULONG_PTR v10; // r11
  const void *v11; // r9
  int v12; // r13d
  _BYTE *Pool; // rsi
  __int64 v14; // r14
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  ULONG_PTR v22; // rbx
  _QWORD *v23; // r15
  volatile signed __int32 *v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rbx
  __int64 v29; // r8
  unsigned int DataIntoVsmEnclave; // r15d
  __int64 Tag; // [rsp+20h] [rbp-178h]
  unsigned int v32; // [rsp+60h] [rbp-138h] BYREF
  char v33; // [rsp+64h] [rbp-134h]
  int v34; // [rsp+68h] [rbp-130h]
  ULONG_PTR v35; // [rsp+70h] [rbp-128h]
  unsigned __int64 v36; // [rsp+78h] [rbp-120h]
  PVOID Object; // [rsp+80h] [rbp-118h] BYREF
  __int64 v38; // [rsp+88h] [rbp-110h] BYREF
  __int64 v39; // [rsp+90h] [rbp-108h]
  int v40; // [rsp+98h] [rbp-100h]
  __int64 v41; // [rsp+A0h] [rbp-F8h]
  __int64 v42; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE *v43; // [rsp+B0h] [rbp-E8h]
  PVOID Base; // [rsp+B8h] [rbp-E0h]
  __int64 v45; // [rsp+C0h] [rbp-D8h]
  _DWORD *v46; // [rsp+C8h] [rbp-D0h]
  void *v47; // [rsp+D0h] [rbp-C8h]
  ULONG_PTR v48; // [rsp+E8h] [rbp-B0h]
  unsigned __int64 v49; // [rsp+F0h] [rbp-A8h]
  _OWORD v50[3]; // [rsp+108h] [rbp-90h] BYREF
  _BYTE v51[32]; // [rsp+138h] [rbp-60h] BYREF

  v9 = a4;
  v41 = a4;
  Base = a3;
  v39 = a2;
  v10 = BugCheckParameter1;
  v35 = BugCheckParameter1;
  v36 = a8;
  v48 = BugCheckParameter1;
  v11 = Src;
  v47 = Src;
  v12 = Size;
  v49 = a8;
  v46 = a9;
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
    if ( a9 )
    {
      v26 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v26 = (__int64)a9;
      *(_DWORD *)v26 = *(_DWORD *)v26;
    }
    if ( a8 )
    {
      v27 = 0x7FFFFFFF0000LL;
      if ( a8 < 0x7FFFFFFF0000LL )
        v27 = a8;
      *(_QWORD *)v27 = *(_QWORD *)v27;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( (unsigned int)Size > 0xFFFF )
      goto LABEL_40;
    if ( (unsigned int)Size > 0x20 )
    {
      Pool = (_BYTE *)MiAllocatePool(0x40uLL, (unsigned int)Size, 1230007877);
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
    memmove(Pool, v11, (unsigned int)Size);
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
  if ( v10 == -1LL )
  {
    Object = CurrentThread->ApcState.Process;
  }
  else
  {
    v32 = ObpReferenceObjectByHandleWithTag(
            v10,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( (v32 & 0x80000000) != 0 )
      goto LABEL_41;
  }
  KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v50);
  v34 = 1;
  v18 = MiObtainReferencedVadEx(v39, 0LL, (int *)&v32);
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
                             Size,
                             (__int64)Pool,
                             Base,
                             v41,
                             a5,
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
  if ( !(_DWORD)Size )
  {
    v21 = v41;
    if ( v41 )
    {
      KiUnstackDetachProcess((__int64)v50, 0);
      v32 = MiCopyPagesIntoEnclave((ULONG_PTR)Object, (__int64)Base, v21, a5, (__int64)&v42, (__int64)&v38);
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
  v23 = (_QWORD *)v36;
  if ( v14 )
    MiUnlockAndDereferenceVad((PVOID)v14);
  if ( v12 )
    KiUnstackDetachProcess((__int64)v50, 0);
  if ( Object && v22 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( Pool && Pool != v51 )
    ExFreePoolWithTag(Pool, 0);
  v24 = (volatile signed __int32 *)v45;
  if ( v45 )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(_QWORD *)(v45 + 16),
      (__int64)v11,
      Tag,
      *(_DWORD *)(v45 + 36),
      *(_DWORD *)(v45 + 40));
    MiDereferenceEnclaveModule(v24);
  }
  if ( v23 )
    *v23 = v42;
  if ( a9 )
    *a9 = v38;
  return v32;
}
