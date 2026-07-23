/*
 * XREFs of NtDeleteValueKey @ 0x14086CE00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x14086D480 (CmpDoesBufferRequireCapturing.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  int v3; // edi
  char v4; // r14
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PreviousMode; // r15d
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  NTSTATUS v15; // edi
  __int64 v16; // rcx
  unsigned __int16 v17; // r8
  char *v18; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v20; // r12
  char *i; // rcx
  struct _KTHREAD *v22; // rax
  int v23; // eax
  PVOID v24; // rcx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rcx
  int v29; // eax
  char v30; // [rsp+43h] [rbp-155h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-148h] BYREF
  int v33[2]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v34; // [rsp+68h] [rbp-130h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-128h]
  _QWORD v36[2]; // [rsp+78h] [rbp-120h] BYREF
  HANDLE v37; // [rsp+88h] [rbp-110h]
  __int64 v38; // [rsp+90h] [rbp-108h]
  __m128i v39; // [rsp+A0h] [rbp-F8h] BYREF
  _BYTE v40[232]; // [rsp+B0h] [rbp-E8h] BYREF

  v3 = (int)KeyHandle;
  v37 = KeyHandle;
  *(_OWORD *)v40 = 0LL;
  memset(&v40[104], 0, 72);
  v34 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v33[0] = 0;
  v38 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v40[144], 0x20000u);
  v5 = 0;
  Object = 0LL;
  v36[1] = v36;
  v36[0] = v36;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v40);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = 0;
  memset(&v40[16], 0, 32);
  v30 = CmpAcquireShutdownRundown(CurrentThread, v9, v10, v11);
  if ( !v30 )
  {
    v15 = -1073741431;
    goto LABEL_52;
  }
  LOBYTE(v13) = PreviousMode;
  v15 = CmObReferenceObjectByHandle(v3, 2, v12, v13, (__int64)&Object, (__int64)&v34);
  if ( v15 == -1073741790 )
  {
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v40[16]);
    v8 = 1;
    if ( !CmpVEEnabled
      || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, (struct _SECURITY_SUBJECT_CONTEXT *)&v40[16], v33) )
    {
      goto LABEL_51;
    }
    LOBYTE(v27) = PreviousMode;
    v15 = CmObReferenceObjectByHandle((_DWORD)v37, 131097, v26, v27, (__int64)&Object, (__int64)&v34);
    if ( v15 < 0 )
      goto LABEL_52;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)Object) )
    {
LABEL_51:
      v15 = -1073741790;
      goto LABEL_52;
    }
    v4 = 1;
  }
  v8 = v4;
  if ( v15 < 0 )
  {
LABEL_52:
    v20 = 0;
    goto LABEL_31;
  }
  if ( CmpTraceRoutine && Object )
    v38 = *((_QWORD *)Object + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v39 = 0LL;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
      v16 = (__int64)ValueName;
    v39.m128i_i32[0] = *(_DWORD *)v16;
    v14 = *(_QWORD *)(v16 + 8);
    v39.m128i_i64[1] = v14;
    *(__m128i *)Src = v39;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v39) && (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v17 = (unsigned __int16)Src[0];
  v18 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v18;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, v18) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v15 = -1073741670;
      v33[1] = -1073741670;
      v8 = v4;
      v20 = 0;
      goto LABEL_31;
    }
    v18 = (char *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, Src[1], LOWORD(Src[0]));
    Src[1] = v18;
    v17 = (unsigned __int16)Src[0];
  }
  if ( (v17 & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v15 = -1073741811;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
  {
    v15 = -1073741790;
LABEL_58:
    v8 = v4;
    v20 = 0;
    goto LABEL_31;
  }
  for ( i = &v18[2 * ((unsigned __int64)v17 >> 1) - 2]; v17 && !*(_WORD *)i; i -= 2 )
  {
    v17 -= 2;
    LOWORD(Src[0]) = v17;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v20 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v40[104] = Object;
    *(_QWORD *)&v40[112] = Src;
    v23 = CmpCallCallBacksEx(2u, (__int64)&v40[104], 0LL, 1, 0x11u, (__int64)Object, (__int64)v36);
    if ( v23 < 0 )
    {
      v8 = v4;
      v15 = 0;
      if ( v23 != -1073740541 )
        v15 = v23;
      goto LABEL_31;
    }
    v5 = 1;
  }
  if ( !v4 )
    goto LABEL_29;
  LOBYTE(v14) = PreviousMode;
  v15 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v14, 2, (unsigned int)&v40[16], (__int64)v33);
  v8 = v4;
  if ( v15 >= 0 )
  {
    if ( !CmpVEEnabled || (v29 = 1, (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0) )
      v29 = 0;
    if ( !v29 )
    {
      v15 = -1073741790;
      goto LABEL_30;
    }
LABEL_29:
    v39 = *(__m128i *)Src;
    v15 = CmDeleteValueKey((__int64)Object, (unsigned __int16 *)&v39, (__int64)v37, (v34 & 4) != 0);
LABEL_30:
    v8 = v4;
  }
LABEL_31:
  if ( v8 )
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v40[16]);
  if ( v5 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v36[0] != v36 )
  {
    memset(&v40[80], 0, 24);
    *(_QWORD *)&v40[48] = Object;
    *(_QWORD *)&v40[56] = (unsigned int)v15;
    *(_QWORD *)&v40[72] = (unsigned int)v15;
    *(_QWORD *)&v40[64] = &v40[104];
    CmpCallCallBacksEx(0x11u, (__int64)&v40[48], 0LL, 0, 0x11u, (__int64)Object, (__int64)v36);
    v15 = *(_DWORD *)&v40[72];
  }
  if ( v20 )
    KeLeaveCriticalRegion();
  v24 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v28 = v38;
    LOBYTE(v28) = 15;
    guard_dispatch_icall_no_overrides(v28);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
    CmpReleaseShutdownRundown(v24);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v40);
  return v15;
}
