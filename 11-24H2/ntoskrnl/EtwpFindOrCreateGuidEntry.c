/*
 * XREFs of EtwpFindOrCreateGuidEntry @ 0x14083866C
 * Callers:
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall EtwpFindOrCreateGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3, char a4, _QWORD *a5)
{
  unsigned int v8; // ebp
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v12; // r15
  signed __int64 *v13; // rsi
  char *v14; // rbx
  _QWORD *i; // rbx
  __int64 v16; // rcx
  void *v17; // rbx
  ACCESS_MASK v18; // r9d
  __int64 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-60h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+C8h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+D0h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0LL;
  v10 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
  CurrentThread = KeGetCurrentThread();
  v12 = (_QWORD **)(v10 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v13 = (signed __int64 *)(v10 + 48);
  v14 = (char *)KeAbPreAcquire(v10 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, 0, v14, (__int64)v13);
  if ( v14 )
    v14[10] = 1;
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v16 = *(_QWORD *)a2 - i[5];
    if ( *(_QWORD *)a2 == i[5] )
      v16 = *((_QWORD *)a2 + 1) - i[6];
    if ( !v16 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
    {
      v9 = i;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread();
  if ( v9 || (v9 = EtwpAddGuidEntry(a1, a2, a3)) != 0LL )
  {
    if ( a4 )
    {
      v17 = (void *)v9[9];
      AccessStatus = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      GrantedAccess = 0;
      SeCaptureSubjectContext(&SubjectContext);
      v18 = 2048;
      if ( a3 == 2 )
        v18 = 4096;
      SeAccessCheck(
        v17,
        &SubjectContext,
        0,
        v18,
        0,
        0LL,
        (PGENERIC_MAPPING)&EtwpGenericMapping,
        1,
        &GrantedAccess,
        &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v8 = AccessStatus;
      if ( AccessStatus < 0 )
      {
        EtwpUnreferenceGuidEntry((ULONG_PTR)v9);
        v9 = 0LL;
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  result = v8;
  *a5 = v9;
  return result;
}
