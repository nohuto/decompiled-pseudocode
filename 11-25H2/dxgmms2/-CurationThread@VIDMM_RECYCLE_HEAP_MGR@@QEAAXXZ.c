/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400C53F0
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1400C53D0 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1400388CC (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x140038A90 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003C20C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5A0C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C666C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C678C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // r12
  char *v4; // r15
  char *v5; // r14
  struct VIDMM_RECYCLE_BLOCK *v6; // rdx
  char *v7; // rsi
  __int64 v8; // rax
  char **v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // dl
  char **v13; // rax
  _QWORD *v14; // rsi
  char *v15; // r14
  char *v16; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v17; // rcx
  struct VIDMM_RECYCLE_RANGE *v18; // r15
  unsigned __int8 v19; // dl
  VIDMM_RECYCLE_MULTIRANGE *v20; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v21; // rcx
  signed __int32 v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct VIDMM_RECYCLE_RANGE *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  bool v28; // [rsp+50h] [rbp-39h] BYREF
  int v29; // [rsp+54h] [rbp-35h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-31h] BYREF
  char *v31; // [rsp+60h] [rbp-29h]
  char *v32; // [rsp+70h] [rbp-19h] BYREF
  char v33; // [rsp+78h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  v32 = (char *)this + 1328;
  v33 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v23, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32);
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 197);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  v31 = (char *)&v30;
  v3 = (char *)this + 1544;
  v4 = (char *)*((_QWORD *)this + 193);
  v30 = &v30;
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == v3 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v7 = v4 - 104;
    if ( *((_QWORD *)v4 - 1) > *((_QWORD *)this + 197) )
      break;
    v8 = *(_QWORD *)v4;
    v4 = (char *)v8;
    if ( *(char **)(v8 + 8) != v5 || (v9 = (char **)*((_QWORD *)v5 + 1), *v9 != v5) )
LABEL_13:
      __fastfail(3u);
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = *((_DWORD *)v7 + 16);
    *((_QWORD *)v7 + 14) = 0LL;
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    if ( v10 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v7 + 4) - *((_QWORD *)v7 + 5), v6);
    }
    else if ( (unsigned int)(v10 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v7 + 4) - *((_QWORD *)v7 + 5), v6);
    }
    v28 = 0;
    v11 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v7, &v28);
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v7, v11, **((_QWORD **)this + 1));
      v13 = (char **)v31;
      WdLogGlobalForLineNumber = 10922;
      if ( *(_QWORD ***)v31 != &v30 )
        goto LABEL_13;
      *((_QWORD *)v5 + 1) = v31;
      *(_QWORD *)v5 = &v30;
      *v13 = v5;
      v31 = v5;
    }
    if ( !v28 )
    {
      v21 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v7 + 17);
      if ( v21 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v21, v12);
    }
  }
  v14 = v30;
  while ( v14 != &v30 )
  {
    v24 = *v14;
    v25 = (struct VIDMM_RECYCLE_RANGE *)(v14 - 13);
    v26 = v14;
    v14 = (_QWORD *)v24;
    if ( *(_QWORD **)(v24 + 8) != v26 )
      goto LABEL_13;
    v27 = (_QWORD *)v26[1];
    if ( (_QWORD *)*v27 != v26 )
      goto LABEL_13;
    *v27 = v24;
    *(_QWORD *)(v24 + 8) = v27;
    *((_QWORD *)v25 + 14) = 0LL;
    *v26 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v25);
  }
  v15 = (char *)this + 1560;
  v16 = (char *)*((_QWORD *)this + 195);
  while ( v16 != v15 )
  {
    VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v18 = (struct VIDMM_RECYCLE_RANGE *)(v16 - 104);
    if ( *((_QWORD *)v16 - 1) > *((_QWORD *)this + 197) )
      break;
    v16 = *(char **)v16;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v17, v18);
    v29 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v18, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v29);
    if ( !v29 )
    {
      v20 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v18 + 17);
      if ( v20 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v20, v19);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( *((char **)this + 195) == v15 && *((char **)this + 193) == v3 )
  {
    v22 = _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1);
    _InterlockedExchange((volatile __int32 *)this + 384, 0);
    if ( v22 == 1 )
LABEL_32:
      KeSetEvent(*((PRKEVENT *)this + 199), 0, 0);
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1) == 1 )
    {
      _InterlockedExchange((volatile __int32 *)this + 384, 0);
      goto LABEL_32;
    }
    KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v32);
}
