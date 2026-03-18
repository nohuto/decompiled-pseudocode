/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F4508
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400C75C0 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 != 2 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 3LL, v3, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400F4740LL);
  }
  if ( (*((_DWORD *)this + 23))-- == 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
    *((_QWORD *)this + 12) = *(_QWORD *)(v5 + 1576) + (unsigned int)dword_1400814CC;
    v6 = (_QWORD *)((char *)this + 104);
    v7 = *(_QWORD **)(v5 + 1552);
    if ( *v7 != v5 + 1544 )
      __fastfail(3u);
    *v6 = v5 + 1544;
    *((_QWORD *)this + 14) = v7;
    *v7 = v6;
    *(_QWORD *)(v5 + 1552) = v6;
    if ( !_InterlockedExchange((volatile __int32 *)(v5 + 1536), 1) && !*(_DWORD *)(v5 + 1584) )
      KeSetTimer((PKTIMER)(v5 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v5 + 1440));
    v8 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    if ( (__int64)(v8
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v8)) < 0
      && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), 3LL);
      WdLogGlobalForLineNumber = 2248;
      if ( (byte_140081242 & 4) != 0 )
        McTemplateK0pqq_EtwWriteTransfer();
      v1 = *((_QWORD *)this + 9);
      v9 = *(_QWORD **)(v1 + 136);
      if ( !v9 )
        goto LABEL_10;
    }
    v10 = *v9 + 144LL * v9[1];
    *(_DWORD *)v10 = 2;
    *(_QWORD *)(v10 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v10 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL);
    v11 = *(_QWORD *)(v1 + 136);
    if ( *(_QWORD *)(v11 + 8) == *(_QWORD *)(v11 + 48) )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v1 + 136) + 16LL) = 1;
    }
LABEL_10:
    *((_DWORD *)this + 16) = 3;
  }
}
