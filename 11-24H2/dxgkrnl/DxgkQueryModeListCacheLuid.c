/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1403F6C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x14006B0DC (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rsi
  __int64 PairingAdapters; // rdi
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rbp
  ADAPTER_DISPLAY *v14; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-118h]
  __int64 LowPart; // [rsp+28h] [rbp-110h]
  struct DXGADAPTER *v17; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8744LL;
    v7 = L"Caller specified a NULL pointer to DxgkAdapter LUID in DxgkQueryModeListCacheLuid function.";
LABEL_3:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8751LL;
    v7 = L"Caller specified a NULL pointer in pModeListCacheLuid in DxgkQueryModeListCacheLuid function.";
    goto LABEL_3;
  }
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v18);
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 8766;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkQueryModeListCacheLuid function.",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v17 = 0LL;
  v19 = 0LL;
  PairingAdapters = (int)DxgkpGetPairingAdapters(v10, v3, 0LL, 0LL, &v17, &v19, 0);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)PairingAdapters >= 0 )
  {
    v12 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8798;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 8798LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v12, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    DXGADAPTER::ReleaseReference(v12);
    if ( (int)v13 >= 0 )
    {
      if ( !*((_QWORD *)v12 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8820;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          8820LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 390);
      if ( (unsigned int)v3 < *((_DWORD *)v14 + 24) )
      {
        LODWORD(v13) = ADAPTER_DISPLAY::QueryModeListCacheLuid(v14, v3, a3);
      }
      else
      {
        WdLogSingleEntry2(2LL, v3, v12);
        WdLogGlobalForLineNumber = 8830;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Caller specified an invalid VidPnSourceId 0x%I64x on DxgAdapter 0x%I64x.",
          v3,
          (__int64)v12,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v12, v13);
      WdLogGlobalForLineNumber = 8815;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire shared lock on DxgkAdapter 0x%I64x (Status = 0x%I64x).",
        (__int64)v12,
        v13,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry3(4LL, 0LL, v3, PairingAdapters);
    result = (unsigned int)PairingAdapters;
    WdLogGlobalForLineNumber = 8794;
  }
  return result;
}
