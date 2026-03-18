/*
 * XREFs of NtRenameKey @ 0x1407D04D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmDoVirtualTest @ 0x1404A1900 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmPostCallbackNotificationEx @ 0x140847C20 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoesBufferRequireCapturing @ 0x14097A110 (CmpDoesBufferRequireCapturing.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtRenameKey(__int64 a1, _OWORD *a2)
{
  char v3; // r13
  unsigned int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // rdx
  PPRIVILEGE_SET v15; // rsi
  int v16; // r8d
  int v17; // r9d
  unsigned int i; // ecx
  int v19; // esi
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // r8
  char v28; // [rsp+43h] [rbp-125h]
  PVOID Object; // [rsp+48h] [rbp-120h] BYREF
  int v30; // [rsp+50h] [rbp-118h] BYREF
  int v31; // [rsp+54h] [rbp-114h]
  void *Src[2]; // [rsp+60h] [rbp-108h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-F8h]
  _QWORD v34[3]; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v35; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-C0h] BYREF
  _OWORD v38[2]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-80h]
  __int128 v40; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+100h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp-60h] BYREF

  v36 = a1;
  v40 = 0LL;
  v41 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v40);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  v30 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28 = CmpAcquireShutdownRundown(v8, v7, v9, v10);
  if ( !v28 )
  {
    v11 = -1073741431;
    v12 = 0;
    goto LABEL_42;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v35 = 0LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a2;
    v35.m128i_i32[0] = *(_DWORD *)v13;
    v14 = *(_QWORD *)(v13 + 8);
    v35.m128i_i64[1] = v14;
    *(__m128i *)Src = v35;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v35) && (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v15 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v11 = -1073741811;
    v31 = -1073741811;
    v12 = 0;
    goto LABEL_42;
  }
  if ( (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota();
    if ( !Privileges )
    {
      v11 = -1073741670;
      v31 = -1073741670;
      v12 = 0;
      goto LABEL_42;
    }
    v15 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v16 = LOWORD(Src[0]);
    WORD1(Src[0]) = Src[0];
    v17 = 1;
  }
  for ( i = 0; i < (unsigned __int16)v16 >> 1; i += v17 )
  {
    if ( *((_WORD *)&v15->PrivilegeCount + i) == 92 )
    {
      v11 = -1073741811;
LABEL_23:
      v12 = 0;
      goto LABEL_42;
    }
  }
  LOBYTE(v17) = PreviousMode;
  v19 = v36;
  v11 = CmObReferenceObjectByHandle(v36, 131078, v16, v17, (__int64)&Object, 0LL);
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest() )
      goto LABEL_26;
    LOBYTE(v22) = PreviousMode;
    v11 = CmObReferenceObjectByHandle(v19, 131097, v21, v22, (__int64)&Object, 0LL);
    if ( v11 < 0 )
      goto LABEL_23;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_26:
      v11 = -1073741790;
      goto LABEL_23;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v11 < 0 )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v38[0] = Object;
    *((_QWORD *)&v38[0] + 1) = Src;
    LOBYTE(v24) = 1;
    v25 = CmpCallCallBacksEx(4, (unsigned int)v38, 0, v24, 19, (__int64)Object, (__int64)v34);
    if ( v25 < 0 )
    {
      v11 = 0;
      if ( v25 != -1073740541 )
        v11 = v25;
      goto LABEL_42;
    }
    v3 = 1;
  }
  if ( !v5
    || (LOBYTE(v20) = PreviousMode,
        v11 = CmKeyBodyReplicateToVirtual(&Object, v20, 131078LL, &SubjectContext, &v30),
        v11 >= 0) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v35 = *(__m128i *)Src;
    LOBYTE(v26) = PreviousMode;
    v11 = CmRenameKey(Object, &v35, v26);
    CmpDetachFromRegistryProcess(&ApcState);
    v6 = v5;
  }
LABEL_42:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = CmPostCallbackNotificationEx(19, (_DWORD)Object, v11, (unsigned int)v38, 0LL, (__int64)v34);
  if ( v12 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
    CmpReleaseShutdownRundown();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v40);
  return (unsigned int)v11;
}
