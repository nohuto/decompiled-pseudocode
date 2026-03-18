/*
 * XREFs of ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1401F3A8C
 * Callers:
 *     DxgkCompletePnPTransition @ 0x1401F6448 (DxgkCompletePnPTransition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401F42A4 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CompletePnPTransition(DXGSESSIONMGR *this, struct _PNP_TRANS_TOKEN *a2)
{
  _QWORD *i; // rbx
  int updated; // eax
  __int64 v6; // rbx
  struct _PNP_TRANS_TOKEN **v7; // rdx
  void **v8; // rcx
  _BYTE v9[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  for ( i = (_QWORD *)((char *)a2 + 24);
        (_QWORD *)*i != i;
        DXGSESSIONDATA::FinishPnPTransitionOnSession(*(DXGSESSIONDATA **)(*i - 16LL), a2) )
  {
    ;
  }
  if ( *((_BYTE *)a2 + 56) )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      v6 = updated;
      WdLogSingleEntry1(2LL, updated);
      WdLogGlobalForLineNumber = 5937;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to send Console Adapter Start WNF (Status=0x%I64x)",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v7 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 1);
  if ( v7[1] != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 8)
    || (v8 = (void **)*((_QWORD *)a2 + 2), *v8 != (char *)a2 + 8) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  v7[1] = (struct _PNP_TRANS_TOKEN *)v8;
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
}
