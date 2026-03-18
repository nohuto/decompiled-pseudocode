/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1402DCFA0
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140072EFC (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1402DB730 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x140078D28 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1402DCA28 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403E0340 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  unsigned int *v5; // rdx
  SESSION_ADAPTER *v6; // rbx
  SESSION_ADAPTER **v8; // rdx
  SESSION_ADAPTER **v9; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 LowPart; // [rsp+28h] [rbp-30h]

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v6 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v8 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 4);
      if ( v8[1] != (SESSION_ADAPTER *)((char *)v6 + 32)
        || (v9 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 5), *v9 != (SESSION_ADAPTER *)((char *)v6 + 32)) )
      {
        __fastfail(3u);
      }
      *v9 = (SESSION_ADAPTER *)v8;
      v8[1] = (SESSION_ADAPTER *)v9;
      SESSION_ADAPTER::`scalar deleting destructor'(v6);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(2LL, (int)v5[1], *v5, this, -1073741811LL);
    LowPart = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 3959;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x%08I64x is NOT being used in session 0x%I64x, returning 0x%I64x.",
      HighPart,
      LowPart,
      (__int64)this,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
}
