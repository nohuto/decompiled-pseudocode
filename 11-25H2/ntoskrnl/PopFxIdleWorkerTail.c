/*
 * XREFs of PopFxIdleWorkerTail @ 0x1403492B0
 * Callers:
 *     PopFxIdleWorker @ 0x14034964C (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140458A80 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxDeactivateComponentDependencies @ 0x140349158 (PopFxDeactivateComponentDependencies.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x14034C328 (PopFxCompleteComponentActivation.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043EB80 (PopDiagTraceFxComponentLogicalCondition.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, void *a3)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  ULONG_PTR v23; // r14
  char v24; // al
  __int64 result; // rax
  KIRQL v26; // dl
  __int64 v27; // r8
  LPCGUID ActivityId; // [rsp+20h] [rbp-79h]
  int v29; // [rsp+40h] [rbp-59h] BYREF
  int v30; // [rsp+48h] [rbp-51h] BYREF
  __int128 v31; // [rsp+50h] [rbp-49h] BYREF
  __int128 v32; // [rsp+60h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  int *v35; // [rsp+90h] [rbp-9h]
  __int64 v36; // [rsp+98h] [rbp-1h]
  int *v37; // [rsp+A0h] [rbp+7h]
  __int64 v38; // [rsp+A8h] [rbp+Fh]

  v4 = a2;
  v6 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = v6 + 200;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(_DWORD *)(v6 + 216) == 1 )
  {
    if ( *(_BYTE *)(v6 + 208) )
    {
      v10 = *(_QWORD *)(v6 + 224);
      if ( v7 > v10 )
      {
        v11 = v7 - v10;
        *(_QWORD *)(v6 + 328) += v7 - v10;
        LODWORD(v10) = 0;
        while ( (unsigned int)v10 < 5 )
        {
          v12 = (unsigned int)v10;
          v10 = (unsigned int)(v10 + 1);
          if ( v11 >= PopFxAccountingBucketLimits[v12] && v11 < PopFxAccountingBucketLimits[v10] )
          {
            ++*(_QWORD *)(v8 + 8 * v12 + 144);
            *(_QWORD *)(v8 + 8 * v12 + 184) += v11;
            break;
          }
        }
      }
    }
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock(v6 + 200);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = v9;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(v9);
  v14 = BugCheckParameter2[6];
  v29 = v4;
  v33 = v14;
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_BYTE *)(v17 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v17 + 40) + 96LL, v15, v16)) )
  {
    UserData.Ptr = (ULONGLONG)&v33;
    v30 = 0;
    v35 = &v29;
    *(_QWORD *)&UserData.Size = 8LL;
    v37 = &v30;
    v36 = v18;
    v38 = v18;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
  }
  v19 = BugCheckParameter2[68];
  while ( v19 < v7 )
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64(BugCheckParameter2 + 68, v7, v19);
    if ( v20 == v19 )
      break;
    _mm_pause();
  }
  _m_prefetchw((const void *)(v6 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0) == 0x40000000 )
  {
    if ( a3 )
      memset_0(a3, 0, 0x40uLL);
    v21 = BugCheckParameter2[7];
    if ( *(_BYTE *)(v21 + 124) )
    {
      v22 = *(_QWORD *)(v21 + 32);
      v31 = 0LL;
      DWORD2(v31) = v4;
      v23 = *(_QWORD *)(v22 + 64);
      *(_QWORD *)&v31 = *(_QWORD *)(v22 + 72);
      BYTE12(v31) = 0;
      v32 = 0uLL;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v31) )
      {
        if ( BYTE8(v32) )
          PopFxBugCheck(0x612uLL, v23, 0LL, 0LL);
      }
    }
    v24 = PopPepProcessEvent(v21, v21 + 208 * v4 + 192, 3u, 6u, (__int64)ActivityId, (__int64)a3);
    if ( v24 )
    {
      if ( !a3 )
        PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
      if ( v24 == 1 )
        PopFxProcessWork(0LL, a3);
    }
    PopFxDeactivateComponentDependencies(v6);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2);
    }
  }
  else
  {
    PopFxReferenceDevice((ULONG_PTR)BugCheckParameter2, 8);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(_DWORD *)(v6 + 216) == 1 )
    {
      *(_QWORD *)(v6 + 224) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v6 + 208) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v26);
    LOBYTE(v27) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], (unsigned int)v4, v27);
    if ( BugCheckParameter2[14] )
      guard_dispatch_icall_no_overrides(BugCheckParameter2[24], (unsigned int)v4);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
