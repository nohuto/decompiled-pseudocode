/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140330B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x140330F50 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  struct DXGPROCESS *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // rax
  DXGSYNCOBJECT *v12; // rbx
  int v13; // eax
  PERESOURCE *Global; // rax
  unsigned __int64 v15; // rbx
  struct DXGPROCESS *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rbx
  _BYTE v22[32]; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+98h] [rbp+28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, a1[12]);
  v4 = *(_DWORD *)(v3 + 28);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v3 + 28));
      v11 = *(int *)(v3 + 28);
      v10 = L"Invalid handle type: 0x%I64x";
      WdLogGlobalForLineNumber = 7691;
      goto LABEL_13;
    }
    v15 = *(unsigned int *)(v3 + 24);
    v16 = a1[12];
    v17 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)v16 + 74) )
    {
      v18 = *((_QWORD *)v16 + 35);
      v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
      if ( (((unsigned int)v15 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        v20 = 2 * ((v15 >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v18 + 8 * v20 + 8) & 0x1F) == 8 )
        {
          v12 = *(DXGSYNCOBJECT **)(v18 + 8 * v20);
          if ( v12 )
            goto LABEL_20;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 24));
    v10 = L"Invalid sync object handle: 0x%I64x";
    WdLogGlobalForLineNumber = 7698;
    goto LABEL_12;
  }
  v5 = a1[12];
  v6 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
  if ( v6 >= *((_DWORD *)v5 + 74) )
    goto LABEL_11;
  v7 = *((_QWORD *)v5 + 35);
  if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) != (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60) )
    goto LABEL_11;
  if ( (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) != 0 )
    goto LABEL_11;
  v8 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
  if ( !v8 )
    goto LABEL_11;
  if ( v8 == 13 )
  {
    v9 = *(_QWORD *)(v7 + 16LL * v6);
    if ( !v9 || *(_DWORD *)v9 != 11 && *(_DWORD *)v9 != 8 )
      goto LABEL_11;
    v12 = *(DXGSYNCOBJECT **)(v9 + 8);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7703;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSyncObject", 7703LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_20:
    DXGSYNCOBJECT::AddReference(v12);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    v13 = DXGSYNCOBJECT::SignalFence(v12, *(_QWORD *)(v3 + 32), 0LL, 0LL);
    v23 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 7710;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"SignalFence failed: 0x%I64x", v23, 0LL, 0LL, 0LL, 0LL);
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, v12, 0, 0);
    goto LABEL_14;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 318;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
  WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 24));
  v10 = L"Invalid shared object handle: 0x%I64x";
  WdLogGlobalForLineNumber = 7681;
LABEL_12:
  v11 = *(unsigned int *)(v3 + 24);
LABEL_13:
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v11, 0LL, 0LL, 0LL, 0LL);
  v23 = -1073741811;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
LABEL_14:
  if ( v23 < 0 )
    HandleAsyncCommandError(a1, v23, 0, 3);
  VmBusCompletePacket(a1[16], &v23, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
