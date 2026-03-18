/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401E640C
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x14018B268 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1401E4A18 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401E4DD4 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1403B59B8 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 result; // rax
  unsigned int i; // edi

  if ( *((_DWORD *)this + 18) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2499;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsNewConnectionAllowed() == FALSE",
      2499LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 <= 0x10 )
  {
    for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    {
      if ( OUTPUTDUPL_MGR::QueryActiveContextCount(this, i) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2513;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Cannot reconfigure the number of sources if any are active",
          2513LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3223192386LL;
      }
    }
    OUTPUTDUPL_MGR::DestroySourceContextLists(this);
    *((_DWORD *)this + 19) = a2;
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 19) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, 16LL);
    WdLogGlobalForLineNumber = 2504;
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
  return result;
}
