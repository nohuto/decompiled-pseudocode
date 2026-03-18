/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1401F59A0
 * Callers:
 *     DxgkStartPnPTransition @ 0x1401F6848 (DxgkStartPnPTransition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401F5B7C (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

_QWORD *__fastcall DXGSESSIONMGR::StartPnPTransition(DXGSESSIONMGR *this, _QWORD *a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v8; // rax
  DXGSESSIONMGR *v9; // rax
  DXGSESSIONMGR **v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  DXGSESSIONDATA *v15; // rcx
  DXGSESSIONDATA *v16; // rcx
  _BYTE v17[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  if ( !a2 )
  {
    v6 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
    a2 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 5678;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate a new PnP transition token.",
        5678LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
      return 0LL;
    }
    v6[1] = 0;
    *((_WORD *)v6 + 28) = 0;
    *v6 = 1349407855;
    *((_QWORD *)v6 + 5) = 0x300000000LL;
    v8 = qword_14015DBD0 + 1;
    a2[6] = qword_14015DBD0 + 1;
    qword_14015DBD0 = v8;
    a2[4] = a2 + 3;
    a2[3] = a2 + 3;
    v9 = (DXGSESSIONMGR *)(a2 + 1);
    v10 = (DXGSESSIONMGR **)*((_QWORD *)this + 41);
    if ( *v10 != (DXGSESSIONMGR *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 320;
    a2[2] = v10;
    *v10 = v9;
    *((_QWORD *)this + 41) = v9;
  }
  if ( a3 != 0x300000000LL )
  {
    if ( a3 == 0x200000000LL )
    {
      v11 = *((_DWORD *)this + 36);
      a3 = 0x100000000LL;
      if ( v11 != -1 )
        a3 = v11;
    }
    v12 = a2[5];
    if ( v12 == 0x300000000LL )
    {
      a2[5] = a3;
    }
    else if ( v12 != a3 )
    {
      a2[5] = 0x100000000LL;
    }
    v13 = *((_DWORD *)this + 20);
    if ( a3 == 0x100000000LL )
    {
      v14 = 0LL;
      if ( v13 )
      {
        do
        {
          v15 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v14);
          if ( v15 )
            DXGSESSIONDATA::StartPnPTransitionOnSession(v15, (struct _PNP_TRANS_TOKEN *)a2);
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *((_DWORD *)this + 20) );
      }
    }
    else if ( (unsigned int)a3 < v13 )
    {
      v16 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)a3);
      if ( v16 )
        DXGSESSIONDATA::StartPnPTransitionOnSession(v16, (struct _PNP_TRANS_TOKEN *)a2);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return a2;
}
