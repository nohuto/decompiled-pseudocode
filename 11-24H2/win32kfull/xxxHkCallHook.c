/*
 * XREFs of xxxHkCallHook @ 0x140080630
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1400633A4 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x14007ED04 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x14007F02C (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x14007F2EC (fnHkINLPMSLLHOOKSTRUCT.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     fnHkINDWORD @ 0x14007FF78 (fnHkINDWORD.c)
 *     fnHkINLPMSG @ 0x1400800D0 (fnHkINLPMSG.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140082A7C (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     SfnOUTCBOXSTRING @ 0x140089680 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140089810 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x14008A380 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x14008A6D0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
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
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401A0964 (fnHkINLPCBTCREATESTRUCT.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1401A52D0 (--1CCheckLLHookTime@@QEAA@XZ.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401A5A30 (SfnINOUTLPSCROLLINFO.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1401AA64C (fnHkINLPKBDLLHOOKSTRUCT.c)
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
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1401E8FAC (fnHkINLPCBTACTIVATESTRUCT.c)
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
 *     ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x140218DC8 (-TraceLoggingSlowLowLevelHook@@YAXI_K0@Z.c)
 *     fnHkINLPRECT @ 0x140228F68 (fnHkINLPRECT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
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
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r13
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v24; // rax
  _QWORD *v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rsi
  unsigned int v29; // r13d
  int v30; // ebx
  int v31; // r13d
  unsigned __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rax
  int v42; // ecx
  unsigned __int16 v43; // r8
  __int64 (__fastcall *v44)(int, int, int, int, __int64, __int64); // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // r12d
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  __int64 *v50; // rax
  unsigned int v51; // ebx
  int v52; // [rsp+50h] [rbp-F8h]
  __int64 v53; // [rsp+50h] [rbp-F8h]
  __int64 v55; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v56; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v57; // [rsp+70h] [rbp-D8h]
  unsigned int v58; // [rsp+78h] [rbp-D0h]
  __int64 v59; // [rsp+80h] [rbp-C8h]
  __int64 v60; // [rsp+88h] [rbp-C0h]
  _QWORD *v61; // [rsp+90h] [rbp-B8h]
  __int64 v62; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-A0h]
  _BYTE v65[56]; // [rsp+D0h] [rbp-78h] BYREF

  v52 = a2;
  v6 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v7 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42376);
  if ( !*(_DWORD *)(W32GetUserSessionState(v9, v8) + 19816) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      goto LABEL_39;
    if ( ExIsResourceAcquiredExclusiveLite(v7) == 1
      || (IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v7)) != 0 )
    {
      LOBYTE(IsResourceAcquiredSharedLite) = 1;
    }
    if ( !(_BYTE)IsResourceAcquiredSharedLite )
LABEL_39:
      __int2c();
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    if ( *(_DWORD *)(a1 + 68) == -1 )
    {
      v13 = 0xFFFFFFFFLL;
    }
    else
    {
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v11, v10);
      if ( CurrentThreadNonPaged )
        v39 = *CurrentThreadNonPaged;
      else
        v39 = 0LL;
      v13 = *(int *)(a1 + 68);
      v12 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v39 + 464) + 8 * v13 + 400);
    }
    if ( (_DWORD)v13 != -1 )
    {
      v40 = (__int64 *)W32GetCurrentThreadNonPaged(v11, v13);
      if ( v40 )
        v41 = *v40;
      else
        v41 = 0LL;
      v57 = *(_QWORD *)(v41 + 520);
      *(_QWORD *)(v57 + 224) |= 0x200uLL;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    v58 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 268));
    v17 = (unsigned int *)(a1 + 64);
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19928);
      v57 = v18 + 536;
      v56 = (_QWORD *)(v18 + 528);
      v20 = (unsigned __int64 *)(v18 + 544);
    }
    else
    {
      v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19928);
      v57 = v18 + 728;
      v19 = v18 + 720;
      v56 = (_QWORD *)(v18 + 720);
      v20 = (unsigned __int64 *)(v18 + 736);
    }
    v21 = *(_DWORD *)(a1 + 48);
    if ( v21 != 12 )
    {
      if ( v21 == 3 )
      {
        LODWORD(v55) = *v17;
        v22 = fnHkINLPMSG(
                (unsigned __int16)v52 | 0x30000u,
                a3,
                (__int128 *)a4,
                v12,
                *v20,
                ((unsigned int)v55 >> 1) & 1,
                &v55);
      }
      else
      {
        if ( v21 == 11 )
        {
          v42 = 720896;
          v43 = v52;
        }
        else
        {
          v18 = 0x140000000uLL;
          switch ( v21 )
          {
            case 0xFFFFFFFF:
            case 6u:
              v51 = *v17;
              SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v65);
              LODWORD(v55) = v51;
              v6 = fnHkINLPMSG(
                     (unsigned __int16)v52 | ((unsigned __int16)v21 << 16),
                     a3,
                     (__int128 *)a4,
                     v12,
                     *v20,
                     (v51 >> 1) & 1,
                     &v55);
              SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v65);
              goto LABEL_16;
            case 2u:
              v43 = v52;
              goto LABEL_83;
            case 4u:
              goto LABEL_17;
            case 5u:
              v43 = v52;
              switch ( v52 )
              {
                case 0:
                  goto LABEL_72;
                case 3:
                  v22 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v21 << 16) | 3u, a3, a4, v12, (*v17 >> 1) & 1);
                  goto LABEL_15;
                case 5:
                  v22 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v21 << 16) | 5u, a3, a4, v12, *v20);
                  goto LABEL_15;
                case 6:
LABEL_66:
                  v22 = (__int64)fnHkINLPMOUSEHOOKSTRUCTEX(
                                   v43 | ((unsigned __int16)v21 << 16),
                                   a3,
                                   (__int128 *)a4,
                                   v12,
                                   *v20,
                                   (int *)(a1 + 64));
                  goto LABEL_15;
              }
LABEL_83:
              v42 = (unsigned __int16)v21 << 16;
              break;
            case 7u:
              v43 = v52;
              goto LABEL_66;
            case 9u:
              SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v65);
              v6 = (__int64)fnHkINLPDEBUGHOOKSTRUCT(
                              (unsigned __int16)v52 | ((unsigned __int16)v21 << 16),
                              a3,
                              (__int128 *)a4,
                              v12,
                              *v20);
              SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v65);
              goto LABEL_16;
            case 0xAu:
              v43 = v52;
              if ( v52 != 5 )
                goto LABEL_83;
LABEL_72:
              v22 = fnHkINLPRECT(v43 | ((unsigned __int16)v21 << 16), a3, a4, v12, *v20);
              goto LABEL_15;
            case 0xDu:
              v62 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              v63 = v21;
              v64 = v12;
              v6 = fnHkINLPKBDLLHOOKSTRUCT(
                     (unsigned __int16)v52 | (*(unsigned __int16 *)(a1 + 48) << 16),
                     a3,
                     a4,
                     v12,
                     *v20);
              CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v62);
              goto LABEL_16;
            case 0xEu:
              v48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              v6 = (__int64)fnHkINLPMSLLHOOKSTRUCT(
                              (unsigned __int16)v52 | (*(unsigned __int16 *)(a1 + 48) << 16),
                              a3,
                              (__int128 *)a4,
                              v12,
                              *v20);
              v49 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - v48;
              if ( v49 > 0x14 )
                TraceLoggingSlowLowLevelHook(v21, v49, v12);
              goto LABEL_16;
            default:
              KeBugCheckEx(0x164u, 0xFFFFFFFFC00000E5uLL, 0LL, 0LL, 0LL);
          }
        }
        v22 = fnHkINDWORD(v43 | (unsigned int)v42, a3, a4, v12, *v20, (_DWORD *)(a1 + 64));
      }
LABEL_15:
      v6 = v22;
      goto LABEL_16;
    }
LABEL_17:
    if ( v21 == 4 )
      v24 = *(_QWORD *)(a4 + 32);
    else
      v24 = *(_QWORD *)(a4 + 40);
    v53 = v24;
    v25 = 0LL;
    if ( v21 != 4 )
      v25 = (_QWORD *)a4;
    v61 = v25;
    if ( v21 != 4 )
      a4 = 0LL;
    if ( v24 && (*(_DWORD *)(v24 + 84) & 5) != 0 )
    {
LABEL_16:
      W32SetCurrentThreadDpiAwarenessContext(v58);
      return v6;
    }
    v26 = (__int64 *)W32GetCurrentThreadNonPaged(v18, v19);
    if ( v26 )
      v27 = *v26;
    else
      v27 = 0LL;
    v55 = *(_QWORD *)(v27 + 520);
    if ( *(_DWORD *)(a1 + 48) == 4 )
    {
      v28 = (_QWORD *)*v56;
      v56 = (_QWORD *)*v56;
    }
    else
    {
      v28 = *(_QWORD **)v57;
      v56 = *(_QWORD **)v57;
      *(_QWORD *)(v55 + 104) = *v25;
    }
    v59 = *(_DWORD *)v55 & 0x10;
    v60 = *(_QWORD *)(v55 + 104);
    if ( a3 )
      *(_QWORD *)v55 |= 0x10uLL;
    else
      *(_QWORD *)v55 &= ~0x10uLL;
    v29 = *v17;
    v30 = *(_DWORD *)(a1 + 48);
    SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v65);
    v31 = v29 & 2;
    if ( v30 == 4 )
    {
      v32 = *(unsigned int *)(a4 + 16);
      v57 = v32;
      v33 = *(_QWORD *)a4;
      v34 = *(_QWORD *)(a4 + 8);
      if ( (v32 & 0x1FFFF) >= 0x400 )
      {
        v35 = (__int64 *)_HMObjectFromHandle(*(_QWORD *)(a4 + 24));
        v36 = SfnDWORD(v35, (unsigned int)v32, v34, v33, v12, (__int64)v56);
LABEL_34:
        v6 = v36;
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v65);
        *(_QWORD *)v55 ^= (*(_DWORD *)v55 ^ (unsigned int)v59) & 0x10;
        *(_QWORD *)(v55 + 104) = v60;
        goto LABEL_16;
      }
      v44 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v32]];
      v45 = _HMObjectFromHandle(*(_QWORD *)(a4 + 24));
      v46 = (unsigned int)v57;
    }
    else
    {
      v47 = *((_DWORD *)v61 + 6);
      v33 = v61[1];
      v34 = v61[2];
      if ( (v47 & 0x1FFFF) >= 0x400 )
      {
        v50 = (__int64 *)_HMObjectFromHandle(v61[4]);
        v36 = SfnDWORD(v50, v47, v34, v33, v12, (__int64)v28);
        goto LABEL_34;
      }
      v44 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v47]];
      v45 = _HMObjectFromHandle(v61[4]);
      v46 = v47;
    }
    LOBYTE(v6) = v31 != 0;
    v36 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned __int64, _QWORD *, int, __int64))v44)(
            v45,
            v46,
            v34,
            v33,
            v12,
            v56,
            (int)v6 + 2,
            v53);
    goto LABEL_34;
  }
  return 0LL;
}
