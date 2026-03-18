/*
 * XREFs of NtDeleteValueKey @ 0x140979A90
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     CmpDoesBufferRequireCapturing @ 0x14097A110 (CmpDoesBufferRequireCapturing.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtDeleteValueKey(__int64 a1, _OWORD *a2)
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
  int v15; // edi
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
  int v28; // eax
  __int64 v29; // rcx
  char v30; // [rsp+43h] [rbp-155h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-148h] BYREF
  int v33[2]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v34; // [rsp+68h] [rbp-130h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-128h]
  _QWORD v36[2]; // [rsp+78h] [rbp-120h] BYREF
  __int64 v37; // [rsp+88h] [rbp-110h]
  __int64 v38; // [rsp+90h] [rbp-108h]
  __m128i v39; // [rsp+A0h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v41[3]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-B0h]
  __int128 v43; // [rsp+F0h] [rbp-A8h]
  __int64 v44; // [rsp+100h] [rbp-98h]
  _QWORD v45[4]; // [rsp+108h] [rbp-90h] BYREF
  __int64 v46; // [rsp+128h] [rbp-70h]
  __int128 v47; // [rsp+130h] [rbp-68h] BYREF
  __int64 v48; // [rsp+140h] [rbp-58h]
  LARGE_INTEGER v49[4]; // [rsp+148h] [rbp-50h] BYREF

  v3 = a1;
  v37 = a1;
  v47 = 0LL;
  v48 = 0LL;
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v34 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v33[0] = 0;
  memset(v49, 0, sizeof(v49));
  v38 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v49, 0x20000u);
  v5 = 0;
  Object = 0LL;
  v36[1] = v36;
  v36[0] = v36;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v47);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v30 = CmpAcquireShutdownRundown(CurrentThread, v9, v10, v11);
  if ( !v30 )
  {
    v15 = -1073741431;
    goto LABEL_58;
  }
  LOBYTE(v13) = PreviousMode;
  v15 = CmObReferenceObjectByHandle(v3, 2, v12, v13, (__int64)&Object, (__int64)&v34);
  if ( v15 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v8 = 1;
    if ( !CmpVEEnabled || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, v33) )
      goto LABEL_57;
    LOBYTE(v27) = PreviousMode;
    v15 = CmObReferenceObjectByHandle(v37, 131097, v26, v27, (__int64)&Object, (__int64)&v34);
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
    v20 = 0;
    goto LABEL_31;
  }
  if ( CmpTraceRoutine && Object )
    v38 = *((_QWORD *)Object + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v39 = 0LL;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v16 = (__int64)a2;
    v39.m128i_i32[0] = *(_DWORD *)v16;
    v14 = *(_QWORD *)(v16 + 8);
    v39.m128i_i64[1] = v14;
    *(__m128i *)Src = v39;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v39) && (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    *(_OWORD *)Src = *a2;
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
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
  {
    v15 = -1073741790;
LABEL_56:
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
    v45[0] = Object;
    v45[1] = Src;
    v23 = CmpCallCallBacksEx(2u, (__int64)v45, 0LL, 1, 0x11u, (__int64)Object, (__int64)v36);
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
  v15 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v14, 2, (unsigned int)&SubjectContext, (__int64)v33);
  v8 = v4;
  if ( v15 >= 0 )
  {
    if ( !CmpVEEnabled || (v28 = 1, (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0) )
      v28 = 0;
    if ( !v28 )
    {
      v15 = -1073741790;
      goto LABEL_30;
    }
LABEL_29:
    v39 = *(__m128i *)Src;
    v15 = CmDeleteValueKey((__int64)Object, (unsigned __int16 *)&v39, v37, (v34 & 4) != 0);
LABEL_30:
    v8 = v4;
  }
LABEL_31:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v5 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v36[0] != v36 )
  {
    v43 = 0LL;
    v44 = 0LL;
    v41[0] = Object;
    v41[1] = (unsigned int)v15;
    v42 = (unsigned int)v15;
    v41[2] = v45;
    CmpCallCallBacksEx(0x11u, (__int64)v41, 0LL, 0, 0x11u, (__int64)Object, (__int64)v36);
    v15 = v42;
  }
  if ( v20 )
    KeLeaveCriticalRegion();
  v24 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v29 = v38;
    LOBYTE(v29) = 15;
    guard_dispatch_icall_no_overrides(v29, v49, (unsigned int)v15, 0LL);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
    CmpReleaseShutdownRundown(v24);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v47);
  return (unsigned int)v15;
}
