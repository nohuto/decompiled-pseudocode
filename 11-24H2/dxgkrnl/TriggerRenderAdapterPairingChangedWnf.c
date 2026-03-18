/*
 * XREFs of TriggerRenderAdapterPairingChangedWnf @ 0x1401C6BA8
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EBD0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403C43D0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall TriggerRenderAdapterPairingChangedWnf(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 v6; // rdi
  int updated; // eax
  unsigned int v9; // [rsp+50h] [rbp+7h] BYREF
  PVOID Object; // [rsp+58h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp+17h] BYREF
  char v12; // [rsp+90h] [rbp+47h]

  v9 = *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 122) + 144LL);
  v12 = 0;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 != 0x200000000LL )
      v9 = a1;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    if ( (unsigned int)PsGetProcessSessionId(CurrentProcess) != v9 )
    {
      Object = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      v5 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
             *((DXGSESSIONMGR **)Global + 122),
             v9,
             (struct _KPROCESS **)&Object);
      v6 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry2(2LL, v9, v5);
        WdLogGlobalForLineNumber = 5008;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).",
          v9,
          v6,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
  }
  updated = ZwUpdateWnfStateData(&WNF_DX_RENDER_ADAPTER_PAIRING_CHANGED, 0LL, 0LL, 0LL, &v9, 0, 0);
  v6 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 5030;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to trigger WNF_DX_RENDER_ADAPTER_PAIRING_CHANGED WNF, Status = 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_10:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v6;
}
