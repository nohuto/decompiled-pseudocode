/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E99F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1400431B0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1402E9B94 (-MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  int v7; // eax
  int (__high *v8)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // rdx
  unsigned int v9; // r9d
  int v10; // edi
  int MonitorInformationForTargets; // eax
  _BYTE v13[144]; // [rsp+30h] [rbp-B8h] BYREF

  for ( i = 0; i < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(a2); ++i )
  {
    if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 103)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 104) )
    {
      break;
    }
  }
  v5 = *((_QWORD *)a2 + 8);
  if ( v5 )
    v6 = *(_WORD *)(v5 + 20);
  else
    v6 = 0;
  if ( i >= v6 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v10 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry5(2LL, v7, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), *((_QWORD *)a2 + 8));
    WdLogGlobalForLineNumber = 5579;
  }
  else
  {
    MonitorInformationForTargets = MonitorGetMonitorInformationForTargets(a1, v8, a2, v9);
    v10 = 0;
    if ( MonitorInformationForTargets != -1073741275 )
      v10 = MonitorInformationForTargets;
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(2LL, v10, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 5603;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return (unsigned int)v10;
}
