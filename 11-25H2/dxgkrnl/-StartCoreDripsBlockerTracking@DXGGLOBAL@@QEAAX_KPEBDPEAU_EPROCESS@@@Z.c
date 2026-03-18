/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402ED2D0
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402A5D10 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402ED3B4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        const char *a3,
        struct _EPROCESS *a4)
{
  int FirstProfilerInterface; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( a4 )
    {
      if ( *((_DWORD *)this + 514) )
      {
        if ( *((_BYTE *)this + 304312) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 2064), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::AddProcessEntry((char *)this + 2232, a2, a3, a4, FirstProfilerInterface);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
        }
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 510;
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 504;
  }
}
