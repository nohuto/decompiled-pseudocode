/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x140204838
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1402058F0 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x140205CA0 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x14001F970 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  __int64 v7; // rbp
  __int64 v11; // rbx
  DXGGLOBAL *Global; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a2;
  LODWORD(v11) = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGVMBUSCHANNEL *)((char *)this + 120), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 565;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(reinterpret_cast<ULONG_PTR>(pRequest) & 0x7) == 0",
        565LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (a4 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 566;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"(RequestSize & 0x7) == 0", 566LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (a5 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 567;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(reinterpret_cast<ULONG_PTR>(pReturnBuffer) & 0x7) == 0",
        567LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 568;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(nullptr == pReturnBufferSize) || ((*pReturnBufferSize & 0x7) == 0)",
        568LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *a3 != (_DWORD)v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 570;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"((DXGKVMBUS_PACKETHEADER*)pRequest)->SubscriberTag == SubscriberTag",
        570LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, bool, unsigned __int64, unsigned __int64, _QWORD))qword_14015D3E0)(
                 *((_QWORD *)this + 2),
                 a3,
                 a4,
                 0LL,
                 a7,
                 a5 & -(__int64)a7,
                 (unsigned __int64)a6 & -(__int64)a7,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v7, v11, this);
      WdLogGlobalForLineNumber = 588;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  }
  return (unsigned int)v11;
}
