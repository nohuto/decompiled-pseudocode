/*
 * XREFs of ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x14040C210
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x140243810 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DXGSESSIONMGR::CheckPnPTransitionForSession(DXGSESSIONMGR *this, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // edx
  __int64 v7; // r9
  char v8; // bl
  void *v9; // r8
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) && *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) )
  {
    _mm_lfence();
    v6 = 0;
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
    v8 = 1;
    while ( v6 < *(_DWORD *)(v7 + 18776) )
    {
      v9 = *(void **)(32LL * v6 + *(_QWORD *)(v7 + 18784) + 8);
      if ( v9 && v9 == a2 )
        goto LABEL_9;
      ++v6;
    }
  }
  v8 = 0;
LABEL_9:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return v8;
}
