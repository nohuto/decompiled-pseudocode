/*
 * XREFs of ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400C75C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x140038A90 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400B4EC8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F4508 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockHeapAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // r14
  VIDMM_RECYCLE_RANGE *v10; // rdi
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  char *v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]

  v16 = 0;
  v15 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
  WdLogSingleEntry3(4LL, a2, a3, a4);
  v9 = *((_QWORD *)a2 + 6) + a3;
  v10 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  WdLogGlobalForLineNumber = 3088;
  while ( 1 )
  {
    if ( *((_QWORD *)v10 + 4) >= v9 || *((_QWORD *)v10 + 5) > v9 )
      VIDMM_RECYCLE_RANGE::Unlock(v10);
    if ( *((_QWORD *)v10 + 5) >= v9 + a4 )
      break;
    v11 = *((_QWORD *)v10 + 15);
    if ( v11 == *((_QWORD *)v10 + 9) + 72LL )
      v10 = 0LL;
    else
      v10 = (VIDMM_RECYCLE_RANGE *)(v11 - 120);
  }
  --*((_DWORD *)a2 + 23);
  if ( a5 )
  {
    v13 = (void *)*((_QWORD *)a2 + 13);
    *((_BYTE *)a2 + 129) = 0;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)a2 + 13) = 0LL;
    }
  }
  else
  {
    v12 = (void *)*((_QWORD *)a2 + 12);
    *((_BYTE *)a2 + 128) = 0;
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  if ( !*((_DWORD *)a2 + 23) )
    *((_DWORD *)a2 + 50) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(a2, v8);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v15);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
