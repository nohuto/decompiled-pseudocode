/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403E5694
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1403E54F0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this, struct DXGADAPTER *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  if ( a2 )
  {
    *((_QWORD *)this + 2) = a2;
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 3) = -1LL;
    return 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this + 8), (unsigned __int64 *)this + 3);
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
    return 0LL;
  WdLogSingleEntry3(2LL, *((int *)this + 3), *((unsigned int *)this + 2), -1073741811LL);
  v7 = *((unsigned int *)this + 2);
  v6 = *((int *)this + 3);
  WdLogGlobalForLineNumber = 2371;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"SESSION_ADAPTER is created on an invalid adapter LUID 0x%I64x%08I64x, returning 0x%I64x.",
    v6,
    v7,
    -1073741811LL,
    0LL,
    0LL);
  return 3221225485LL;
}
