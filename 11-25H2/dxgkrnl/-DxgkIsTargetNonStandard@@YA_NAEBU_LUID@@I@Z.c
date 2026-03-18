/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x14036D620
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x14036D2EC (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140326C30 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

bool __fastcall DxgkIsTargetNonStandard(const struct _LUID *a1, int a2)
{
  bool IsTargetNonStandard; // di
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // rbx
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-E8h]
  __int64 HighPart; // [rsp+20h] [rbp-E8h]
  __int64 v13; // [rsp+20h] [rbp-E8h]
  __int64 v14; // [rsp+28h] [rbp-E0h]
  __int64 LowPart; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+60h] [rbp-A8h] BYREF

  IsTargetNonStandard = 0;
  v17 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v17);
  v7 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 9565;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v6, 0LL);
  DXGADAPTER::ReleaseReference(v7);
  v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
  if ( v8 < 0 )
  {
    v10 = v8;
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v8);
    v16 = a1->LowPart;
    v13 = a1->HighPart;
    WdLogGlobalForLineNumber = 9581;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.",
      v13,
      v16,
      v10,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
    return 0;
  }
  if ( *((_QWORD *)v7 + 390) )
  {
    IsTargetNonStandard = DmmIsTargetNonStandard(v7, a2);
  }
  else
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
    v14 = a1->LowPart;
    v11 = a1->HighPart;
    WdLogGlobalForLineNumber = 9591;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.",
      v11,
      v14,
      -1073741811LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  return IsTargetNonStandard;
}
