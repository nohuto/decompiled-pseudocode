/*
 * XREFs of DbgkCaptureLiveDump @ 0x140707A3C
 * Callers:
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     DbgkpLkmdSnapData @ 0x14057E600 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057E624 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x14057E65C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x14057E9C4 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14057EA28 (DbgkpLkmdSqmIncrementDword.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkpLkmdFireCallbacks @ 0x140708008 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x14070854C (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x1407086EC (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x140709374 (DbgkpTriageDumpInitialize.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v4; // r15
  PVOID v5; // r13
  PEPROCESS v6; // r12
  _DWORD *v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 i; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  char v19; // cl
  PEPROCESS v20; // rax
  int v21; // eax
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rcx
  char v27; // [rsp+40h] [rbp-39h]
  char AccessMode; // [rsp+41h] [rbp-38h]
  unsigned int v29; // [rsp+44h] [rbp-35h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-31h] BYREF
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h] BYREF
  _DWORD *v33; // [rsp+60h] [rbp-19h]
  _QWORD *v34; // [rsp+68h] [rbp-11h]
  __int64 v35; // [rsp+70h] [rbp-9h]
  __int128 v36; // [rsp+78h] [rbp-1h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v35 = a4;
  v6 = 0LL;
  Object = a2;
  v7 = 0LL;
  RegHandle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v34 = 0LL;
  LODWORD(v33) = 0;
  v36 = 0LL;
  v32 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle);
    v4 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x4060uLL, 0x504D444Cu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_53;
  }
  v12 = DbgkpTriageDumpInitialize(PoolWithTag + 2048, Object, a3, PoolWithTag + 2054);
  if ( v12 < 0 )
    goto LABEL_49;
  v12 = guard_dispatch_icall_no_overrides(
          v11 + 2048,
          *(unsigned int *)(a1 + 4),
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 16));
  if ( v12 < 0 )
    goto LABEL_49;
  DbgkpLkmdSnapGlobals((__int64)v11);
  LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
  v13 = ExAllocatePoolWithTag((POOL_TYPE)1025, (unsigned int)RegHandle, 0x704E534Bu);
  v7 = v13;
  if ( v13 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
      v13[i] = -1073741823;
    v13[i] = 1112752980;
  }
  v15 = 0;
  v27 = 1;
  v29 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_44;
  while ( 1 )
  {
    v16 = *(_QWORD *)(a1 + 48);
    v17 = *(_DWORD *)(a1 + 40) + v15;
    v36 = 0xC0000001uLL;
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(
            *(HANDLE *)(v16 + 8 * v17),
            0x1FFFFFu,
            (POBJECT_TYPE)PsThreadType,
            AccessMode,
            &Object,
            0LL);
    v5 = Object;
    v19 = 0;
    if ( v18 == -1073741790 )
      v19 = v27;
    v27 = v19;
    if ( v18 >= 0 )
      break;
    if ( v7 )
      v7[v29] = v18;
    if ( v4 )
    {
      LODWORD(v36) = v18;
      DbgkpLkmdSqmStatus(v4, &v36);
    }
LABEL_33:
    v22 = v27;
    v15 = v29 + 1;
    v29 = v15;
    if ( v15 >= *(_DWORD *)(a1 + 44) )
      goto LABEL_36;
  }
  if ( !v6 )
  {
    v20 = IoThreadToProcess((PETHREAD)Object);
    v6 = v20;
    if ( v20 )
    {
      ObfReferenceObjectWithTag(v20, 0x4C676244u);
      DbgkpLkmdSnapDataEx((__int64)v11, (__int64)v6, 2112LL, 4LL);
    }
  }
  v21 = DbgkpLkmdSnapThread((__int64)v11, a1, (__int64)v5, (__int64)&v36);
  if ( !v21 )
    v21 = v36;
  if ( v7 )
    v7[v29] = v21;
  DbgkpLkmdFireCallbacks(v11, 2LL, v5);
  if ( v4 )
    DbgkpLkmdSqmStatus(v4, &v36);
  ObfDereferenceObject(v5);
  v5 = 0LL;
  if ( (_DWORD)v36 != -1073741670 )
    goto LABEL_33;
  v22 = v27;
LABEL_36:
  if ( v22 )
  {
LABEL_44:
    v12 = -1073741790;
    goto LABEL_45;
  }
  if ( v6 )
    DbgkpLkmdFireCallbacks(v11, 1LL, v6);
  LODWORD(v32) = *(_DWORD *)(a1 + 44);
  v33 = v7;
  DbgkpLkmdSnapData((int)v11, (int)&v32, 16);
  if ( v7 )
    DbgkpLkmdSnapData((int)v11, (int)v7, RegHandle);
  if ( (int)DbgkpLkmdSnapDataEx((__int64)v11, (__int64)&DbgkpLkmdLiveDumpDiagnosticInformation, 8LL, 0LL) >= 0 )
    *v34 = &v32;
  v12 = guard_dispatch_icall_no_overrides(v11 + 2048, v35, v23, v24);
LABEL_45:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x4C676244u);
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_49:
  v25 = (void *)v11[2052];
  if ( v25 )
    ExFreePoolWithTag(v25, 0x4D574454u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704E534Bu);
LABEL_53:
  if ( v4 )
    EtwUnregister(v4);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x504D444Cu);
  return (unsigned int)v12;
}
