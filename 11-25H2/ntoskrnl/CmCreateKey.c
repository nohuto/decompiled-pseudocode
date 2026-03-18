/*
 * XREFs of CmCreateKey @ 0x140AD24C0
 * Callers:
 *     CmCreateKeyCallout @ 0x1407BFBD0 (CmCreateKeyCallout.c)
 *     NtCreateKey @ 0x140AD2A50 (NtCreateKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpAllocateParseContext @ 0x1407C9868 (CmpAllocateParseContext.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __m128i *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  int v9; // r12d
  __int64 v10; // rdi
  unsigned int v11; // r12d
  unsigned __int64 v12; // rcx
  int v13; // ebx
  unsigned __int64 v14; // r12
  unsigned __int16 v15; // dx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  void *v20; // rax
  int v21; // esi
  KPROCESSOR_MODE v22; // r9
  _DWORD *ParseContext; // rax
  POBJECT_TYPE *v24; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v26; // rcx
  char PreviousMode; // [rsp+41h] [rbp-107h]
  char v29; // [rsp+43h] [rbp-105h]
  unsigned int v30; // [rsp+48h] [rbp-100h]
  int v31; // [rsp+50h] [rbp-F8h]
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE *v34; // [rsp+68h] [rbp-E0h]
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-D8h]
  __int64 v36; // [rsp+78h] [rbp-D0h]
  __m128i v37; // [rsp+80h] [rbp-C8h]
  __m128i v38; // [rsp+90h] [rbp-B8h]
  __m128i v39; // [rsp+A0h] [rbp-A8h]
  __m128i v40; // [rsp+B0h] [rbp-98h]
  int v41; // [rsp+C0h] [rbp-88h]
  size_t Size; // [rsp+C8h] [rbp-80h]
  HANDLE *v43; // [rsp+D0h] [rbp-78h]
  ULONG_PTR v44; // [rsp+D8h] [rbp-70h]
  _DWORD *v45; // [rsp+E0h] [rbp-68h]
  LARGE_INTEGER v46[4]; // [rsp+E8h] [rbp-60h] BYREF

  v9 = a2;
  v34 = a1;
  v43 = a1;
  v44 = a3;
  v45 = a7;
  Handle = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  Privileges = 0LL;
  v41 = 0;
  memset(v46, 0, sizeof(v46));
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v46, 0x20000u);
  v10 = 0LL;
  v31 = v9 & 0x300;
  v11 = v9 & 0xFFFFFCFF;
  v30 = v11;
  v29 = CmpAcquireShutdownRundown(a1, a2, a3, a4);
  if ( v29 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v37 = 0LL;
        v12 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
          v12 = (unsigned __int64)a5;
        v37.m128i_i32[0] = *(_DWORD *)v12;
        v14 = *(_QWORD *)(v12 + 8);
        v37.m128i_i64[1] = v14;
        v38 = v37;
        v15 = _mm_cvtsi128_si32(v37);
        if ( v15 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v15 + v14;
          if ( v12 > 0x7FFFFFFF0000LL || v15 + v14 < v14 )
          {
            v14 = v37.m128i_u64[1];
            v15 = v37.m128i_i16[0];
          }
        }
        if ( (v15 & 1) != 0 )
        {
          v13 = -1073741811;
          goto LABEL_52;
        }
        if ( v15 )
        {
          Size = v15;
          Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota();
          if ( !Privileges )
          {
            v13 = -1073741670;
            goto LABEL_52;
          }
          memmove(Privileges, (const void *)v14, Size);
          v38.m128i_i64[1] = (__int64)Privileges;
        }
        v11 = v30;
      }
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v34 < 0x7FFFFFFF0000LL )
        v16 = (__int64)v34;
      *(_QWORD *)v16 = 0LL;
      if ( a7 )
      {
        v17 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
          v17 = (__int64)a7;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = *(_QWORD *)(a3 + 16);
      v40 = 0LL;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v40.m128i_i32[0] = *(_DWORD *)v12;
      v18 = *(_QWORD *)(v12 + 8);
      v40.m128i_i64[1] = v18;
      v39 = v40;
      v19 = _mm_cvtsi128_si32(v40);
      if ( v19 )
      {
        if ( (v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = v19 + v18;
      }
      if ( (v40.m128i_i8[0] & 1) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_52;
      }
      v20 = *(void **)(a3 + 8);
      Handle = v20;
      v21 = v31;
    }
    else
    {
      if ( a5 )
        v38 = *a5;
      v39 = *(__m128i *)*(_QWORD *)(a3 + 16);
      v20 = *(void **)(a3 + 8);
      Handle = v20;
      v21 = v31;
    }
    if ( CmpTraceRoutine )
    {
      if ( v20 )
      {
        v22 = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v22, &Object, 0LL) >= 0 )
        {
          v36 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      ParseContext = (_DWORD *)CmpAllocateParseContext();
      v10 = (__int64)ParseContext;
      Object = ParseContext;
      if ( ParseContext )
      {
        ParseContext[7] = v21;
        ParseContext[6] = a6;
        *ParseContext = 1;
        *((_QWORD *)ParseContext + 1) = v38.m128i_i64[1];
        *((_WORD *)ParseContext + 2) = v38.m128i_i16[0];
        *((_QWORD *)ParseContext + 9) = a8;
        v24 = CmKeyObjectType;
        CurrentSilo = PsGetCurrentSilo();
        v13 = ObOpenObjectByNameEx(a3, (__int64)v24, PreviousMode, 0LL, v11, v10, (__int64)CurrentSilo, &Handle);
        v12 = v13 >= 0;
        if ( v13 >= 0 )
        {
          v12 = (unsigned __int64)v34;
          *v34 = Handle;
          if ( a7 )
            *a7 = *(_DWORD *)(v10 + 32);
        }
      }
      else
      {
        v13 = -1073741670;
      }
    }
    else
    {
      v13 = -1073741811;
    }
  }
  else
  {
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v13 = -1073741431;
  }
LABEL_52:
  if ( CmpTraceRoutine )
  {
    v26 = v36;
    LOBYTE(v26) = 10;
    guard_dispatch_icall_no_overrides(v26);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v10 )
  {
    CmpCleanupParseContext(v10, 0);
    CmSiFreeMemory((PPRIVILEGE_SET)v10);
  }
  if ( v29 )
    CmpReleaseShutdownRundown(v12);
  return (unsigned int)v13;
}
