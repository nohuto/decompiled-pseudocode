/*
 * XREFs of ?CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401F9FE4
 * Callers:
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401FCC38 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DXGSESSIONMGR::CheckAdapterPnPTransitionDoneInCurrentSession(
        DXGSESSIONMGR *this,
        struct DXGADAPTER *a2)
{
  unsigned int CurrentProcessSessionId; // ebx
  __int64 v5; // rdx
  char v6; // bl
  unsigned int v7; // ecx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v5 = CurrentProcessSessionId;
  if ( CurrentProcessSessionId < *((_DWORD *)this + 20) && (v6 = 0, *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5)) )
  {
    _mm_lfence();
    v7 = 0;
    v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5);
    v9 = *(_DWORD *)(v8 + 18776);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(32LL * v7 + *(_QWORD *)(v8 + 18784) + 8);
        if ( v10 )
        {
          if ( *(_QWORD *)(v10 + 48) == *((_QWORD *)a2 + 31) )
            break;
        }
        if ( ++v7 >= v9 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v6 = 1;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return v6;
  }
  else
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 6072;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return 1;
  }
}
