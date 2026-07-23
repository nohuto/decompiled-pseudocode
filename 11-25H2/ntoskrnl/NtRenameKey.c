/*
 * XREFs of NtRenameKey @ 0x1407C0DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmDoVirtualTest @ 0x1404A1EF8 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmPostCallbackNotificationEx @ 0x14084BF60 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpDoesBufferRequireCapturing @ 0x14086D480 (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
  HANDLE v36; // [rsp+A0h] [rbp-C8h]
  __int128 v37; // [rsp+A8h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-B0h] BYREF
  _OWORD v39[2]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-68h] BYREF

  v36 = KeyHandle;
  v37 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v37);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
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
    if ( (unsigned __int64)NewName < 0x7FFFFFFF0000LL )
      v13 = (__int64)NewName;
    v35.m128i_i32[0] = *(_DWORD *)v13;
    v14 = *(_QWORD *)(v13 + 8);
    v35.m128i_i64[1] = v14;
    *(__m128i *)Src = v35;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v35) && (v14 & 1) != 0 )
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
  v19 = (int)v36;
  v11 = CmObReferenceObjectByHandle((_DWORD)v36, 131078, v16, v17, (__int64)&Object, 0LL);
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
    *(_QWORD *)&v39[0] = Object;
    *((_QWORD *)&v39[0] + 1) = Src;
    LOBYTE(v24) = 1;
    v25 = CmpCallCallBacksEx(4, (unsigned int)v39, 0, v24, 19, (__int64)Object, (__int64)v34);
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
    v11 = CmPostCallbackNotificationEx(19, (_DWORD)Object, v11, (unsigned int)v39, 0LL, (__int64)v34);
  if ( v12 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v37);
  return v11;
}
