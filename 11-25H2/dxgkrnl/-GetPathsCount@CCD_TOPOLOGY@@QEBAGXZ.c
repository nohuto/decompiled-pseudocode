/*
 * XREFs of ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1400431B0
 * Callers:
 *     ?_FillTargetInfoMonitorsCallback@CCD_TOPOLOGY@@CAJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z @ 0x1402E84A0 (-_FillTargetInfoMonitorsCallback@CCD_TOPOLOGY@@CAJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z.c)
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E99F0 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::GetPathsCount(CCD_TOPOLOGY *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 8);
  result = 0LL;
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 20);
  return result;
}
