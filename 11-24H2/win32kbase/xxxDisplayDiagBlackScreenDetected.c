/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140133408 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x140002DEC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AB908 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1401CAAE8 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1401CAB80 (DrvDxgkPollDisplayChildren.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(unsigned int a1, char a2, char a3, UUID *a4, int *a5)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  __int64 v9; // rcx
  __int64 UserSessionState; // r15
  __int64 v11; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  UUID *p_Uuid; // rax
  UUID v21; // xmm6
  __int64 v22; // rcx
  __int64 v23; // rax
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  int v26; // r12d
  int v27; // edi
  __int64 v28; // rcx
  int v29; // ebx
  UUID *v30; // rax
  UUID v31; // xmm6
  __int64 v32; // rcx
  __int64 v33; // rax
  PEPROCESS v34; // rax
  int v35; // eax
  char *v36; // rbx
  int v37; // r15d
  __int16 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r9
  __int16 v41; // [rsp+78h] [rbp-71h] BYREF
  __int16 v42; // [rsp+7Ah] [rbp-6Fh] BYREF
  unsigned int v43; // [rsp+7Ch] [rbp-6Dh] BYREF
  int v44; // [rsp+80h] [rbp-69h] BYREF
  int v45; // [rsp+84h] [rbp-65h] BYREF
  int v46; // [rsp+88h] [rbp-61h] BYREF
  int v47; // [rsp+8Ch] [rbp-5Dh] BYREF
  __int128 v48; // [rsp+90h] [rbp-59h] BYREF
  PVOID Buffer[2]; // [rsp+A0h] [rbp-49h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v50[2]; // [rsp+B0h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+C0h] [rbp-29h] BYREF
  UUID v52; // [rsp+D8h] [rbp-11h] BYREF

  LOBYTE(v42) = a3;
  v43 = a1;
  LOBYTE(v50[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v50, 0LL, 0xFu, a1);
  v8 = v50[1];
  UserSessionState = W32GetUserSessionState(v9);
  UserGdiSessionState = W32GetUserGdiSessionState(v11);
  v14 = 1;
  while ( *(_DWORD *)(UserGdiSessionState + 36) )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v41, 1);
    v16 = W32GetUserSessionState(v15);
    KeWaitForSingleObject(*(PVOID *)(v16 + 68656), WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v41);
    UserGdiSessionState = W32GetUserGdiSessionState(v17);
  }
  v48 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  LOWORD(v48) = *(_WORD *)(W32GetUserSessionState(v13) + 69008);
  if ( !(unsigned int)UserIsWddmConnectedSession((unsigned __int16)v48) )
    goto LABEL_31;
  if ( a2 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v41, 1);
    Uuid = 0LL;
    if ( !a4 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v19 = *a5;
    else
      v19 = 0;
    p_Uuid = &Uuid;
    if ( a4 )
      p_Uuid = a4;
    v21 = *p_Uuid;
    if ( *(_QWORD *)(W32GetUserSessionState(v18) + 18960) )
    {
      v23 = W32GetUserSessionState(v22);
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v23 + 18960));
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    else
    {
      ProcessImageFileName = 0;
    }
    v52 = v21;
    DrvDxgkCheckDisplayState(v43, 1, ProcessImageFileName, (_DWORD)v8, (__int64)&v52, v19);
    *(_OWORD *)(UserSessionState + 57024) = *(_OWORD *)v8;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v41);
  }
  if ( !UserIsConsoleConnection() || !a3 )
  {
LABEL_31:
    v26 = DWORD2(v48);
    v14 = DWORD1(v48);
    goto LABEL_32;
  }
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v48);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v41, 1);
  *(_QWORD *)&Uuid.Data1 = 0x1A00000000LL;
  v26 = DrvDxgkPollDisplayChildren(&Uuid);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v41);
  *(_OWORD *)v8 = *(_OWORD *)(UserSessionState + 57024);
  if ( v26 < 0 )
  {
LABEL_32:
    v27 = HIDWORD(v48);
    goto LABEL_33;
  }
  LOBYTE(v41) = 0;
  v27 = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, (bool *)&v41, 0LL, v8, 0LL);
  if ( v27 >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v41, 1);
    v52 = 0LL;
    if ( a5 )
      v29 = *a5;
    else
      v29 = 0;
    v30 = &v52;
    if ( a4 )
      v30 = a4;
    v31 = *v30;
    if ( *(_QWORD *)(W32GetUserSessionState(v28) + 18960) )
    {
      v33 = W32GetUserSessionState(v32);
      v34 = PsGetThreadProcess(**(PETHREAD **)(v33 + 18960));
      v35 = PsGetProcessImageFileName(v34);
    }
    else
    {
      v35 = 0;
    }
    v52 = v31;
    DrvDxgkCheckDisplayState(v43, 0, v35, (_DWORD)v8, (__int64)&v52, v29);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v41);
  }
LABEL_33:
  v36 = (char *)Buffer[1];
  v37 = HIDWORD(Buffer[0]);
  if ( Buffer[1] )
    v38 = 216 * WORD2(Buffer[0]);
  else
    v38 = 0;
  if ( UserIsConsoleConnection()
    && (_BYTE)v42
    && (unsigned int)dword_14029ADF8 > 5
    && tlgKeywordOn((__int64)&dword_14029ADF8, 0x400000000008LL) )
  {
    v47 = (int)Buffer[0];
    v42 = v48;
    v41 = 4;
    *(_QWORD *)&v52.Data1 = v36;
    *(_WORD *)v52.Data4 = v38;
    v44 = v37;
    v45 = v27;
    v46 = v26;
    Uuid.Data1 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v39,
      (__int64)&unk_140274D84,
      (__int64)v8,
      v40,
      (__int64)&v41,
      (__int64)&Uuid,
      (__int64)&v42,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64 *)&v52,
      (__int64)&v43);
  }
  if ( v36 )
    GreDeleteFastMutex(v36);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v50);
}
