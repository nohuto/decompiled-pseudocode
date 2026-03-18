/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1401F44FC
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x140243810 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401F42A4 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(
        DXGSESSIONMGR *this,
        struct _PNP_TRANS_TOKEN *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  DXGSESSIONDATA *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) && (v6 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v4)) != 0LL )
  {
    if ( (_DWORD)v4 != *((_DWORD *)this + 36) )
      DXGSESSIONDATA::FinishPnPTransitionOnSession(v6, a2);
  }
  else
  {
    WdLogSingleEntry1(3LL, (unsigned int)v4);
    WdLogGlobalForLineNumber = 5866;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
