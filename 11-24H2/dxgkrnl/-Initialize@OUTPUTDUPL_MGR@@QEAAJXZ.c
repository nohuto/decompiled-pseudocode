/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1401E51A0
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14036B118 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1401E4A18 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  _DWORD *v5; // rax

  if ( *((_DWORD *)this + 19) > 0x10u )
  {
    WdLogSingleEntry1(2LL, 16LL);
    WdLogGlobalForLineNumber = 905;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Output duplication manager only support 0x%I64x sources\n",
      16LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 913;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"DXGSESSIONDATA is NULL", 913LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v5 = (_DWORD *)*((_QWORD *)SessionData + 1);
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 920;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"OUTPUTDUPL_SESSION_MGR is NULL",
      920LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 2) = *v5;
  result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
  if ( (int)result >= 0 )
    return 0LL;
  *((_DWORD *)this + 19) = 0;
  return result;
}
