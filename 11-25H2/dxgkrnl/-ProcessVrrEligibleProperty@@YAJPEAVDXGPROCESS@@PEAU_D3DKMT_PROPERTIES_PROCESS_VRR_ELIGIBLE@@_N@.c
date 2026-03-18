/*
 * XREFs of ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1402E33DC
 * Callers:
 *     NtDxgkSetProperties @ 0x1402E1F00 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x1402E2560 (NtDxgkGetProperties.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessVrrEligibleProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *a2,
        char a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 8);
    if ( a3 )
    {
      if ( *(_BYTE *)(v3 + 137) )
      {
        WdLogSingleEntry1(3LL, -1073740528LL);
        result = 3221226768LL;
        WdLogGlobalForLineNumber = 6073;
        return result;
      }
      *(_BYTE *)(v3 + 137) = *(_BYTE *)a2 != 0;
    }
    else
    {
      *(_BYTE *)a2 = *(_BYTE *)(v3 + 137) != 0;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6058;
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
    return 3221225485LL;
  }
}
