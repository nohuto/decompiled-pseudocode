/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140198680
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403E9430 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1400671A0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x14007C7C0 (DpiSetSchedulerCallbackState.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140091160 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140196F4C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140307130 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  unsigned int i; // esi
  __int64 v7; // rbx
  void *v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  unsigned int j; // ebx
  ADAPTER_DISPLAY *v15; // rbx
  MONITOR_MGR *v16; // rcx
  ADAPTER_DISPLAY *v17; // rax
  __int64 v18; // rcx
  DXGDODPRESENT *v19; // rcx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v21; // rdi
  char *v22; // rbx
  unsigned int ActualBufferSize; // eax
  _DWORD *v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  _BYTE v27[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-18h] BYREF

  if ( this[44] != (ADAPTER_DISPLAY *)(this + 44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5338;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_OpmHandleMappingList)",
      5338LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[16] )
  {
    v5 = *((_DWORD *)this + 24);
    for ( i = 0; i < v5; v5 = *((_DWORD *)this + 24) )
    {
      v7 = 4024LL * i;
      v8 = *(void **)((char *)this[16] + v7 + 1088);
      if ( v8 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        *(_QWORD *)((char *)this[16] + v7 + 1088) = 0LL;
      }
      ++i;
      *(_DWORD *)((char *)this[16] + v7 + 1096) = 0;
      *((_BYTE *)this[16] + v7 + 1100) = 0;
      *(_DWORD *)((char *)this[16] + v7 + 1104) = -1;
      *(_DWORD *)((char *)this[16] + v7 + 1116) = -1;
      *(_DWORD *)((char *)this[16] + v7 + 1120) = -1;
    }
    v9 = 0;
    if ( v5 )
    {
      do
      {
        v10 = 4024LL * v9;
        v11 = *(void **)((char *)this[16] + v10 + 800);
        if ( v11 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
          *(_QWORD *)((char *)this[16] + v10 + 800) = 0LL;
          *(_DWORD *)((char *)this[16] + v10 + 816) = 0;
        }
        v12 = *(void **)((char *)this[16] + v10 + 848);
        if ( v12 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
          *(_QWORD *)((char *)this[16] + v10 + 848) = 0LL;
        }
        v13 = *(void **)((char *)this[16] + v10 + 888);
        if ( v13 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
          *(_QWORD *)((char *)this[16] + v10 + 888) = 0LL;
        }
        ++v9;
      }
      while ( v9 < *((_DWORD *)this + 24) );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(this + 78), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    for ( j = 0; j < *((_DWORD *)this + 24); ++j )
      DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[16] + 4024 * j));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  }
  v15 = this[13];
  if ( v15 )
  {
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)v15 + 40));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v15)(v15, 1LL);
    this[13] = 0LL;
  }
  if ( this[14] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    v16 = this[14];
    WdLogGlobalForLineNumber = 324;
    if ( v16 )
      MONITOR_MGR::`vector deleting destructor'(v16, 1);
    this[14] = 0LL;
  }
  v17 = this[2];
  v18 = *((_QWORD *)v17 + 27);
  if ( v18 && !*((_QWORD *)v17 + 391) )
  {
    DpiSetSchedulerCallbackState(v18, 0);
    KeFlushQueuedDpcs();
  }
  v19 = this[58];
  if ( v19 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v19);
    this[58] = 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v21 = this[2];
  v22 = (char *)Global + 1384;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGGLOBAL *)((char *)Global + 1384), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((AUTOEXPANDALLOCATION *)(v22 + 48));
  v24 = (_DWORD *)*((_QWORD *)v22 + 6);
  v25 = ActualBufferSize >> 4;
  if ( v25 > 1 << *((_DWORD *)v22 + 17) )
    v25 = 1 << *((_DWORD *)v22 + 17);
  if ( v25 )
  {
    v26 = v25;
    do
    {
      if ( *v24 == *((_DWORD *)v21 + 103) && v24[1] == *((_DWORD *)v21 + 104) )
        v24[3] &= ~1u;
      v24 += 4;
      --v26;
    }
    while ( v26 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
}
