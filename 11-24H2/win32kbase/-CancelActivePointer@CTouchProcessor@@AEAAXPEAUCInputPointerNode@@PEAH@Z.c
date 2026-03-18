/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1401F7420 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FC2F8 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x140200878 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140204E1C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x140205ADC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14020A434 (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHH @ 0x14020A488 (WPP_RECORDER_AND_TRACE_SF_LHH.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(CTouchProcessor *this, struct CInputPointerNode *a2, int *a3)
{
  unsigned int v6; // r15d
  char v7; // r14
  bool v8; // r12
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  CInputDest *v12; // rcx
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rbx
  int v15; // eax
  unsigned __int64 PrevMsgId; // rax
  CTouchProcessor *v17; // rcx
  int v18; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v18 = *((_DWORD *)a2 + 14);
  v7 = 1;
  if ( v18 == 1 )
  {
    v6 = 0x20000;
  }
  else if ( v18 == 2 )
  {
    v6 = 0x40000;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_LHH(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69400));
    }
  }
  CTouchProcessor::SetNewValidState(this, v6, a2);
  v12 = (struct CInputPointerNode *)((char *)a2 + 72);
  if ( *((_DWORD *)a2 + 18) )
  {
    CInputDest::~CInputDest(v12);
    *((_DWORD *)a2 + 75) &= 0xFFFF7F8F;
  }
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15933);
  v13 = (unsigned __int64 *)((char *)a2 + 256);
  if ( *((_DWORD *)a2 + 14) != 3 )
  {
    if ( (unsigned __int64 *)*v13 == v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15958);
LABEL_23:
    v14 = *v13;
    if ( (*(_DWORD *)(v14 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073, 15960);
    v15 = *(_DWORD *)(v14 + 36);
    if ( (v15 & 0x40) != 0 )
    {
      if ( (v15 & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073, 15991);
    }
    else
    {
      PrevMsgId = CTouchProcessor::GetPrevMsgId(v12, v14);
      v14 = PrevMsgId;
      if ( !PrevMsgId || (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v17, PrevMsgId) + 9) & 0x40) == 0 )
        return;
    }
    CTouchProcessor::UnreferenceMsgData((__int64)this, v14, 1);
    return;
  }
  if ( (unsigned __int64 *)*v13 != v13 )
    goto LABEL_23;
  CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
  CTouchProcessor::FreeNode(this, a2);
  if ( (unsigned int)Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a3 )
      *a3 = 1;
  }
}
