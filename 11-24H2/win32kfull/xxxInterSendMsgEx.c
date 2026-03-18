/*
 * XREFs of xxxInterSendMsgEx @ 0x14011A1D0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x14011B918 (ClearSendMessages.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxReceiverDied @ 0x14016F37C (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1401AB570 (_ReplyMessage.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     IsPointerParentNotify @ 0x1400A9600 (IsPointerParentNotify.c)
 *     strncpycch @ 0x14011C940 (strncpycch.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 *     wcsncpycch @ 0x140139940 (wcsncpycch.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140146F40 (TransformMessageBetweenCoordinateSpaces.c)
 *     IsPointerInputMessageWithState @ 0x1401507E0 (IsPointerInputMessageWithState.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x140154700 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     UnlinkSendListSms @ 0x14016F544 (UnlinkSendListSms.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1401814D4 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x14018B41C (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ProcessSuspendedSendMessage @ 0x140195710 (ProcessSuspendedSendMessage.c)
 *     ?CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z @ 0x140271BEC (-CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402ACE84 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall xxxInterSendMsgEx(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        void **a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  void **v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagWND *v22; // r9
  _DWORD *v23; // rbx
  int v24; // eax
  UIPrivilegeIsolation *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rcx
  const struct tagUIPI_INFO *v31; // r8
  const struct tagUIPI_INFO *v32; // rdx
  bool v33; // al
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r12
  _QWORD *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 CurrentProcess; // rax
  __int64 UserSessionState; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // esi
  void **v48; // r12
  const void *v49; // rdx
  unsigned __int64 v50; // rcx
  int v51; // r12d
  __int64 v52; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _OWORD *v58; // r9
  void **v59; // rax
  _OWORD *v60; // rax
  void **v61; // r12
  size_t v62; // r8
  __int64 v63; // rbx
  void **v64; // rbx
  size_t v65; // r8
  unsigned int v66; // edx
  size_t v67; // r8
  __int64 v68; // rax
  unsigned int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 HidData; // rax
  __int64 v78; // rbx
  HWND v79; // r15
  PETHREAD *v80; // rcx
  unsigned int ThreadId; // eax
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  int v87; // ecx
  int v88; // edx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  BOOL v97; // ebx
  unsigned int v98; // r12d
  unsigned int v99; // r13d
  unsigned int *v100; // rsi
  unsigned int v101; // r15d
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 *v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  int v110; // r12d
  BOOL v111; // r15d
  ULONG_PTR *v112; // rax
  ULONG_PTR v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // r13
  _QWORD *v117; // rsi
  const void *v118; // rdx
  __int64 v119; // r15
  __int128 *v120; // rax
  __int128 v121; // xmm0
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rsi
  int v128; // eax
  int v129; // eax
  _QWORD *v130; // rcx
  unsigned int v131; // ecx
  unsigned int Size; // [rsp+40h] [rbp-148h]
  __int64 v134; // [rsp+48h] [rbp-140h]
  int v135; // [rsp+48h] [rbp-140h]
  void **v136; // [rsp+50h] [rbp-138h]
  __int64 v137; // [rsp+58h] [rbp-130h]
  _QWORD *v138; // [rsp+58h] [rbp-130h]
  __int64 v140; // [rsp+68h] [rbp-120h]
  unsigned int v141; // [rsp+68h] [rbp-120h]
  int v143; // [rsp+80h] [rbp-108h]
  void *Src[2]; // [rsp+88h] [rbp-100h] BYREF
  void *v145; // [rsp+98h] [rbp-F0h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int *v147; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 HighLimit; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+B8h] [rbp-D0h] BYREF
  void **v150; // [rsp+C0h] [rbp-C8h]
  void **v151; // [rsp+C8h] [rbp-C0h]
  __int64 v152; // [rsp+D0h] [rbp-B8h]
  __int64 v153; // [rsp+D8h] [rbp-B0h]
  void **v154; // [rsp+E0h] [rbp-A8h]
  __int64 v155; // [rsp+E8h] [rbp-A0h]
  __int64 v156; // [rsp+F0h] [rbp-98h]
  _QWORD v157[4]; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v158[16]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v159; // [rsp+130h] [rbp-58h] BYREF
  int v160; // [rsp+138h] [rbp-50h]

  v9 = a4;
  v134 = a3;
  v10 = a2;
  v136 = a4;
  v11 = a6;
  v156 = a6;
  v152 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  *(_OWORD *)Src = 0LL;
  v145 = 0LL;
  v143 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v16 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
  if ( CurrentThreadWin32Thread )
    v18 = *CurrentThreadWin32Thread;
  else
    v18 = 0LL;
  v140 = v18;
  v19 = v18;
  if ( !a5 )
    v19 = 0LL;
  v137 = v19;
  v155 = v19;
  if ( v19 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 1) != 0 )
      return 0LL;
    v134 = a3;
    v9 = v136;
  }
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  v22 = a1;
  if ( a1 )
  {
    v23 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 464LL);
    if ( v23 == v16 )
    {
      v24 = 0;
LABEL_37:
      if ( v24 )
      {
        UserSetLastError(5);
        return 0LL;
      }
      v11 = a6;
      v22 = a1;
      goto LABEL_41;
    }
    if ( v10 > 0xD0 )
    {
      if ( v10 == 272 )
        goto LABEL_36;
      if ( v10 != 353 && v10 != 424 && v10 != 563 && v10 != 648 )
      {
LABEL_27:
        v24 = 0;
        goto LABEL_37;
      }
    }
    else if ( v10 != 208 )
    {
      switch ( v10 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_28;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v20 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19928);
          if ( *(_WORD *)(v20 + 870) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) == 0 )
          {
            goto LABEL_35;
          }
          UserSetLastError(5);
          break;
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x70u:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
        case 0x76u:
        case 0x77u:
        case 0x78u:
        case 0x79u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Cu:
        case 0x7Du:
        case 0x7Eu:
        case 0x7Fu:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
        case 0x8Cu:
        case 0x8Du:
        case 0x8Eu:
        case 0x8Fu:
        case 0x90u:
        case 0x91u:
        case 0x92u:
        case 0x93u:
        case 0x94u:
        case 0x95u:
        case 0x96u:
        case 0x97u:
        case 0x98u:
        case 0x99u:
        case 0x9Au:
        case 0x9Bu:
        case 0x9Cu:
        case 0x9Du:
        case 0x9Eu:
        case 0x9Fu:
        case 0xA0u:
        case 0xA1u:
        case 0xA2u:
        case 0xA3u:
        case 0xA4u:
        case 0xA5u:
        case 0xA6u:
        case 0xA7u:
        case 0xA8u:
        case 0xA9u:
        case 0xAAu:
        case 0xABu:
        case 0xACu:
        case 0xADu:
        case 0xAEu:
        case 0xAFu:
        case 0xB0u:
        case 0xB1u:
        case 0xB2u:
        case 0xB3u:
        case 0xB4u:
        case 0xB5u:
        case 0xB6u:
        case 0xB7u:
        case 0xB8u:
        case 0xB9u:
        case 0xBAu:
        case 0xBBu:
        case 0xBDu:
        case 0xBEu:
        case 0xBFu:
        case 0xC0u:
        case 0xC1u:
        case 0xC2u:
        case 0xC3u:
        case 0xC5u:
        case 0xC6u:
        case 0xC7u:
        case 0xC8u:
        case 0xC9u:
        case 0xCAu:
        case 0xCBu:
          goto LABEL_35;
        case 0x4Eu:
          goto LABEL_36;
        default:
          goto LABEL_27;
      }
      goto LABEL_36;
    }
LABEL_28:
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      v24 = 0;
      goto LABEL_37;
    }
    if ( UIPrivilegeIsolation::Enforced(v25) && *(_QWORD *)v23 != *(_QWORD *)(W32GetUserGdiSessionState(v26) + 40) )
    {
      v24 = 0;
      goto LABEL_37;
    }
    if ( v23[193] == v16[193] && v23[194] == v16[194] )
    {
LABEL_35:
      v24 = 0;
      goto LABEL_37;
    }
LABEL_36:
    v24 = 1;
    goto LABEL_37;
  }
LABEL_41:
  if ( a8 )
    goto LABEL_77;
  v27 = 0LL;
  if ( v22 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 464LL);
  }
  else if ( v11 )
  {
    v27 = *(_QWORD *)(v11 + 464);
  }
  if ( (_DWORD *)v27 != v16 )
  {
    if ( v10 == 717 )
      goto LABEL_75;
    v28 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v27, v22, v10);
    if ( !v28 )
      v28 = IsMessageAlwaysAllowedAcrossIL(v10);
    if ( !v28 )
    {
      if ( v10 == 274 && ((v134 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v134 != 61792 )
      {
        v29 = 1;
        goto LABEL_73;
      }
      if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
      {
        v32 = (const struct tagUIPI_INFO *)(v27 + 872);
      }
      else
      {
        if ( *(_QWORD *)v27 == *(_QWORD *)(W32GetUserGdiSessionState(v30) + 40) )
        {
          v159 = 0x2000LL;
          v160 = 0;
        }
        else
        {
          v159 = *(_QWORD *)(v27 + 872);
          v160 = *(_DWORD *)(v27 + 880);
        }
        v32 = (const struct tagUIPI_INFO *)&v159;
      }
      v33 = UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v16 + 218), v32, v31);
      v29 = v33;
      if ( v33 )
        goto LABEL_76;
      if ( a1 && v10 == 793 )
      {
        v36 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v36 + 1584) == a1 )
        {
          v37 = (_QWORD *)PsGetCurrentThreadWin32Thread(v34, v20, v35);
          v38 = v37 ? *v37 : 0LL;
          if ( *(_QWORD *)(v36 + 472) == *(_QWORD *)(v38 + 472) )
          {
            v29 = 1;
LABEL_73:
            if ( !v29 )
            {
              v10 = a2;
              v22 = a1;
LABEL_75:
              if ( !UserCheckForMessageAccessWithWindowCapability(v22, v10) )
                return 0LL;
              goto LABEL_76;
            }
            goto LABEL_76;
          }
        }
        v10 = a2;
      }
      if ( v29 )
        goto LABEL_76;
      EtwTraceUIPIMsgError(v16, v27, v10, v134, v9);
      UserSetLastError(5);
      goto LABEL_73;
    }
  }
LABEL_76:
  v19 = v137;
LABEL_77:
  v39 = a2;
  if ( a2 == 576 )
  {
    LOBYTE(v20) = 20;
  }
  else
  {
    if ( a2 != 281 )
      goto LABEL_82;
    LOBYTE(v20) = 21;
  }
  if ( !HMValidateHandleWithDescriptor((__int64)v9, v20) )
    return 0LL;
LABEL_82:
  if ( !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(a6 + 464)) )
    goto LABEL_95;
  v41 = a7;
  if ( a7 )
  {
    if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
      goto LABEL_90;
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
      return 0LL;
  }
  if ( v19 )
  {
    v42 = **(_QWORD **)(a6 + 464);
    CurrentProcess = PsGetCurrentProcess();
    if ( !PsGetProcessCommonJob(CurrentProcess, v42) )
      return 0LL;
    v39 = a2;
    v41 = a7;
LABEL_90:
    if ( v19 )
      goto LABEL_95;
  }
  if ( !v41 && (v39 == 537 || !(unsigned int)ProcessSuspendedSendMessage(a6, a1, v39, v134, v9))
    || *(_DWORD *)(a6 + 576) > 0x2710u )
  {
    return 0LL;
  }
LABEL_95:
  UserSessionState = W32GetUserSessionState(v41, v40);
  v45 = Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 69344));
  v46 = v45;
  v153 = v45;
  if ( !v45 )
    return 0LL;
  *(_QWORD *)(v45 + 120) = 0LL;
  Size = 0;
  v47 = 0;
  v48 = v9;
  v154 = v9;
  v49 = (const void *)v140;
  v50 = *(unsigned int *)(v140 + 1604);
  *(_DWORD *)(v45 + 128) = v50;
  if ( a7 && *(_DWORD *)a7 == 33 )
  {
    v51 = a9;
    goto LABEL_181;
  }
  if ( v39 > 0x143 )
  {
    if ( v39 > 0x283 )
    {
      switch ( v39 )
      {
        case 0x30Cu:
LABEL_147:
          *(_OWORD *)Src = *(_OWORD *)v9;
          v49 = (const void *)((unsigned __int64)Src[0] >> 32);
          v143 = (SHIDWORD(Src[0]) >= 0) + 1;
          v9 = Src;
          v136 = Src;
          v50 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
          if ( v50 < (unsigned __int64)MmSystemRangeStart || !v137 )
            v47 = HIDWORD(Src[0]) & 0x7FFFFFFF;
          break;
        case 0x341u:
          v47 = 104;
          Size = 104;
          break;
        case 0x342u:
          v47 = 80;
LABEL_151:
          v58 = (_OWORD *)Win32AllocPoolWithQuotaZInit(v47, 1668510549LL);
          *(_QWORD *)(v46 + 120) = v58;
          if ( v58 )
          {
            v145 = v9;
            if ( a2 > 0x143 )
            {
              if ( a2 > 0x30C )
              {
LABEL_170:
                memmove(v58, v48, v47);
LABEL_171:
                v9 = *(void ***)(v46 + 120);
                v136 = v9;
              }
              else if ( a2 == 780 )
              {
LABEL_158:
                Size = v47;
                v145 = Src[1];
                Src[1] = *(void **)(v46 + 120);
              }
              else
              {
                switch ( a2 )
                {
                  case 0x145u:
                  case 0x14Au:
                  case 0x14Cu:
                  case 0x14Du:
                  case 0x158u:
                  case 0x180u:
                  case 0x181u:
                  case 0x18Cu:
                  case 0x18Du:
                  case 0x18Fu:
                  case 0x196u:
                  case 0x1A2u:
                    goto LABEL_168;
                  case 0x148u:
                  case 0x189u:
                    goto LABEL_158;
                  case 0x191u:
                    Size = v47;
                    goto LABEL_170;
                  case 0x220u:
                    v61 = v151;
                    v49 = v151[10];
                    if ( v49 )
                    {
                      v62 = *((unsigned int *)v151 + 19);
                      LODWORD(v62) = v62 & 0x7FFFFFFF;
                      memmove(v58, v49, v62);
                      *v61 = *(void **)(v46 + 120);
                    }
                    if ( *((_DWORD *)v61 + 14) )
                    {
                      v63 = *((unsigned int *)v61 + 19);
                      LODWORD(v63) = v63 & 0x7FFFFFFF;
                      v64 = (void **)(*(_QWORD *)(v46 + 120) + v63);
                      v154 = v64;
                      v65 = *((unsigned int *)v61 + 15);
                      LODWORD(v65) = v65 & 0x7FFFFFFF;
                      memmove(v64, v61[8], v65);
                      v61[1] = v64;
                    }
                    break;
                  default:
                    goto LABEL_170;
                }
              }
            }
            else
            {
              if ( a2 != 323 )
              {
                switch ( a2 )
                {
                  case 0xCu:
                  case 0x1Au:
                  case 0x1Bu:
                  case 0xC2u:
                    break;
                  case 0xDu:
                    goto LABEL_158;
                  case 0x4Au:
                    v9 = (void **)v58;
                    v136 = (void **)v58;
                    v59 = v150;
                    *v58 = *(_OWORD *)v150;
                    *((_QWORD *)v58 + 2) = v59[2];
                    if ( v59[2] )
                    {
                      *((_QWORD *)v58 + 2) = (char *)v58 + 24;
                      memmove((char *)v58 + 24, v59[2], *((unsigned int *)v59 + 2));
                    }
                    goto LABEL_172;
                  case 0x83u:
                    if ( !v134 )
                      goto LABEL_170;
                    *v58 = *(_OWORD *)v48;
                    v58[1] = *((_OWORD *)v48 + 1);
                    v58[2] = *((_OWORD *)v48 + 2);
                    *((_QWORD *)v58 + 6) = v48[6];
                    v50 = *(_QWORD *)(v46 + 120) + 56LL;
                    *((_QWORD *)v58 + 6) = v50;
                    v60 = v48[6];
                    *(_OWORD *)v50 = *v60;
                    *(_OWORD *)(v50 + 16) = v60[1];
                    *(_QWORD *)(v50 + 32) = *((_QWORD *)v60 + 4);
                    goto LABEL_171;
                  case 0xC4u:
                    v50 = *(unsigned __int16 *)Src[1];
                    *(_WORD *)v58 = v50;
                    goto LABEL_158;
                  default:
                    goto LABEL_170;
                }
              }
LABEL_168:
              v9 = (void **)v58;
              v136 = (void **)v58;
              v66 = *((_DWORD *)v58 + 1) & 0x7FFFFFFF | HIDWORD(Src[0]) & 0x80000000;
              *((_DWORD *)v58 + 1) = v66;
              *(_DWORD *)v58 = Src[0];
              *((_QWORD *)v58 + 1) = v58 + 1;
              v67 = v66 ^ (v66 ^ (v47 - 16)) & 0x7FFFFFFF;
              *((_DWORD *)v58 + 1) = v67;
              LODWORD(v67) = v67 & 0x7FFFFFFF;
              memmove(v58 + 1, Src[1], v67);
            }
          }
LABEL_172:
          v39 = a2;
          goto LABEL_173;
        case 0x344u:
          v47 = 1204;
          Size = 1204;
          break;
        case 0x346u:
          v47 = 96;
          break;
      }
    }
    else
    {
      if ( v39 != 643 )
      {
        switch ( v39 )
        {
          case 0x145u:
          case 0x18Du:
          case 0x196u:
            goto LABEL_120;
          case 0x148u:
          case 0x189u:
            goto LABEL_147;
          case 0x14Au:
          case 0x14Cu:
          case 0x14Du:
          case 0x158u:
          case 0x180u:
          case 0x181u:
          case 0x18Cu:
          case 0x18Fu:
          case 0x1A2u:
            goto LABEL_119;
          case 0x191u:
          case 0x192u:
LABEL_135:
            v47 = 4 * v134;
            goto LABEL_150;
          case 0x218u:
            if ( v9 && (v134 & 0x8000) != 0 && (v9 < MmSystemRangeStart || !v137) )
            {
              v47 = *((_DWORD *)v9 + 4) + 20;
              if ( *((_DWORD *)v9 + 4) >= 0xFFFFFFEC )
                goto LABEL_123;
            }
            goto LABEL_150;
          case 0x219u:
            if ( v9 && (v134 & 0x8000) != 0 && (v9 < MmSystemRangeStart || !v137) )
LABEL_128:
              v47 = *(_DWORD *)v9;
            goto LABEL_150;
          case 0x220u:
            v151 = v9;
            v47 = (*((_DWORD *)v9 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v9 + 19) & 0x7FFFFFFF);
            goto LABEL_150;
          default:
            goto LABEL_150;
        }
      }
      if ( v134 == 24 )
        v47 = (*(_DWORD *)v9 << 9) + 4;
    }
  }
  else if ( v39 == 323 )
  {
LABEL_119:
    if ( *(_DWORD *)(v140 + 1604) != 1 )
    {
LABEL_120:
      *(_OWORD *)Src = *(_OWORD *)v9;
      v50 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
      if ( v50 < (unsigned __int64)MmSystemRangeStart || !v137 )
      {
        v47 = LODWORD(Src[0]) + 18;
        if ( (unsigned int)(LODWORD(Src[0]) + 18) < LODWORD(Src[0]) )
        {
LABEL_123:
          v57 = W32GetUserSessionState(v50, v140);
          Win32FreeToPagedLookasideList(*(_QWORD *)(v57 + 69344), v46);
          return 8LL;
        }
      }
    }
  }
  else
  {
    switch ( v39 )
    {
      case 1u:
      case 0x81u:
        UserSetLastError(5);
        v56 = W32GetUserSessionState(v55, v54);
        Win32FreeToPagedLookasideList(*(_QWORD *)(v56 + 69344), v46);
        return 0LL;
      case 0xCu:
      case 0x1Au:
      case 0xC2u:
        if ( !v9 )
          break;
        goto LABEL_120;
      case 0xDu:
      case 0xC4u:
        goto LABEL_147;
      case 0x1Bu:
        goto LABEL_120;
      case 0x38u:
        v47 = *(unsigned __int16 *)v9;
        break;
      case 0x46u:
      case 0x47u:
        v47 = 40;
        Size = 40;
        break;
      case 0x49u:
        v47 = v134;
        break;
      case 0x4Au:
        v150 = v9;
        if ( !v9[2] )
        {
          v47 = 24;
          goto LABEL_151;
        }
        v47 = *((_DWORD *)v9 + 2) + 24;
        if ( v47 < 0x18 )
        {
          v52 = W32GetUserSessionState(v50, v140);
          Win32FreeToPagedLookasideList(*(_QWORD *)(v52 + 69344), v46);
          return 0LL;
        }
        break;
      case 0x53u:
        goto LABEL_128;
      case 0x83u:
        v47 = 96;
        if ( !v134 )
          v47 = 16;
        Size = v47;
        break;
      case 0xCBu:
        goto LABEL_135;
      default:
        break;
    }
  }
LABEL_150:
  if ( v47 )
    goto LABEL_151;
LABEL_173:
  if ( v47 && !*(_QWORD *)(v46 + 120) )
  {
    v68 = W32GetUserSessionState(v50, v49);
    Win32FreeToPagedLookasideList(*(_QWORD *)(v68 + 69344), v46);
    return 0LL;
  }
  v51 = a9;
  if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) && !(unsigned int)IsPointerInputMessage(v39) )
  {
    TransformMessageBetweenCoordinateSpaces(v69, (__int64)a1, 0LL);
    v9 = v136;
  }
LABEL_181:
  *(_QWORD *)(v46 + 112) = 0LL;
  *(_QWORD *)(v46 + 16) = 0LL;
  v157[0] = v46 + 112;
  v157[1] = a1;
  HMAssignmentLock(v157, 0LL);
  *(_DWORD *)(v46 + 104) = v39;
  *(_QWORD *)(v46 + 88) = v134;
  *(_QWORD *)(v46 + 96) = v9;
  *(_DWORD *)(v46 + 84) = 0;
  *(_QWORD *)(v46 + 72) = 0LL;
  if ( v39 == 576 || v39 == 281 )
  {
    v83 = _HMObjectFromHandle(v9);
    v82 = a6;
    if ( v83 )
      HMChangeOwnerThread(v83, a6);
  }
  else if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                            v71,
                            v70,
                            v72,
                            v73)
         && v39 == 255
         && (LOBYTE(v74) = 18, (v76 = HMValidateHandleNoSecure((__int64)v9, v74)) != 0)
         && *(_QWORD *)(v140 + 1144) == v76
         && a1 )
  {
    HidData = AllocateHidData(*(void **)(v76 + 64), (__int64)a1);
    v78 = HidData;
    if ( HidData )
    {
      memmove((void *)(HidData + 56), (const void *)(v76 + 56), *(unsigned int *)(HidData + 60));
      v79 = *(HWND *)a1;
      v80 = *(PETHREAD **)(v78 + 16);
      if ( v80 )
        ThreadId = (unsigned int)PsGetThreadId(*v80);
      else
        ThreadId = 0;
      InputTraceLogging::RawInput::CopyHidData(
        (struct tagHIDDATA *const)v76,
        (struct tagHIDDATA *const)v78,
        ThreadId,
        v79);
    }
    v82 = a6;
    if ( v78 )
    {
      *(_DWORD *)(v78 + 48) &= ~1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a6 + 1152), (PSLIST_ENTRY)(v78 + 32));
      v136 = *(void ***)v78;
      *(_QWORD *)(v46 + 96) = *(_QWORD *)v78;
    }
    v39 = a2;
  }
  else
  {
    v82 = a6;
  }
  v84 = W32GetUserSessionState(v75, v74) + 69312;
  v85 = *(_QWORD *)v84;
  if ( *(_QWORD *)(*(_QWORD *)v84 + 8LL) != v84 )
    goto LABEL_310;
  *(_QWORD *)v46 = v85;
  *(_QWORD *)(v46 + 8) = v84;
  *(_QWORD *)(v85 + 8) = v46;
  *(_QWORD *)v84 = v46;
  v86 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v46 + 80) = v86;
  *(_QWORD *)(v46 + 40) = v82;
  *(_QWORD *)(v46 + 32) = v137;
  *(_DWORD *)(v46 + 132) = W32GetCurrentThreadDpiAwarenessContext(v86);
  *(_QWORD *)(v46 + 64) = 0LL;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    v87 = *(_DWORD *)a7 & 0x100;
    v88 = *(_DWORD *)(v46 + 84);
    v89 = 1024;
    if ( !v87 )
      v89 = 2048;
    *(_DWORD *)(v46 + 84) = v88 | v89;
    *(_QWORD *)(v46 + 48) = *(_QWORD *)(a7 + 8);
    *(_QWORD *)(v46 + 56) = *(_QWORD *)(a7 + 16);
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      v90 = 1536;
      if ( !v87 )
        v90 = 2560;
      *(_DWORD *)(v46 + 84) = v88 | v90;
      *(_QWORD *)(v46 + 72) = *(_QWORD *)(a7 + 24);
    }
    else
    {
      v91 = 1280;
      if ( !v87 )
        v91 = 2304;
      *(_DWORD *)(v46 + 84) = v88 | v91;
      *(_QWORD *)(v46 + 64) = v140;
    }
  }
  if ( v51 )
    *(_DWORD *)(v46 + 84) |= 0x10000u;
  v92 = (_QWORD *)(v46 + 16);
  v93 = *(_QWORD **)(v82 + 568);
  if ( *v93 != v82 + 560 )
    goto LABEL_310;
  *v92 = v82 + 560;
  *(_QWORD *)(v46 + 24) = v93;
  *v93 = v92;
  *(_QWORD *)(v82 + 568) = v92;
  ++*(_DWORD *)(v82 + 576);
  if ( v137 )
  {
    v152 = *(_QWORD *)(v137 + 544);
    *(_QWORD *)(v137 + 544) = v46;
  }
  else
  {
    *(_DWORD *)(v46 + 84) |= 8u;
  }
  if ( (*(_DWORD *)(v46 + 84) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(v39) || IsPointerParentNotify(v95, a3)) )
  {
    v96 = W32GetUserSessionState(v95, v94);
    CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v96 + 3264), v136, 6LL, v46);
  }
  EtwTraceBeginSendMessage(v46, v137, a7);
  if ( !v137 )
  {
    SetWakeBit(v82, 64LL);
    EtwTraceEndSendMessage(v46);
    return 1LL;
  }
  v97 = 0;
  v98 = 0;
  v141 = 0;
  v99 = 512;
  v135 = 0;
  SetWakeBit(a6, 64LL);
  if ( a7 )
  {
    v98 = *(_DWORD *)(a7 + 36);
    v141 = v98;
    v99 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
  }
  CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v158);
  if ( *(_QWORD *)(v137 + 472) == *(_QWORD *)(a6 + 472)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v137 + 528), 0, 0) & 0x10000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v137 + 528), 0x10000u);
    v135 = 1;
  }
  v100 = 0LL;
  v101 = a2;
  if ( a2 == 788 )
  {
    if ( v136 )
    {
      v100 = (unsigned int *)*v136;
      if ( ((_DWORD)v136[3] & 1) != 0 )
      {
        *(_DWORD *)(v46 + 84) |= 0x60000u;
        *(_QWORD *)(v46 + 120) = *(_QWORD *)v100;
      }
    }
  }
  if ( (*(_DWORD *)(v46 + 84) & 1) == 0 )
  {
    do
    {
      if ( v97 )
        break;
      Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v137 + 488) + 4LL), 0xFFFFFDFF);
      if ( v100 && (v100[12] == 13 || v100[12] == 14) && *(_DWORD *)(v102 + 672) <= 0x501u && *(_DWORD *)(v102 + 688) )
      {
        v104 = (__int64 *)PsGetCurrentThreadWin32Thread(v100[12] - 13, v102, v103);
        if ( v104 )
          v105 = *v104;
        else
          v105 = 0LL;
        BugCheckParameter3 = *(_QWORD *)(v105 + 456);
        *(_QWORD *)(v105 + 456) = &BugCheckParameter3;
        v147 = v100;
        HMLockObject(v100);
        LOBYTE(v97) = 1;
      }
      v106 = xxxSleepThread2(v99, v98, 0, 0, 0LL);
      v110 = v106;
      v111 = v106 == 0;
      if ( v97 )
      {
        if ( v106 )
        {
          v100[16] &= ~0x4000u;
        }
        else
        {
          v108 = v100[16];
          LODWORD(v108) = v108 | 0x4000;
          v100[16] = v108;
          if ( (v108 & 0x10) == 0 && ++*((_BYTE *)v100 + 97) > 0xAu )
          {
            v108 = (unsigned int)v108 | 0x10;
            v100[16] = v108;
          }
        }
        v112 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v108, v107, v109);
        if ( v112 )
          v113 = *v112;
        else
          v113 = 0LL;
        Win32HM_UnlockFromThread<1>(v113, &BugCheckParameter3);
        v147 = 0LL;
        BugCheckParameter3 = -1LL;
      }
      v97 = v111;
      if ( !v110 && a7 )
      {
        v114 = *(unsigned int *)(a7 + 32);
        if ( (v114 & 0x10) != 0 || (*(_DWORD *)(v46 + 84) & 0x20) != 0 )
        {
          v97 = v111;
          if ( (*(_DWORD *)(v46 + 84) & 0x10) != 0 )
          {
            v141 = 0;
            v97 = 0;
          }
        }
        if ( (v114 & 8) != 0 )
        {
          v115 = W32GetUserSessionState(v114, v107);
          if ( !IsThreadHungTimeCheck((const struct tagTHREADINFO *)a6, *(_DWORD *)(v115 + 69368)) )
            v97 = 0;
        }
        if ( !v97 )
          EtwTraceConvertTimeOutToBlocking();
      }
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v107);
      v98 = v141;
    }
    while ( (*(_DWORD *)(v46 + 84) & 1) == 0 );
    v101 = a2;
  }
  CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v158);
  v116 = v137;
  if ( v135 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v137 + 528), 0xFFFEFFFF);
    MergeDeferredMessagesOfThreadOnQueue(v137);
  }
  SetWakeBit(v137, 512LL);
  if ( v97 )
    goto LABEL_290;
  if ( !Size )
  {
    if ( v101 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
    goto LABEL_290;
  }
  v117 = v145;
  v138 = v145;
  if ( v101 != 131 )
  {
    v118 = *(const void **)(v46 + 120);
    if ( v143 )
    {
      if ( v143 == 1 )
        strncpycch(v145, v118);
      else
        wcsncpycch(v145, v118, Size >> 1);
    }
    else
    {
      memmove(v145, v118, Size);
    }
    v119 = a6;
    goto LABEL_291;
  }
  if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    TransformMessageBetweenCoordinateSpaces(0x83u, 0LL, (__int64)a1);
    v117 = v138;
  }
  v120 = *(__int128 **)(v46 + 120);
  v121 = *v120;
  if ( !a3 )
  {
    *(_OWORD *)v117 = v121;
LABEL_290:
    v119 = a6;
    goto LABEL_291;
  }
  v122 = v117[6];
  *(_OWORD *)v117 = v121;
  *((_OWORD *)v117 + 1) = v120[1];
  *((_OWORD *)v117 + 2) = v120[2];
  v117[6] = v122;
  v123 = *((_QWORD *)v120 + 6);
  v119 = a6;
  if ( v123 )
  {
    *(_OWORD *)v122 = *(_OWORD *)v123;
    *(_OWORD *)(v122 + 16) = *(_OWORD *)(v123 + 16);
    *(_QWORD *)(v122 + 32) = *(_QWORD *)(v123 + 32);
  }
LABEL_291:
  EtwTraceEndSendMessage(v46);
  *(_QWORD *)(v116 + 544) = v152;
  if ( a7 )
  {
    **(_QWORD **)(a7 + 40) = *(_QWORD *)(v46 + 72);
    if ( (*(_DWORD *)(a7 + 32) & 0x20) != 0 && (*(_DWORD *)(v46 + 84) & 0x8000) != 0 )
    {
      v127 = 0LL;
      UserSetLastError(1400);
    }
    else
    {
      v127 = !v97;
    }
  }
  else
  {
    v127 = *(_QWORD *)(v46 + 72);
  }
  if ( a7 || v97 )
  {
    v128 = *(_DWORD *)(v46 + 84);
    if ( (v128 & 1) == 0 )
    {
      v129 = v128 | 1;
      *(_DWORD *)(v46 + 84) = v129;
      if ( (v129 & 0x4000) != 0 )
      {
        *(_DWORD *)(v46 + 84) = v129 | 8;
        goto LABEL_305;
      }
      --*(_DWORD *)(v119 + 576);
      v124 = *(_QWORD *)(v46 + 16);
      v130 = *(_QWORD **)(v46 + 24);
      if ( *(_QWORD *)(v124 + 8) == v46 + 16 && *v130 == v46 + 16 )
      {
        *v130 = v124;
        *(_QWORD *)(v124 + 8) = v130;
        *(_QWORD *)(v46 + 16) = 0LL;
        *(_DWORD *)(v46 + 84) |= 0x10u;
        goto LABEL_305;
      }
LABEL_310:
      __fastfail(3u);
    }
  }
LABEL_305:
  v131 = *(_DWORD *)(v46 + 84) & 0xFFFDFFFF;
  *(_DWORD *)(v46 + 84) = v131;
  if ( (v131 & 0x4010) != 0x10 )
  {
    v131 |= 8u;
    *(_DWORD *)(v46 + 84) = v131;
  }
  if ( (v131 & 0x8008) != 8 )
    UnlinkSendListSms(v46, v124, v125, v126);
  return v127;
}
