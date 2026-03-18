/*
 * XREFs of CmOpenKey @ 0x140A31750
 * Callers:
 *     CmOpenKeyCallout @ 0x1407BFC70 (CmOpenKeyCallout.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtOpenKeyTransactedEx @ 0x140A315F0 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140AD3490 (NtOpenKeyEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  int v6; // edi
  int v8; // r15d
  int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  void *v16; // rdx
  __int64 Pool; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // esi
  KPROCESSOR_MODE PreviousMode; // r9
  POBJECT_TYPE *v22; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v24; // rcx
  PVOID Object[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+60h] [rbp-A8h]
  unsigned int v27; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h]
  HANDLE v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-78h]
  HANDLE *v33; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER v34[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v35; // [rsp+128h] [rbp+20h]

  v35 = a4;
  v6 = a4;
  v8 = a2;
  v33 = a1;
  v30 = a3;
  v29 = 0LL;
  v32 = 0LL;
  Handle = 0LL;
  LODWORD(Object[0]) = 0;
  memset(v34, 0, sizeof(v34));
  v31 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v34, 0x20000u);
  v10 = v8 & 0x300;
  v26 = v10;
  v11 = v8 & 0xFFFFFCFF;
  v27 = v11;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3, a4) )
  {
    if ( (v6 & 0x1C) == v6 )
    {
      if ( a6 == 1 )
      {
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v14 = (__int64)a1;
        *(_QWORD *)v14 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = *(_QWORD *)(a3 + 16);
        *(_OWORD *)Object = 0LL;
        if ( v15 >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        LODWORD(Object[0]) = *(_DWORD *)v15;
        v16 = *(void **)(v15 + 8);
        Object[1] = v16;
        v32 = *(_OWORD *)Object;
        if ( (unsigned __int16)_mm_cvtsi128_si32(*(__m128i *)Object) && ((unsigned __int8)v16 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else
      {
        v32 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      Object[0] = *(PVOID *)(a3 + 8);
      Handle = Object[0];
      Pool = CmpAllocatePool(0x40uLL);
      v19 = Pool;
      v30 = Pool;
      if ( Pool )
        CmpInitializeParseContext(Pool);
      if ( v19 )
      {
        if ( CmpTraceRoutine )
        {
          if ( Object[0] )
          {
            PreviousMode = KeGetCurrentThread()->PreviousMode;
            Object[0] = 0LL;
            if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL) >= 0 )
            {
              v31 = *((_QWORD *)Object[0] + 1);
              ObfDereferenceObject(Object[0]);
            }
          }
        }
        *(_DWORD *)(v19 + 28) = v10;
        *(_QWORD *)(v19 + 72) = a5;
        *(_DWORD *)(v19 + 24) = v35;
        v22 = CmKeyObjectType;
        CurrentSilo = PsGetCurrentSilo();
        v20 = ObOpenObjectByNameEx(a3, (__int64)v22, a6, 0LL, v11, v19, (__int64)CurrentSilo, &v29);
        v18 = v20 >= 0;
        if ( v20 >= 0 )
        {
          v18 = (unsigned __int64)v29;
          *a1 = v29;
        }
      }
      else
      {
        v20 = -1073741670;
      }
      if ( CmpTraceRoutine )
      {
        v24 = v31;
        LOBYTE(v24) = 11;
        guard_dispatch_icall_no_overrides(v24);
      }
      if ( v19 )
      {
        CmpCleanupParseContext(v19, 0);
        CmSiFreeMemory((PPRIVILEGE_SET)v19);
      }
      CmpReleaseShutdownRundown(v18);
      return (unsigned int)v20;
    }
    else
    {
      CmpReleaseShutdownRundown(v12);
      return 3221225714LL;
    }
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v12) = 11;
      guard_dispatch_icall_no_overrides(v12);
    }
    return 3221225865LL;
  }
}
