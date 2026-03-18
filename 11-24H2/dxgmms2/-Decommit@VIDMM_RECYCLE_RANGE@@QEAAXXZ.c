/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6EF0
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400C5600 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1400C7830 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C7454 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rbp
  int v2; // esi
  __int64 v3; // rdx
  int v5; // ecx
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx

  v3 = *((int *)this + 16);
  v5 = *((_DWORD *)this + 16) - 1;
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      v6 = (_QWORD *)((char *)this + 104);
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v8 = *((_QWORD *)this + 13);
      if ( *(VIDMM_RECYCLE_RANGE **)(v8 + 8) != (VIDMM_RECYCLE_RANGE *)((char *)this + 104) )
        goto LABEL_8;
      v9 = (_QWORD *)*((_QWORD *)this + 14);
      if ( (_QWORD *)*v9 != v6 )
        goto LABEL_8;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *((_QWORD *)this + 14) = 0LL;
      *v6 = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      v10 = *((_DWORD *)this + 16);
      if ( v10 != 5 )
      {
        if ( (unsigned int)(v10 - 3) > 1
          || (v15 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5),
              (__int64)(v15
                      + _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                          v15)) >= 0)
          || !g_IsInternalRelease )
        {
LABEL_7:
          *((_QWORD *)this + 12) = *(_QWORD *)(v7 + 1576) + (unsigned int)dword_1400814EC;
          v11 = *(_QWORD **)(v7 + 1552);
          if ( *v11 == v7 + 1544 )
          {
            *v6 = v7 + 1544;
            v6[1] = v11;
            *v11 = v6;
            *(_QWORD *)(v7 + 1552) = v6;
            if ( !_InterlockedExchange((volatile __int32 *)(v7 + 1536), 1) && !*(_DWORD *)(v7 + 1584) )
              KeSetTimer((PKTIMER)(v7 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v7 + 1440));
            v13 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
            if ( (__int64)(v13
                         + _InterlockedExchangeAdd64(
                             (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                             v13)) < 0
              && g_IsInternalRelease )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 195;
              goto LABEL_27;
            }
            v2 = 4;
            WdLogSingleEntry3(4LL, this, *((int *)this + 16), 4LL);
            WdLogGlobalForLineNumber = 2248;
            if ( (byte_140081242 & 4) == 0 )
            {
LABEL_14:
              v1 = *((_QWORD *)this + 9);
              v14 = *(_QWORD **)(v1 + 136);
              if ( !v14 )
              {
LABEL_15:
                *((_DWORD *)this + 16) = v2;
                return;
              }
LABEL_27:
              v17 = *v14 + 144LL * v14[1];
              *(_DWORD *)v17 = 2;
              *(_QWORD *)(v17 + 8) = this;
              RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v17 + 16), 0LL);
              ++*(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL);
              v18 = *(_QWORD *)(v1 + 136);
              if ( *(_QWORD *)(v18 + 8) == *(_QWORD *)(v18 + 48) )
              {
                *(_QWORD *)(v18 + 8) = 0LL;
                *(_BYTE *)(*(_QWORD *)(v1 + 136) + 16LL) = 1;
              }
              goto LABEL_15;
            }
LABEL_22:
            McTemplateK0pqq_EtwWriteTransfer();
            goto LABEL_14;
          }
LABEL_8:
          __fastfail(3u);
        }
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      v16 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5);
      if ( (__int64)(v16 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v16)) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_22;
      }
      goto LABEL_7;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v3, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  else
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v12 - 3) <= 3 || (unsigned int)(*(_DWORD *)v12 - 9) <= 1 )
    {
      VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
      return;
    }
  }
  VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v12 + 8), this);
  WdLogSingleEntry3(4LL, this, *((int *)this + 16), 5LL);
  WdLogGlobalForLineNumber = 2248;
  if ( (byte_140081242 & 4) != 0 )
    McTemplateK0pqq_EtwWriteTransfer();
  v19 = *((_QWORD *)this + 9);
  v20 = *(_QWORD **)(v19 + 136);
  if ( v20 )
  {
    v21 = *v20 + 144LL * v20[1];
    *(_DWORD *)v21 = 2;
    *(_QWORD *)(v21 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v21 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v19 + 136) + 8LL);
    v22 = *(_QWORD *)(v19 + 136);
    if ( *(_QWORD *)(v22 + 8) == *(_QWORD *)(v22 + 48) )
    {
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v19 + 136) + 16LL) = 1;
    }
  }
  *((_DWORD *)this + 16) = 5;
}
