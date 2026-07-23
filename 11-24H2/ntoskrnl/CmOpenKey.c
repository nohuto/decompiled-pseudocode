/*
 * XREFs of CmOpenKey @ 0x1409DE810
 * Callers:
 *     CmOpenKeyCallout @ 0x1406F3060 (CmOpenKeyCallout.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtOpenKeyTransactedEx @ 0x1409DE6B0 (NtOpenKeyTransactedEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpAllocateParseContext @ 0x1406F309C (CmpAllocateParseContext.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     CmpFreeExtraParameter @ 0x1409DEC00 (CmpFreeExtraParameter.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmOpenKey(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  int v6; // r12d
  int v8; // esi
  int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 ParseContext; // rbx
  POBJECT_TYPE *v18; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v20; // edi
  __int64 **v21; // rsi
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID Object[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v30; // [rsp+60h] [rbp-B8h]
  unsigned int v31; // [rsp+68h] [rbp-B0h]
  HANDLE v32; // [rsp+70h] [rbp-A8h]
  HANDLE Handle; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+80h] [rbp-98h]
  _QWORD *v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int128 v37; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v38; // [rsp+B0h] [rbp-68h]
  LARGE_INTEGER v39[4]; // [rsp+B8h] [rbp-60h] BYREF

  v6 = a4;
  v8 = a2;
  v35 = (_QWORD *)a1;
  v38 = a1;
  v34 = a3;
  Handle = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  LODWORD(Object[0]) = 0;
  memset(v39, 0, sizeof(v39));
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v39, 0x20000u);
  v10 = v8 & 0x300;
  v30 = v10;
  v11 = v8 & 0xFFFFFCFF;
  v31 = v11;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3, a4) )
  {
    if ( (v6 & 0x1C) == v6 )
    {
      if ( a6 == 1 )
      {
        v13 = 0x7FFFFFFF0000LL;
        if ( a1 < 0x7FFFFFFF0000LL )
          v13 = a1;
        *(_QWORD *)v13 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = *(_QWORD *)(a3 + 16);
        *(_OWORD *)Object = 0LL;
        if ( v14 >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        LODWORD(Object[0]) = *(_DWORD *)v14;
        v15 = *(void **)(v14 + 8);
        Object[1] = v15;
        v37 = *(_OWORD *)Object;
        if ( (unsigned __int16)_mm_cvtsi128_si32(*(__m128i *)Object) && ((unsigned __int8)v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else
      {
        v37 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      Object[0] = *(PVOID *)(a3 + 8);
      v32 = Object[0];
      ParseContext = CmpAllocateParseContext();
      v34 = ParseContext;
      if ( ParseContext )
      {
        if ( CmpTraceRoutine )
        {
          if ( Object[0] )
          {
            PreviousMode = KeGetCurrentThread()->PreviousMode;
            Object[0] = 0LL;
            if ( ObReferenceObjectByHandle(v32, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL) >= 0 )
            {
              v36 = *((_QWORD *)Object[0] + 1);
              ObfDereferenceObject(Object[0]);
            }
          }
        }
        *(_DWORD *)(ParseContext + 28) = v10;
        *(_QWORD *)(ParseContext + 72) = a5;
        *(_DWORD *)(ParseContext + 24) = v6;
        v18 = CmKeyObjectType;
        CurrentSilo = PsGetCurrentSilo();
        v20 = ObOpenObjectByNameEx(a3, (__int64)v18, a6, 0LL, v11, ParseContext, (__int64)CurrentSilo, &Handle);
        v16 = v20 >= 0;
        if ( v20 >= 0 )
        {
          v16 = (unsigned __int64)Handle;
          *v35 = Handle;
        }
      }
      else
      {
        v20 = -1073741670;
      }
      if ( CmpTraceRoutine )
      {
        v27 = v36;
        LOBYTE(v27) = 11;
        guard_dispatch_icall_no_overrides(v27, v39);
      }
      if ( !ParseContext )
        goto LABEL_30;
      if ( *(_QWORD *)(ParseContext + 88) )
      {
        CmpLockRegistry(v16);
        CmpDereferenceKeyControlBlock(*(_QWORD *)(ParseContext + 88));
        CmpUnlockRegistry(v26);
      }
      v21 = (__int64 **)(ParseContext + 144);
      v22 = *(__int64 **)(ParseContext + 144);
      v23 = (__int64 *)*v22;
      if ( v22[1] == ParseContext + 144 && (__int64 *)v23[1] == v22 )
      {
        *v21 = v23;
        v23[1] = (__int64)v21;
        if ( v22 == (__int64 *)v21 )
        {
LABEL_29:
          CmSiFreeMemory((PPRIVILEGE_SET)ParseContext);
LABEL_30:
          CmpReleaseShutdownRundown(v16);
          return (unsigned int)v20;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v22);
          v22 = *v21;
          v25 = **v21;
          if ( (__int64 **)(*v21)[1] != v21 || *(__int64 **)(v25 + 8) != v22 )
            break;
          *v21 = (__int64 *)v25;
          *(_QWORD *)(v25 + 8) = v21;
          if ( v22 == (__int64 *)v21 )
            goto LABEL_29;
        }
      }
      __fastfail(3u);
    }
    CmpReleaseShutdownRundown(v12);
    return 3221225714LL;
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v12) = 11;
      guard_dispatch_icall_no_overrides(v12, v39);
    }
    return 3221225865LL;
  }
}
