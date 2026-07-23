/*
 * XREFs of CmCreateKey @ 0x140A1B2F4
 * Callers:
 *     CmCreateKeyCallout @ 0x1406F3150 (CmCreateKeyCallout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpAllocateParseContext @ 0x1406F309C (CmpAllocateParseContext.c)
 *     CmpFreeParseContext @ 0x1406F30D8 (CmpFreeParseContext.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
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
  int v9; // ebx
  _DWORD *v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  char v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int16 v15; // dx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  struct _PRIVILEGE_SET *v19; // r14
  void *v20; // rdx
  unsigned __int16 v21; // ax
  int v22; // ebx
  unsigned int v23; // r14d
  __int64 ParseContext; // rax
  POBJECT_TYPE *v25; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v28; // rcx
  KPROCESSOR_MODE v29; // r9
  char PreviousMode; // [rsp+42h] [rbp-106h]
  HANDLE Handle; // [rsp+50h] [rbp-F8h] BYREF
  int v32; // [rsp+58h] [rbp-F0h]
  PVOID Object[2]; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE *v34; // [rsp+70h] [rbp-D8h]
  __int64 v35; // [rsp+78h] [rbp-D0h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-C8h]
  __int64 v37; // [rsp+88h] [rbp-C0h]
  __m128i v38; // [rsp+90h] [rbp-B8h]
  __m128i v39; // [rsp+A0h] [rbp-A8h]
  __int128 v40; // [rsp+B0h] [rbp-98h]
  int v41; // [rsp+C0h] [rbp-88h]
  size_t Size; // [rsp+C8h] [rbp-80h]
  HANDLE *v43; // [rsp+D0h] [rbp-78h]
  ULONG_PTR v44; // [rsp+D8h] [rbp-70h]
  _DWORD *v45; // [rsp+E0h] [rbp-68h]
  LARGE_INTEGER v46[4]; // [rsp+E8h] [rbp-60h] BYREF

  v9 = a2;
  v34 = a1;
  v10 = a7;
  Object[0] = a7;
  v43 = a1;
  v44 = a3;
  v45 = a7;
  Handle = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  Privileges = 0LL;
  v41 = 0;
  memset(v46, 0, sizeof(v46));
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v46, 0x20000u);
  v11 = 0LL;
  v32 = v9 & 0x300;
  v13 = CmpAcquireShutdownRundown(a1, a2, a3, a4);
  if ( v13 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v38 = 0LL;
        v12 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
          v12 = (unsigned __int64)a5;
        v38.m128i_i32[0] = *(_DWORD *)v12;
        v14 = *(_QWORD *)(v12 + 8);
        v38.m128i_i64[1] = v14;
        v39 = v38;
        v15 = _mm_cvtsi128_si32(v38);
        if ( v15 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v15 + v14;
          if ( v12 > 0x7FFFFFFF0000LL || v15 + v14 < v14 )
          {
            v14 = v38.m128i_u64[1];
            v15 = v38.m128i_i16[0];
          }
        }
        if ( (v15 & 1) != 0 )
        {
          v22 = -1073741811;
          goto LABEL_44;
        }
        if ( v15 )
        {
          Size = v15;
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v12, v15, 0x78634D43u);
          Privileges = TransientPoolWithQuota;
          if ( !TransientPoolWithQuota )
          {
            v22 = -1073741670;
            goto LABEL_44;
          }
          v19 = TransientPoolWithQuota;
          memmove(TransientPoolWithQuota, (const void *)v14, Size);
          v39.m128i_i64[1] = (__int64)v19;
        }
        v10 = Object[0];
      }
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v34 < 0x7FFFFFFF0000LL )
        v16 = (__int64)v34;
      *(_QWORD *)v16 = 0LL;
      if ( v10 )
      {
        v17 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
          v17 = (__int64)v10;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = *(_QWORD *)(a3 + 16);
      *(_OWORD *)Object = 0LL;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      LODWORD(Object[0]) = *(_DWORD *)v12;
      v20 = *(void **)(v12 + 8);
      Object[1] = v20;
      v40 = *(_OWORD *)Object;
      v21 = _mm_cvtsi128_si32(*(__m128i *)Object);
      if ( v21 )
      {
        if ( ((unsigned __int8)v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)v20 + v21;
      }
      if ( ((__int64)Object[0] & 1) != 0 )
      {
        v22 = -1073741811;
        goto LABEL_44;
      }
      v12 = *(_QWORD *)(a3 + 8);
      Handle = (HANDLE)v12;
      v23 = v9 & 0xFFFFFCFF;
    }
    else
    {
      if ( a5 )
        v39 = *a5;
      v40 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v12 = *(_QWORD *)(a3 + 8);
      Handle = (HANDLE)v12;
      v23 = v9 & 0xFFFFFCFF;
    }
    if ( CmpTraceRoutine )
    {
      if ( v12 )
      {
        v29 = KeGetCurrentThread()->PreviousMode;
        Object[0] = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v29, Object, 0LL) >= 0 )
        {
          v37 = *((_QWORD *)Object[0] + 1);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      ParseContext = CmpAllocateParseContext();
      v11 = ParseContext;
      v35 = ParseContext;
      if ( ParseContext )
      {
        *(_DWORD *)(ParseContext + 28) = v32;
        *(_DWORD *)(ParseContext + 24) = a6;
        *(_DWORD *)ParseContext = 1;
        *(_QWORD *)(ParseContext + 8) = v39.m128i_i64[1];
        *(_WORD *)(ParseContext + 4) = v39.m128i_i16[0];
        *(_QWORD *)(ParseContext + 72) = a8;
        v25 = CmKeyObjectType;
        CurrentSilo = PsGetCurrentSilo();
        v22 = ObOpenObjectByNameEx(a3, (__int64)v25, PreviousMode, 0LL, v23, v11, (__int64)CurrentSilo, &Handle);
        v12 = v22 >= 0;
        if ( v22 >= 0 )
        {
          v12 = (unsigned __int64)v34;
          *v34 = Handle;
          if ( v10 )
            *v10 = *(_DWORD *)(v11 + 32);
        }
      }
      else
      {
        v22 = -1073741670;
      }
    }
    else
    {
      v22 = -1073741811;
    }
  }
  else
  {
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v22 = -1073741431;
  }
LABEL_44:
  if ( CmpTraceRoutine )
  {
    v28 = v37;
    LOBYTE(v28) = 10;
    guard_dispatch_icall_no_overrides(v28, v46);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v11 )
    CmpFreeParseContext((PPRIVILEGE_SET)v11);
  if ( v13 )
    CmpReleaseShutdownRundown(v12);
  return (unsigned int)v22;
}
