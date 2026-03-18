/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C00BFA50 (NtMITUpdateInputGlobals.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1C01A0394 (rimDoUpdateInputGlobalsWorkItem.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2D60 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00018FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     CitLastInputUpdate @ 0x1C0010D00 (CitLastInputUpdate.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011524 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     EtwTraceUserIsActive @ 0x1C00B2EB0 (EtwTraceUserIsActive.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C00B439C (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ?LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z @ 0x1C00D4718 (-LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C00E7722 (ApiSetEditionKeepMachineUp.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C0208240 (ApiSetTraceLoggingUserIsActive.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  int v8; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF

  v6 = a6;
  v8 = a4;
  v11 = a6;
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    LODWORD(a6) = v8;
    LODWORD(v24) = v6;
    v23 = InputTraceLogging::LinpSourceToString(v12);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0289810,
      (int)&unk_1C025D087,
      v13,
      v14,
      (void **)&v23,
      (__int64)&v24,
      (__int64)&a6);
  }
  if ( (v6 & 0x20) != 0 )
  {
    v15 = KnownInputTypeFromLinpSource(a3);
    v6 |= 4u;
    if ( (v15 & *(_DWORD *)(a1 + 104)) == 0 )
      v6 = v11;
    if ( (v15 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 |= v16;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v6 & 8) != 0;
    if ( a3 != 1 )
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFBF);
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        v21 = SGDGetUserSessionState(v18, v17, v19, v20);
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, v21) < 0 )
        {
          LODWORD(a6) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 311LL);
        }
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3, v20);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
    LODWORD(a6) = 0;
    v24 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, (unsigned __int64 *)&v24) )
      ApiSetTraceLoggingUserIsActive((unsigned int)a6, v24);
    if ( (v6 & 0x10) == 0 )
    {
      CitLastInputUpdate(a3, a2, (unsigned __int16)v8, v6);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v6);
    }
  }
  return 1;
}
