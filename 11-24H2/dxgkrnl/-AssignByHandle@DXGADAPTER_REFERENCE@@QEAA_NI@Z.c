/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0
 * Callers:
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AC7A0 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401AFEDC (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401BE4F0 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401C628C (DxgkGetNominalRefreshRateInfo.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403A22E8 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
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
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry1(2LL, CurrentProcess);
    WdLogGlobalForLineNumber = 12721;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
    WdLogGlobalForLineNumber = 12728;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v12, v11);
    return 0;
  }
  _InterlockedIncrement64((volatile signed __int64 *)*this + 3);
  this[1] = (struct DXGADAPTER *)-1LL;
  if ( v12[0] )
    DXGADAPTER::ReleaseReference(v12[0]);
  return 1;
}
