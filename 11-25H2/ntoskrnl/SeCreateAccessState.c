/*
 * XREFs of SeCreateAccessState @ 0x1409154F0
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407670E4 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140767520 (PspReferenceCpuPartitionByHandle.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1409B3958 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  _QWORD *v10; // rbx
  ULONG_PTR v11; // rax
  __int64 *v13; // r13
  void *v14; // r12
  signed __int64 *BugCheckParameter2; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v16; // [rsp+38h] [rbp-60h]
  _QWORD *v17; // [rsp+48h] [rbp-50h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+60h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v18 = 0LL;
  v19 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v13,
        (unsigned __int64)&CurrentThread[1].WaitBlockList);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v14 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v14, 0x75536553u);
      LODWORD(v18) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v14 = 0LL;
    }
    BugCheckParameter2 = (signed __int64 *)&CurrentThread[1].WaitBlockList;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)v16);
    v10 = v14;
  }
  else
  {
    v10 = 0LL;
  }
  v17 = v10;
  v11 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  *((_QWORD *)&v18 + 1) = v11;
  if ( SeTokenLeakTracking )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 1144) + 284LL));
      if ( v11 == SepTokenLeakToken )
        __debugbreak();
      v10 = v17;
    }
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10[143] + 284LL));
      if ( v17 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v17, a1, a2, a3, a4);
}
