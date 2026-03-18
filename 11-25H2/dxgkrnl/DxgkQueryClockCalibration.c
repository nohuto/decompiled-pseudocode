/*
 * XREFs of DxgkQueryClockCalibration @ 0x140385300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1403854B8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1)
{
  void *v1; // rbx
  struct DXGPROCESS *Current; // rdi
  const void *v3; // rdx
  int v4; // edi
  struct DXGADAPTER *v6; // [rsp+50h] [rbp-58h] BYREF
  DXGADAPTER *v7; // [rsp+58h] [rbp-50h] BYREF
  struct _D3DKMT_QUERYCLOCKCALIBRATION Src; // [rsp+68h] [rbp-40h] BYREF

  v1 = (void *)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    v3 = v1;
    if ( (unsigned __int64)v1 >= MmUserProbeAddress )
      v3 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v3, 0x28uLL);
    v6 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v7, Src.hAdapter, Current, &v6, 1);
    v4 = DxgkQueryClockCalibrationInternal(Current, &Src, v6);
    if ( v4 >= 0 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v1, &Src, 0x28uLL);
    }
    if ( v7 )
      DXGADAPTER::ReleaseReference(v7);
    return (unsigned int)v4;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10579;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 10579LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
