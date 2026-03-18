/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     SfnOUTCBOXSTRING @ 0x140089680 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140089810 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x14008A380 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x14008A6D0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     PrepareSentPointerMessageForClient @ 0x1400A9130 (PrepareSentPointerMessageForClient.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140170920 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINDEVICECHANGE @ 0x140174A40 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnINOUTLPWINDOWPOS @ 0x1401777D0 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x140178390 (SfnDWORDOPTINLPMSG.c)
 *     SfnINOUTNCCALCSIZE @ 0x14017DAE0 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x14017E180 (SfnINLPWINDOWPOS.c)
 *     SfnINOUTSTYLECHANGE @ 0x140182360 (SfnINOUTSTYLECHANGE.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnNCDESTROY @ 0x14018C190 (SfnNCDESTROY.c)
 *     SfnEMPTY @ 0x14018F5F0 (SfnEMPTY.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     SfnINOUTLPPOINT5 @ 0x14019F860 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401A5A30 (SfnINOUTLPSCROLLINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401AC130 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401AE5F0 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINOUTLPRECT @ 0x1401B1DE0 (SfnINOUTLPRECT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1401B3C70 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1401C6A60 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1401C7640 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401CCCE0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401CF210 (SfnINLPUAHINITMENU.c)
 *     SfnOUTLPRECT @ 0x1401D1D30 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1401D4720 (SfnOUTDWORDINDWORD.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1401D8D10 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1401D8F70 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x1401DB1F0 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401DDB20 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1401E62E0 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1401E7FF0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINWPARAMCHAR @ 0x1401E9660 (SfnINWPARAMCHAR.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401ED350 (SfnINLPUAHDRAWMENU.c)
 *     SfnINDESTROYCLIPBRD @ 0x1401F1F90 (SfnINDESTROYCLIPBRD.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnTOUCH @ 0x1401F5D40 (SfnTOUCH.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1401F91F0 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINOUTLPSIZE @ 0x1402000F0 (SfnINOUTLPSIZE.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x140202F70 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x1402041C0 (SfnTOUCHHITTESTING.c)
 *     SfnGESTURE @ 0x140209870 (SfnGESTURE.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140209F80 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     SfnGETWINDOWDATA @ 0x1402B88A0 (SfnGETWINDOWDATA.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402B8E90 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINOUTDRAG @ 0x1402B9720 (SfnINOUTDRAG.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1402B9A10 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1402B9D00 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1402B9FC0 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BA2C0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1402BA610 (SfnINSIZECLIPBRD.c)
 *     SfnINTERCEPTEDWINDOWACTION @ 0x1402BA8A0 (SfnINTERCEPTEDWINDOWACTION.c)
 *     SfnPOPTINLPUINT @ 0x1402BAB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1402BB320 (SfnSENTDDEMSG.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        HWND a3,
        struct tagDRAWITEMSTRUCT *a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  int v7; // edi
  HWND v8; // r13
  unsigned int v9; // esi
  int v11; // eax
  BOOL v12; // eax
  int v13; // eax
  char *v14; // r15
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 UserSessionState; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int16 v31; // di
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 CurrentProcessWow64Process; // rax
  ULONG v36; // r8d
  __int64 v37; // rcx
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64); // r15
  unsigned __int16 v39; // di
  __int64 v40; // r8
  signed __int32 v41[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+30h] [rbp-88h]
  struct tagSMS *v43; // [rsp+38h] [rbp-80h]
  unsigned int v44; // [rsp+50h] [rbp-68h]
  volatile void *Address; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+C8h] [rbp+10h] BYREF
  HWND v48; // [rsp+D0h] [rbp+18h] BYREF
  struct tagDRAWITEMSTRUCT *v49; // [rsp+D8h] [rbp+20h] BYREF

  v49 = a4;
  v48 = a3;
  v47 = a2;
  v7 = (int)a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 <= 3 || (v11 = IsPointerInputClientMessage(a2)) != 0 )
    v11 = 1;
  v12 = v11 && a2 != 595;
  if ( v12 || (a2 != 528 || (_WORD)a3 != 582 ? (v13 = 0) : (v13 = 1), v13) )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v47, &v48, &v49, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v8 = v48;
      v9 = v47;
      v7 = (int)v49;
    }
  }
  v14 = (char *)a1 + 40;
  BugCheckParameter3[0] = (ULONG_PTR)a1 + 40;
  v15 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v44 = v15;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    v33 = *((_QWORD *)PtiCurrent(v17, v16) + 65);
    Address = *(volatile void **)(v33 + 248);
    _InterlockedOr(v41, 0);
    if ( Address )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16, v34);
      v36 = 1;
      if ( !CurrentProcessWow64Process )
        v36 = 4;
      ProbeForRead(Address, 0x20uLL, v36);
      if ( *(_QWORD *)Address )
      {
        *(_QWORD *)(v33 + 224) |= 0x100uLL;
        v8 = v48;
        v9 = v47;
        v7 = (int)v49;
LABEL_11:
        if ( (v9 & 0x1FFFF) >= 0x400 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928) + 752LL);
          v23 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
          v43 = a5;
          v42 = v15;
          v21 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, v7, v23, v22);
        }
        else
        {
          v18 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
          v19 = gapfnScSendMessage[v18];
          v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v16) + 19928) + 752LL);
          v21 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, unsigned int, struct tagSMS *))v19)(
                  a1,
                  v9,
                  v8,
                  v49,
                  *(_QWORD *)(*(_QWORD *)v14 + 120LL),
                  v20,
                  v15,
                  a5);
        }
LABEL_13:
        *a7 = v21;
        return;
      }
    }
    v8 = v48;
    v9 = v47;
    v7 = (int)v49;
  }
  if ( *(int *)(W32GetUserSessionState(v17, v16) + 64256) >= 0 )
    goto LABEL_11;
  if ( v9 == 90 )
    goto LABEL_11;
  v16 = *(_QWORD *)v14;
  v17 = *(_WORD *)(*(_QWORD *)v14 + 42LL) & 0x2FFF;
  v47 = v17;
  if ( (unsigned __int16)(v17 - 673) > 9u && (_WORD)v17 != 666 )
    goto LABEL_11;
  v24 = *(_QWORD *)(v16 + 120);
  v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
  Address = (volatile void *)((unsigned __int16)v47 - 666LL);
  if ( v24 != *(_QWORD *)(v17 + 8LL * (_QWORD)Address + 584) )
  {
    v30 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
    if ( v30 != *(_QWORD *)(v17 + 8LL * (_QWORD)Address + 392) )
    {
      v7 = (int)v49;
      goto LABEL_11;
    }
  }
  UserSessionState = W32GetUserSessionState(v17, v16);
  v26 = 2LL * (_QWORD)Address;
  v27 = *(_QWORD *)(UserSessionState + 16LL * (_QWORD)Address + 19984);
  if ( !v27
    || v9 <= *(_DWORD *)(UserSessionState + 16LL * (_QWORD)Address + 19976)
    && (v26 = v9 & 7, ((unsigned __int8)(1 << v26) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v27)) != 0)
    || (*(_BYTE *)(*(_QWORD *)v14 + 18LL) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v37 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
      v38 = gapfnScSendMessage[v37];
      v39 = v47;
      if ( (_WORD)v47 == 666 )
        v40 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v27) + 19928) + 7592LL);
      else
        v40 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v27) + 19928) + 8LL * v39 - 4608);
      v21 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, unsigned int, struct tagSMS *))v38)(
              a1,
              v9,
              v8,
              v49,
              v15,
              v40,
              v15,
              a5);
    }
    else
    {
      v31 = v47;
      if ( (_WORD)v47 == 666 )
        v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v27) + 19928) + 7592LL);
      else
        v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v27) + 19928) + 8LL * v31 - 4608);
      v43 = a5;
      v42 = v15;
      v21 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, (_DWORD)v49, v15, v32);
    }
    goto LABEL_13;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  if ( a6 )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)a1);
  v28 = xxxDefWindowProc((struct tagTHREADINFO **)a1, v9, v8, v49);
  *a7 = v28;
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v29);
}
