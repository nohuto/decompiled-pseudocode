/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x140366E60
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1403687B0 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     RtlStringLengthWorkerW @ 0x140043C3C (RtlStringLengthWorkerW.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x140366FBC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

NTSTATUS __fastcall DpiPersistence::AppendMonitorId(
        DpiPersistence *this,
        unsigned int *a2,
        const struct _LUID *a3,
        struct VIDPN_MGR *a4,
        _WORD *a5,
        STRSAFE_PCNZWCH psz)
{
  unsigned int v7; // ebx
  int MonitorIdFromTargetId; // edi
  NTSTATUS result; // eax
  unsigned __int16 *v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned __int16)a4;
  MonitorIdFromTargetId = DpiPersistence::GetMonitorIdFromTargetId(
                            this,
                            (unsigned int)a2,
                            a3,
                            (struct VIDPN_MGR *)(unsigned __int16)a4,
                            (unsigned __int16)psz,
                            v10);
  if ( MonitorIdFromTargetId < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to get Monitor ID from Target ID",
      158LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    pcchLength[0] = 0LL;
    if ( psz )
    {
      result = RtlStringLengthWorkerW(psz, v7, pcchLength);
      MonitorIdFromTargetId = result;
      if ( result >= 0 )
      {
        *a5 = pcchLength[0];
        return result;
      }
    }
    else
    {
      MonitorIdFromTargetId = -1073741811;
    }
    pcchLength[0] = 0LL;
    WdLogSingleEntry5(1LL, MonitorIdFromTargetId, psz, v7, (int)a2[1], *a2);
    v12 = *a2;
    v11 = (int)a2[1];
    WdLogGlobalForLineNumber = 173;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Invalid monitor Id. (Status = 0x%I64x, o_szMonitorId = 0x%I64x, i_MonitorIdMaxLen, pDxgAdapter->GetLuid() = 0x%I64x%08I64x)",
      MonitorIdFromTargetId,
      (__int64)psz,
      v7,
      v11,
      v12);
  }
  return MonitorIdFromTargetId;
}
