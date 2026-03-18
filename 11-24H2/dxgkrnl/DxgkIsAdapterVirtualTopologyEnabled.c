/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x14030803C
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rdi
  int v7; // eax
  __int64 v8; // rbp
  __int64 v10; // rax
  LONG HighPart; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v12; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-B8h] BYREF

  HighPart = a1.HighPart;
  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v12);
  v6 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10487;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!pAdapterIn->IsCoreResourceSharedOwner()",
        10487LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, v6, 0LL);
    DXGADAPTER::ReleaseReference(v6);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v10 = *((_QWORD *)v6 + 390);
      if ( v10 )
      {
        *a2 = *(unsigned __int8 *)(v10 + 290);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 10509;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"The selected adapter is render-only",
          10509LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v8) = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, HighPart, a1.LowPart, v7);
      WdLogGlobalForLineNumber = 10502;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        HighPart,
        a1.LowPart,
        v8,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    WdLogGlobalForLineNumber = 10480;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsAdapterVirtualTopologyEnabled function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
