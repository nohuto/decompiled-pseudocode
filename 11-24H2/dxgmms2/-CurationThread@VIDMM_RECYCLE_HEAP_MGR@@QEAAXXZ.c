/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400F5780
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1400F5760 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rcx
  PRKPROCESS *v3; // rcx
  signed __int32 v4; // eax
  char *v5; // [rsp+58h] [rbp-50h] BYREF
  char v6; // [rsp+60h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  v5 = (char *)this + 1328;
  v6 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v5);
  v3 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 197);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v3, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 195) != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560)
    || *((VIDMM_RECYCLE_HEAP_MGR **)this + 193) != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
      goto LABEL_11;
    }
    _InterlockedExchange((volatile __int32 *)this + 384, 0);
    goto LABEL_9;
  }
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1);
  _InterlockedExchange((volatile __int32 *)this + 384, 0);
  if ( v4 == 1 )
LABEL_9:
    KeSetEvent(*((PRKEVENT *)this + 199), 0, 0);
LABEL_11:
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v5);
}
