/*
 * XREFs of ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1401D11C4
 * Callers:
 *     NtDxgkSetProperties @ 0x1402E1F00 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x1402E2560 (NtDxgkGetProperties.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall ProcessUserPreferredAdapterProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *a2,
        char a3)
{
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( a1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGPROCESS *)((char *)a1 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    if ( a3 )
    {
      if ( *((_BYTE *)a1 + 540) )
      {
        v6 = -1073740528;
        WdLogSingleEntry1(3LL, -1073740528LL);
        WdLogGlobalForLineNumber = 6109;
LABEL_9:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
        return v6;
      }
      *((_OWORD *)a1 + 33) = *(_OWORD *)a2;
      *((_BYTE *)a1 + 540) = 1;
    }
    else
    {
      *(_OWORD *)a2 = *((_OWORD *)a1 + 33);
    }
    v6 = 0;
    goto LABEL_9;
  }
  v6 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 6092;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v6;
}
