/*
 * XREFs of NtDeleteValueKey @ 0x1409622A0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmpDoesBufferRequireCapturing @ 0x140962920 (CmpDoesBufferRequireCapturing.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
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
  unsigned int v17; // r8d
  char *v18; // rsi
  __int64 v19; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v21; // r12
  char *i; // rcx
  struct _KTHREAD *v23; // rax
  int v24; // eax
  PVOID v25; // rcx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  __int64 v30; // rcx
  char v31; // [rsp+43h] [rbp-155h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-148h] BYREF
  int v34[2]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v35; // [rsp+68h] [rbp-130h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-128h]
  _QWORD v37[2]; // [rsp+78h] [rbp-120h] BYREF
  HANDLE v38; // [rsp+88h] [rbp-110h]
  __int64 v39; // [rsp+90h] [rbp-108h]
  __m128i v40; // [rsp+A0h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v42[3]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-B0h]
  __int128 v44; // [rsp+F0h] [rbp-A8h]
  __int64 v45; // [rsp+100h] [rbp-98h]
  _QWORD v46[4]; // [rsp+108h] [rbp-90h] BYREF
  __int64 v47; // [rsp+128h] [rbp-70h]
  __int128 v48; // [rsp+130h] [rbp-68h] BYREF
  __int64 v49; // [rsp+140h] [rbp-58h]
  LARGE_INTEGER v50[4]; // [rsp+148h] [rbp-50h] BYREF

  v3 = (int)KeyHandle;
  v38 = KeyHandle;
  v48 = 0LL;
  v49 = 0LL;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  v35 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v34[0] = 0;
  memset(v50, 0, sizeof(v50));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v50, 0x20000u);
  v5 = 0;
  Object = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v48);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v31 = CmpAcquireShutdownRundown(CurrentThread, v9, v10, v11);
  if ( !v31 )
  {
    v15 = -1073741431;
    goto LABEL_58;
  }
  LOBYTE(v13) = PreviousMode;
  v15 = CmObReferenceObjectByHandle(v3, 2, v12, v13, (__int64)&Object, (__int64)&v35);
  if ( v15 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v8 = 1;
    if ( !CmpVEEnabled || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, v34) )
      goto LABEL_57;
    LOBYTE(v28) = PreviousMode;
    v15 = CmObReferenceObjectByHandle((_DWORD)v38, 131097, v27, v28, (__int64)&Object, (__int64)&v35);
    if ( v15 < 0 )
      goto LABEL_58;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_57:
      v15 = -1073741790;
      goto LABEL_58;
    }
    v4 = 1;
  }
  v8 = v4;
  if ( v15 < 0 )
  {
LABEL_58:
    v21 = 0;
    goto LABEL_31;
  }
  if ( CmpTraceRoutine && Object )
    v39 = *((_QWORD *)Object + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v40 = 0LL;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
      v16 = (__int64)ValueName;
    v40.m128i_i32[0] = *(_DWORD *)v16;
    v14 = *(_QWORD *)(v16 + 8);
    v40.m128i_i64[1] = v14;
    *(__m128i *)Src = v40;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v40) && (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  LOWORD(v17) = Src[0];
  v18 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v18;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, v18) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v19, v17, 0x62634D43u);
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v15 = -1073741670;
      v34[1] = -1073741670;
      v8 = v4;
      v21 = 0;
      goto LABEL_31;
    }
    v18 = (char *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, Src[1], LOWORD(Src[0]));
    Src[1] = v18;
    LOWORD(v17) = Src[0];
  }
  if ( (v17 & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v15 = -1073741811;
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
  {
    v15 = -1073741790;
LABEL_56:
    v8 = v4;
    v21 = 0;
    goto LABEL_31;
  }
  for ( i = &v18[2 * ((unsigned __int64)(unsigned __int16)v17 >> 1) - 2]; (_WORD)v17 && !*(_WORD *)i; i -= 2 )
  {
    LOWORD(v17) = v17 - 2;
    LOWORD(Src[0]) = v17;
  }
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  v21 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v46[0] = Object;
    v46[1] = Src;
    v24 = CmpCallCallBacksEx(2u, (__int64)v46, 0LL, 1, 0x11u, (__int64)Object, (__int64)v37);
    if ( v24 < 0 )
    {
      v8 = v4;
      v15 = 0;
      if ( v24 != -1073740541 )
        v15 = v24;
      goto LABEL_31;
    }
    v5 = 1;
  }
  if ( !v4 )
    goto LABEL_29;
  LOBYTE(v14) = PreviousMode;
  v15 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v14, 2, (unsigned int)&SubjectContext, (__int64)v34);
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
    v40 = *(__m128i *)Src;
    v15 = CmDeleteValueKey((__int64)Object, (unsigned __int16 *)&v40, (__int64)v38, (v35 & 4) != 0);
LABEL_30:
    v8 = v4;
  }
LABEL_31:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v5 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v37[0] != v37 )
  {
    v44 = 0LL;
    v45 = 0LL;
    v42[0] = Object;
    v42[1] = (unsigned int)v15;
    v43 = (unsigned int)v15;
    v42[2] = v46;
    CmpCallCallBacksEx(0x11u, (__int64)v42, 0LL, 0, 0x11u, (__int64)Object, (__int64)v37);
    v15 = v43;
  }
  if ( v21 )
    KeLeaveCriticalRegion();
  v25 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v30 = v39;
    LOBYTE(v30) = 15;
    guard_dispatch_icall_no_overrides(v30, v50);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v31 )
    CmpReleaseShutdownRundown(v25);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v48);
  return v15;
}
