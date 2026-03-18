/*
 * XREFs of DxgkAcquireGdiViewIds @ 0x1401F617C
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1401F3484 (-AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkAcquireGdiViewIds(char a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  struct DXGGLOBAL *Global; // rax
  int v10; // edi
  __int64 i; // rbx
  int v13; // eax

  SessionDataForSpecifiedSession = 0LL;
  if ( !a1
    || (Global = DXGGLOBAL::GetGlobal(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                            *((DXGSESSIONMGR **)Global + 118),
                                            a2)) != 0LL) )
  {
    for ( i = 0LL; (unsigned int)i < *a3; i = (unsigned int)(i + 1) )
    {
      if ( a1 )
        v13 = DXGSESSIONDATA::AcquireSessionGdiViewId(SessionDataForSpecifiedSession, (unsigned int *)(a4 + 4 * i));
      else
        v13 = DMgrAcquireGdiViewId(a4 + 4 * i);
      v10 = v13;
      if ( v13 < 0 )
      {
        if ( !(_DWORD)i )
        {
          WdLogSingleEntry1(2LL, v13);
          WdLogGlobalForLineNumber = 1604;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Cannot reserve any GDI Id, (Status = 0x%I64x)",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v10;
        }
        *a3 = i;
        WdLogSingleEntry2(2LL, (unsigned int)i, v13);
        WdLogGlobalForLineNumber = 1616;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot reserve GDI Id for VidPn number 0x%I64x, (Status = 0x%I64x)",
          (unsigned int)i,
          v10,
          0LL,
          0LL,
          0LL);
        return 0LL;
      }
    }
    return 0LL;
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 1580;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v10;
  }
}
