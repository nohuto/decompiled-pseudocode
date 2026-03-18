/*
 * XREFs of ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401A5400
 * Callers:
 *     ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7A30 (-ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 *     ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7AD0 (-SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000274C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 */

void __fastcall QualityOfService::PolicyChanged(QualityOfService *this)
{
  CTouchProcessor *v1; // rcx
  char v2; // di
  bool v3; // bl
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD **v9; // r14
  _QWORD *i; // rsi
  _QWORD *v11; // rbx
  int PsProcessWindowState; // r12d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  char v16; // bp
  char v17; // r15
  int v18; // ebx
  __int64 v19; // rax
  bool v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  int v27; // [rsp+58h] [rbp-30h]
  int v28; // [rsp+5Ch] [rbp-2Ch]
  char v29; // [rsp+90h] [rbp+8h] BYREF
  int v30; // [rsp+98h] [rbp+10h] BYREF

  v1 = WPP_GLOBAL_Control;
  v2 = 1;
  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      18,
      (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v9 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 1216) + 41368LL) + 24LL);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = i - 143;
    if ( (int)tagPROCESSINFO::GetPsProcessWindowState((__int64)(i - 143), 1) > 1 )
    {
      PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState((__int64)(i - 143), 0);
      if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x200000000004LL) )
      {
        v15 = *((unsigned int *)v11 + 14);
        v29 = PsProcessWindowState;
        v30 = v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v15,
          (__int64)&unk_140274943,
          v13,
          v14,
          (__int64)&v30,
          (__int64)&v29);
      }
      v26 = *v11;
      v27 = PsProcessWindowState;
      v28 = 0;
      PsSetProcessesWindowState(1LL, &v26);
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *((_DWORD *)v11 + 14);
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v25) = PsProcessWindowState;
        LODWORD(v24) = v18;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *(_QWORD *)(v19 + 69400),
          4u,
          0xEu,
          0x13u,
          (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids,
          v24,
          v25);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v2 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69400),
      4,
      14,
      20,
      (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids);
  }
}
