/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828
 * Callers:
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AA310 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401ADA2C (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401BBB68 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401C1C6C (DxgkGetNominalRefreshRateInfo.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403B1750 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  DXGADAPTER *v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  DXGADAPTER *v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    *this = 0LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v4);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry1(2LL, CurrentProcess);
    WdLogGlobalForLineNumber = 12624;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Current process 0x%I64x does not have DXGPROCESS.",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v12, v3, Current, this, 1);
  if ( !*this )
  {
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 12631;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v12, v11);
    return 0;
  }
  _InterlockedIncrement64((volatile signed __int64 *)*this + 3);
  this[1] = (struct DXGADAPTER *)-1LL;
  if ( v12[0] )
    DXGADAPTER::ReleaseReference(v12[0]);
  return 1;
}
