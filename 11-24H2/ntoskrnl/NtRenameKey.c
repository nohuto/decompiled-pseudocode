/*
 * XREFs of NtRenameKey @ 0x1407D09C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmDoVirtualTest @ 0x14049C88C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoesBufferRequireCapturing @ 0x140962920 (CmpDoesBufferRequireCapturing.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  unsigned int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // rdx
  PPRIVILEGE_SET v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // r9d
  unsigned int i; // ecx
  int v20; // esi
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v25; // r9d
  int v26; // eax
  __int64 v27; // r8
  char v29; // [rsp+43h] [rbp-125h]
  PVOID Object; // [rsp+48h] [rbp-120h] BYREF
  int v31; // [rsp+50h] [rbp-118h] BYREF
  int v32; // [rsp+54h] [rbp-114h]
  void *Src[2]; // [rsp+60h] [rbp-108h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-F8h]
  _QWORD v35[3]; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v36; // [rsp+90h] [rbp-D8h] BYREF
  HANDLE v37; // [rsp+A0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-C0h] BYREF
  _OWORD v39[2]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-80h]
  __int128 v41; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v42; // [rsp+100h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp-60h] BYREF

  v37 = KeyHandle;
  v41 = 0LL;
  v42 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v41);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v35[1] = v35;
  v35[0] = v35;
  v31 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = CmpAcquireShutdownRundown(v8, v7, v9, v10);
  if ( !v29 )
  {
    v11 = -1073741431;
    v12 = 0;
    goto LABEL_42;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v36 = 0LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName < 0x7FFFFFFF0000LL )
      v13 = (__int64)NewName;
    v36.m128i_i32[0] = *(_DWORD *)v13;
    v14 = *(_QWORD *)(v13 + 8);
    v36.m128i_i64[1] = v14;
    *(__m128i *)Src = v36;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v36) && (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v15 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v11 = -1073741811;
    v32 = -1073741811;
    v12 = 0;
    goto LABEL_42;
  }
  if ( (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v16, v17, 0x426E4D43u);
    if ( !Privileges )
    {
      v11 = -1073741670;
      v32 = -1073741670;
      v12 = 0;
      goto LABEL_42;
    }
    v15 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v17 = LOWORD(Src[0]);
    WORD1(Src[0]) = Src[0];
    v18 = 1;
  }
  for ( i = 0; i < (unsigned __int16)v17 >> 1; i += v18 )
  {
    if ( *((_WORD *)&v15->PrivilegeCount + i) == 92 )
    {
      v11 = -1073741811;
LABEL_23:
      v12 = 0;
      goto LABEL_42;
    }
  }
  LOBYTE(v18) = PreviousMode;
  v20 = (int)v37;
  v11 = CmObReferenceObjectByHandle((_DWORD)v37, 131078, v17, v18, (__int64)&Object, 0LL);
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest() )
      goto LABEL_26;
    LOBYTE(v23) = PreviousMode;
    v11 = CmObReferenceObjectByHandle(v20, 131097, v22, v23, (__int64)&Object, 0LL);
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
    *(_QWORD *)&v39[0] = Object;
    *((_QWORD *)&v39[0] + 1) = Src;
    LOBYTE(v25) = 1;
    v26 = CmpCallCallBacksEx(4, (unsigned int)v39, 0, v25, 19, (__int64)Object, (__int64)v35);
    if ( v26 < 0 )
    {
      v11 = 0;
      if ( v26 != -1073740541 )
        v11 = v26;
      goto LABEL_42;
    }
    v3 = 1;
  }
  if ( !v5
    || (LOBYTE(v21) = PreviousMode,
        v11 = CmKeyBodyReplicateToVirtual(&Object, v21, 131078LL, &SubjectContext, &v31),
        v11 >= 0) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v36 = *(__m128i *)Src;
    LOBYTE(v27) = PreviousMode;
    v11 = CmRenameKey(Object, &v36, v27);
    CmpDetachFromRegistryProcess(&ApcState);
    v6 = v5;
  }
LABEL_42:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = CmPostCallbackNotificationEx(19, (_DWORD)Object, v11, (unsigned int)v39, 0LL, (__int64)v35);
  if ( v12 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29 )
    CmpReleaseShutdownRundown();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v41);
  return v11;
}
