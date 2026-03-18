/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x140269220
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1401C52CC (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031BDC4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  unsigned __int16 v5; // bx
  __int64 result; // rax
  int v7; // esi
  unsigned __int16 i; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(i) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v5 = 8;
  for ( i = 8; ; v5 = i )
  {
    if ( CCD_TOPOLOGY::Reserve(a4, v5) < v5 )
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 1137;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = -1073741801;
      goto LABEL_8;
    }
    result = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &i);
    v7 = result;
    if ( (_DWORD)result != -1073741789 )
      break;
  }
  if ( (int)result >= 0 )
    return result;
LABEL_8:
  WdLogSingleEntry1(2LL, v7);
  WdLogGlobalForLineNumber = 1149;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Unable to retrieve active topology. (Status = 0x%I64x)",
    v7,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v7;
}
