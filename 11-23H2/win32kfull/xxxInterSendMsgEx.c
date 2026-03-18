/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0033720
 * Callers:
 *     NtUserReplyMessage @ 0x1C000C2E0 (NtUserReplyMessage.c)
 *     xxxReceiverDied @ 0x1C00275E0 (xxxReceiverDied.c)
 *     xxxSendMessageCallback @ 0x1C00333BC (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x1C00F2B6C (ClearSendMessages.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011FE30 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ProcessSuspendedSendMessage @ 0x1C0016428 (ProcessSuspendedSendMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C0034F48 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C003AABC (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     wcsncpycch @ 0x1C00E0388 (wcsncpycch.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C011FD20 (TransformMessageBetweenCoordinateSpaces.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C01266D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013BF74 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C004 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     strncpycch @ 0x1C01571F8 (strncpycch.c)
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C02042E0 (_FreeGestureInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInterSendMsgEx(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        void **a4,
        int a5,
        struct tagTHREADINFO *a6,
        __int64 a7,
        int a8,
        int a9)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  int v18; // r11d
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // ebx
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // r13
  void **v30; // rsi
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 CurrentProcess; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  void **v37; // r10
  unsigned int v38; // edi
  void **v39; // r15
  _OWORD *v41; // r9
  void **v42; // rdx
  __int64 v43; // rcx
  _OWORD *v44; // rax
  void **v45; // r15
  const void *v46; // rdx
  size_t v47; // r8
  void **v48; // r15
  __int64 v49; // rbx
  void **v50; // rbx
  size_t v51; // r8
  int v52; // edx
  size_t v53; // r8
  int *v56; // r15
  __int64 v57; // rax
  struct tagTHREADINFO *v58; // r13
  int v59; // ecx
  int v60; // ecx
  struct tagTHREADINFO **v61; // rcx
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  int v64; // eax
  bool v65; // zf
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  int v71; // edi
  unsigned int v72; // r13d
  struct tagTHREADINFO *v73; // rdx
  size_t v74; // rcx
  int v75; // eax
  _DWORD *v76; // rbx
  char v77; // si
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rcx
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  size_t v84; // r13
  _QWORD *v85; // rbx
  void *v86; // rdx
  int v87; // ebx
  _OWORD *v88; // rax
  __int128 v89; // xmm0
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rsi
  int v93; // eax
  _QWORD *v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  int v97; // ecx
  unsigned int *v98; // r13
  __int64 *v99; // rdi
  _WORD *v100; // rcx
  int v101; // eax
  int v102; // eax
  int v103; // eax
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // rax
  unsigned int Size; // [rsp+34h] [rbp-174h]
  size_t Size_4; // [rsp+38h] [rbp-170h]
  __int64 v110; // [rsp+40h] [rbp-168h]
  void **v111; // [rsp+48h] [rbp-160h]
  unsigned int v112; // [rsp+50h] [rbp-158h]
  int v113; // [rsp+58h] [rbp-150h]
  int v114; // [rsp+60h] [rbp-148h]
  void *Src[2]; // [rsp+68h] [rbp-140h] BYREF
  __int64 v116; // [rsp+78h] [rbp-130h] BYREF
  void **v117; // [rsp+80h] [rbp-128h]
  void *v118; // [rsp+88h] [rbp-120h]
  _QWORD *v119; // [rsp+90h] [rbp-118h]
  __int64 *v120; // [rsp+98h] [rbp-110h]
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp-108h] BYREF
  void **v122; // [rsp+A8h] [rbp-100h]
  _QWORD *v123; // [rsp+B0h] [rbp-F8h]
  __int64 v124; // [rsp+B8h] [rbp-F0h]
  _QWORD *v125; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 HighLimit[3]; // [rsp+C8h] [rbp-E0h] BYREF
  _DWORD *v127; // [rsp+E0h] [rbp-C8h]
  _QWORD **v128; // [rsp+E8h] [rbp-C0h]
  unsigned int *v129; // [rsp+F0h] [rbp-B8h]
  _WORD *v130; // [rsp+F8h] [rbp-B0h]
  _QWORD **v131; // [rsp+100h] [rbp-A8h]
  __int64 v132; // [rsp+108h] [rbp-A0h]
  void **v133; // [rsp+110h] [rbp-98h]
  _QWORD v134[4]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v135[16]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v136; // [rsp+150h] [rbp-58h] BYREF
  __int64 v137; // [rsp+160h] [rbp-48h]

  v124 = 0LL;
  v122 = 0LL;
  v117 = 0LL;
  *(_OWORD *)Src = 0LL;
  v118 = 0LL;
  v114 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v12 = 0LL;
  v13 = gptiCurrent;
  if ( !a5 )
    v13 = 0LL;
  Size_4 = v13;
  HighLimit[2] = v13;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v13 && (*(_DWORD *)(v13 + 488) & 1) != 0 )
    return 0LL;
  HighLimit[0] = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
  {
    v18 = 1;
    goto LABEL_34;
  }
  v16 = *(_QWORD *)(a1[2] + 424LL);
  if ( (_QWORD *)v16 == v12 )
  {
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
  if ( a2 > 0xD0 )
  {
    if ( a2 == 272 )
      goto LABEL_30;
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
    {
LABEL_23:
      v17 = 0;
      v18 = 1;
      goto LABEL_31;
    }
  }
  else if ( a2 != 208 )
  {
    switch ( a2 )
    {
      case 0xCu:
      case 0xBCu:
        goto LABEL_24;
      case 0xDu:
      case 0xC4u:
      case 0xCCu:
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a1[17] + 8LL) + 2LL);
        if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v14 || (*(_BYTE *)(a1[5] + 28LL) & 0x20) == 0 )
          goto LABEL_29;
        UserSetLastError(5LL);
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
        goto LABEL_29;
      case 0x4Eu:
        goto LABEL_30;
      default:
        goto LABEL_23;
    }
    goto LABEL_30;
  }
LABEL_24:
  if ( (unsigned __int8)Enforced() && *(_QWORD *)v16 != gpepCSRSS )
  {
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v16 + 780) == *((_DWORD *)v12 + 195) && *(_DWORD *)(v16 + 784) == *((_DWORD *)v12 + 196) )
  {
LABEL_29:
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
LABEL_30:
  v18 = 1;
  v17 = 1;
LABEL_31:
  if ( v17 )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
LABEL_34:
  if ( a8 )
  {
LABEL_85:
    v29 = a3;
    v30 = a4;
    goto LABEL_86;
  }
  v19 = 0LL;
  if ( a1 )
  {
    v19 = *(_QWORD **)(a1[2] + 424LL);
  }
  else if ( a6 )
  {
    v19 = (_QWORD *)*((_QWORD *)a6 + 53);
  }
  if ( v19 == v12 )
  {
    v13 = Size_4;
    goto LABEL_85;
  }
  if ( a2 == 717 )
    return 0LL;
  v20 = v19[109];
  if ( !v20
    || (v15 = (unsigned __int16)a2, (v14 = *(_QWORD *)(v20 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13))) == 0)
    || (v21 = *(_QWORD *)(v14 + 8LL * (((unsigned __int16)a2 >> 9) & 0xF))) == 0
    || (v14 = (unsigned int)(1 << (a2 & 7)),
        v15 = ((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F,
        v22 = 1,
        ((unsigned __int8)v14 & *(_BYTE *)(v15 + v21)) == 0) )
  {
    v22 = 0;
  }
  if ( v22 )
    goto LABEL_73;
  if ( a1 )
  {
    v23 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(a1[2] + 424LL) + 880LL);
    if ( v15 )
    {
      v25 = 0LL;
      v14 = *(unsigned int *)v15;
      if ( (_DWORD)v14 )
      {
        v26 = (_QWORD *)(v15 + 24);
        do
        {
          if ( a1 == (_QWORD *)*v26 )
            break;
          v25 = (unsigned int)(v25 + 1);
          v26 += 2;
        }
        while ( (unsigned int)v25 < (unsigned int)v14 );
      }
      if ( (unsigned int)v25 < (unsigned int)v14 )
      {
        _mm_lfence();
        v23 = *(_QWORD *)(v15 + 16 * (v25 + 1));
        v24 = 1;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
    }
    v27 = 0LL;
    if ( v24 )
      v27 = v23;
    if ( !v27
      || (v15 = (unsigned __int16)a2, (v14 = *(_QWORD *)(v27 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13))) == 0)
      || (v28 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)(unsigned __int16)a2 >> 9) & 0xF))) == 0
      || (v14 = (unsigned int)(1 << (a2 & 7)),
          v15 = ((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F,
          v22 = 1,
          ((unsigned __int8)v14 & *(_BYTE *)(v15 + v28)) == 0) )
    {
      v22 = 0;
    }
  }
  if ( v22 || (v22 = IsMessageAlwaysAllowedAcrossIL(a2)) != 0 )
  {
LABEL_73:
    v29 = a3;
  }
  else
  {
    v29 = a3;
    if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      goto LABEL_80;
    if ( *v19 == gpepCSRSS )
      v116 = 0x2000LL;
    else
      v116 = v19[112];
    v22 = (unsigned __int8)CheckAccess(v12 + 112, &v116);
    v18 = 1;
  }
  if ( v22 )
  {
LABEL_81:
    v30 = a4;
    goto LABEL_82;
  }
  if ( a1 )
  {
    if ( a2 == 793 )
    {
      v14 = a1[2];
      if ( *(_QWORD **)(v14 + 1432) == a1 && *(_QWORD *)(v14 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
      {
LABEL_80:
        v22 = v18;
        goto LABEL_81;
      }
    }
  }
  v30 = a4;
  EtwTraceUIPIMsgError(v12, v19, a2, v29, a4);
  UserSetLastError(5LL);
LABEL_82:
  if ( !v22 )
    return 0LL;
  v13 = Size_4;
LABEL_86:
  v31 = a2;
  if ( a2 == 576 )
  {
    LOBYTE(v14) = 20;
  }
  else
  {
    if ( a2 != 281 )
      goto LABEL_91;
    LOBYTE(v14) = 21;
  }
  if ( !HMValidateHandle(v30, v14) )
    return 0LL;
LABEL_91:
  if ( (*((_DWORD *)a6 + 318) & 0x20) == 0 )
    goto LABEL_104;
  v32 = a7;
  if ( a7 )
  {
    if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
      goto LABEL_99;
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
      return 0LL;
  }
  if ( v13 )
  {
    v33 = **((_QWORD **)a6 + 53);
    CurrentProcess = PsGetCurrentProcess(a7, v14, v15);
    if ( !PsGetProcessCommonJob(CurrentProcess, v33) )
      return 0LL;
    v31 = a2;
    v32 = a7;
LABEL_99:
    if ( v13 )
      goto LABEL_104;
  }
  if ( !v32
    && (v31 == 537 || !(unsigned int)ProcessSuspendedSendMessage((__int64)a6, (__int64)a1, v31, v29, (__int64)v30))
    || *((_DWORD *)a6 + 134) > 0x2710u )
  {
    return 0LL;
  }
LABEL_104:
  v35 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v36 = v35;
  v110 = v35;
  if ( !v35 )
    return 0LL;
  v37 = (void **)(v35 + 120);
  v111 = (void **)(v35 + 120);
  *(_QWORD *)(v35 + 120) = 0LL;
  Size = 0;
  v38 = 0;
  v39 = v30;
  v133 = v30;
  *(_DWORD *)(v35 + 128) = *(_DWORD *)(gptiCurrent + 1452LL);
  if ( !a7 || *(_DWORD *)a7 != 33 )
  {
    if ( v31 > 0x143 )
    {
      if ( v31 > 0x283 )
      {
        switch ( v31 )
        {
          case 0x30Cu:
LABEL_153:
            *(_OWORD *)Src = *(_OWORD *)v30;
            v114 = (SHIDWORD(Src[0]) >= 0) + 1;
            v30 = Src;
            a4 = Src;
            if ( _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !Size_4 )
              v38 = HIDWORD(Src[0]) & 0x7FFFFFFF;
            break;
          case 0x341u:
            v38 = 104;
            Size = 104;
            break;
          case 0x342u:
            v38 = 80;
            goto LABEL_157;
          case 0x344u:
            v38 = 1204;
            Size = 1204;
            break;
        }
      }
      else
      {
        if ( v31 != 643 )
        {
          switch ( v31 )
          {
            case 0x145u:
            case 0x18Du:
            case 0x196u:
              goto LABEL_128;
            case 0x148u:
            case 0x189u:
              goto LABEL_153;
            case 0x14Au:
            case 0x14Cu:
            case 0x14Du:
            case 0x158u:
            case 0x180u:
            case 0x181u:
            case 0x18Cu:
            case 0x18Fu:
            case 0x1A2u:
              goto LABEL_127;
            case 0x191u:
            case 0x192u:
LABEL_143:
              v38 = 4 * v29;
              goto LABEL_156;
            case 0x218u:
              if ( v30 && (v29 & 0x8000) != 0 && (v30 < MmSystemRangeStart || !Size_4) )
              {
                v38 = *((_DWORD *)v30 + 4) + 20;
                if ( *((_DWORD *)v30 + 4) >= 0xFFFFFFEC )
                  goto LABEL_131;
              }
              goto LABEL_156;
            case 0x219u:
              if ( v30 && (v29 & 0x8000) != 0 && (v30 < MmSystemRangeStart || !Size_4) )
LABEL_136:
                v38 = *(_DWORD *)v30;
              goto LABEL_156;
            case 0x220u:
              v117 = v30;
              v38 = (*((_DWORD *)v30 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v30 + 19) & 0x7FFFFFFF);
              goto LABEL_156;
            default:
              goto LABEL_156;
          }
        }
        if ( v29 == 24 )
          v38 = (*(_DWORD *)v30 << 9) + 4;
      }
    }
    else if ( v31 == 323 )
    {
LABEL_127:
      if ( *(_DWORD *)(gptiCurrent + 1452LL) != 1 )
      {
LABEL_128:
        *(_OWORD *)Src = *(_OWORD *)v30;
        if ( _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !Size_4 )
        {
          v38 = LODWORD(Src[0]) + 18;
          if ( (unsigned int)(LODWORD(Src[0]) + 18) < LODWORD(Src[0]) )
          {
LABEL_131:
            Win32FreeToPagedLookasideList(SMSLookaside, v35);
            return 8LL;
          }
        }
      }
    }
    else
    {
      switch ( v31 )
      {
        case 1u:
        case 0x81u:
          UserSetLastError(5LL);
          Win32FreeToPagedLookasideList(SMSLookaside, v110);
          return 0LL;
        case 0xCu:
        case 0x1Au:
        case 0xC2u:
          if ( !v30 )
            break;
          goto LABEL_128;
        case 0xDu:
        case 0xC4u:
          goto LABEL_153;
        case 0x1Bu:
          goto LABEL_128;
        case 0x38u:
          v38 = *(unsigned __int16 *)v30;
          break;
        case 0x46u:
        case 0x47u:
          v38 = 40;
          Size = 40;
          break;
        case 0x49u:
          v38 = v29;
          break;
        case 0x4Au:
          v122 = v30;
          if ( !v30[2] )
          {
            v38 = 24;
            goto LABEL_157;
          }
          v38 = *((_DWORD *)v30 + 2) + 24;
          if ( v38 < 0x18 )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v35);
            return 0LL;
          }
          break;
        case 0x53u:
          goto LABEL_136;
        case 0x83u:
          v38 = 96;
          if ( !v29 )
            v38 = 16;
          Size = v38;
          break;
        case 0xCBu:
          goto LABEL_143;
        default:
          break;
      }
    }
LABEL_156:
    if ( !v38 )
    {
LABEL_179:
      if ( v38 && !*v37 )
      {
        Win32FreeToPagedLookasideList(SMSLookaside, v36);
        return 0LL;
      }
      if ( a9
        && a1
        && (unsigned int)IsWindowDesktopComposed(a1)
        && v31 - 577 > 3
        && (v31 < 0x245 || v31 > 0x257 || v31 == 589) )
      {
        TransformMessageBetweenCoordinateSpaces(v31, (__int64)a1, 0LL);
        v30 = a4;
      }
      goto LABEL_196;
    }
LABEL_157:
    v41 = (_OWORD *)Win32AllocPoolWithQuotaZInit(v38, 1668510549LL);
    v37 = v111;
    *v111 = v41;
    if ( v41 )
    {
      v118 = v30;
      if ( a2 > 0x143 )
      {
        if ( a2 > 0x30C )
        {
LABEL_176:
          memmove(v41, v39, v38);
          v37 = v111;
LABEL_177:
          v30 = (void **)*v37;
          a4 = (void **)*v37;
        }
        else if ( a2 == 780 )
        {
LABEL_164:
          Size = v38;
          v118 = Src[1];
          Src[1] = *v111;
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
              goto LABEL_174;
            case 0x148u:
            case 0x189u:
              goto LABEL_164;
            case 0x191u:
              Size = v38;
              goto LABEL_176;
            case 0x220u:
              v45 = v117;
              v46 = v117[10];
              if ( v46 )
              {
                v47 = *((unsigned int *)v117 + 19);
                LODWORD(v47) = v47 & 0x7FFFFFFF;
                memmove(v41, v46, v47);
                v37 = v111;
                *v45 = *v111;
              }
              v48 = v117;
              if ( *((_DWORD *)v117 + 14) )
              {
                v49 = *((unsigned int *)v117 + 19);
                LODWORD(v49) = v49 & 0x7FFFFFFF;
                v50 = (void **)((char *)*v37 + v49);
                v133 = v50;
                v51 = *((unsigned int *)v117 + 15);
                LODWORD(v51) = v51 & 0x7FFFFFFF;
                memmove(v50, v117[8], v51);
                v48[1] = v50;
                v37 = v111;
              }
              break;
            default:
              goto LABEL_176;
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
              goto LABEL_164;
            case 0x4Au:
              v30 = (void **)v41;
              a4 = (void **)v41;
              v42 = v122;
              *v41 = *(_OWORD *)v122;
              *((_QWORD *)v41 + 2) = v42[2];
              if ( v42[2] )
              {
                *((_QWORD *)v41 + 2) = (char *)v41 + 24;
                memmove((char *)v41 + 24, v42[2], *((unsigned int *)v42 + 2));
                v37 = v111;
              }
              goto LABEL_178;
            case 0x83u:
              if ( !v29 )
                goto LABEL_176;
              *v41 = *(_OWORD *)v39;
              v41[1] = *((_OWORD *)v39 + 1);
              v41[2] = *((_OWORD *)v39 + 2);
              *((_QWORD *)v41 + 6) = v39[6];
              v43 = (__int64)*v111 + 56;
              *((_QWORD *)v41 + 6) = v43;
              v44 = v39[6];
              *(_OWORD *)v43 = *v44;
              *(_OWORD *)(v43 + 16) = v44[1];
              *(_QWORD *)(v43 + 32) = *((_QWORD *)v44 + 4);
              goto LABEL_177;
            case 0xC4u:
              *(_WORD *)v41 = *(_WORD *)Src[1];
              goto LABEL_164;
            default:
              goto LABEL_176;
          }
        }
LABEL_174:
        v30 = (void **)v41;
        a4 = (void **)v41;
        v52 = HIDWORD(Src[0]) ^ (*((_DWORD *)v41 + 1) ^ HIDWORD(Src[0])) & 0x7FFFFFFF;
        *((_DWORD *)v41 + 1) = v52;
        *(_DWORD *)v41 = Src[0];
        *((_QWORD *)v41 + 1) = v41 + 1;
        v53 = v52 ^ (v52 ^ (v38 - 16)) & 0x7FFFFFFF;
        *((_DWORD *)v41 + 1) = v53;
        LODWORD(v53) = v53 & 0x7FFFFFFF;
        memmove(v41 + 1, Src[1], v53);
        v37 = v111;
      }
    }
LABEL_178:
    v31 = a2;
    v36 = v110;
    goto LABEL_179;
  }
LABEL_196:
  v132 = v110 + 112;
  *(_QWORD *)(v110 + 112) = 0LL;
  v125 = (_QWORD *)(v110 + 16);
  *(_QWORD *)(v110 + 16) = 0LL;
  v134[0] = v110 + 112;
  v134[1] = a1;
  HMAssignmentLock(v134, 0LL);
  v129 = (unsigned int *)(v110 + 104);
  *(_DWORD *)(v110 + 104) = v31;
  v130 = (_WORD *)(v110 + 88);
  *(_QWORD *)(v110 + 88) = v29;
  v120 = (__int64 *)(v110 + 96);
  *(_QWORD *)(v110 + 96) = v30;
  v56 = (int *)(v110 + 84);
  HighLimit[1] = v110 + 84;
  *(_DWORD *)(v110 + 84) = 0;
  v119 = (_QWORD *)(v110 + 72);
  *(_QWORD *)(v110 + 72) = 0LL;
  if ( v31 == 576 || v31 == 281 )
  {
    v57 = _HMObjectFromHandle(v30);
    v58 = a6;
    if ( v57 )
      HMChangeOwnerThread(v57, a6);
  }
  else
  {
    v58 = a6;
  }
  if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
    goto LABEL_346;
  *(_QWORD *)v110 = gsmsList;
  v131 = (_QWORD **)(v110 + 8);
  *(_QWORD *)(v110 + 8) = gsmsList;
  *(_QWORD *)(gsmsList + 8LL) = v110;
  gsmsList = v110;
  *(_DWORD *)(v110 + 80) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(v110 + 40) = v58;
  *(_QWORD *)(v110 + 32) = Size_4;
  *(_DWORD *)(v110 + 132) = W32GetCurrentThreadDpiAwarenessContext();
  *(_QWORD *)(v110 + 64) = 0LL;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    v59 = 1024;
    if ( (*(_DWORD *)a7 & 0x100) == 0 )
      v59 = 2048;
    v60 = *v56 | v59;
    *v56 = v60;
    *(_QWORD *)(v110 + 48) = *(_QWORD *)(a7 + 8);
    *(_QWORD *)(v110 + 56) = *(_QWORD *)(a7 + 16);
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      *v56 = v60 | 0x200;
      *v119 = *(_QWORD *)(a7 + 24);
    }
    else
    {
      *v56 = v60 | 0x100;
      *(_QWORD *)(v110 + 64) = gptiCurrent;
    }
  }
  if ( a9 )
    *v56 |= 0x10000u;
  v61 = (struct tagTHREADINFO **)*((_QWORD *)v58 + 66);
  if ( *v61 != (struct tagTHREADINFO *)((char *)v58 + 520) )
    goto LABEL_346;
  v62 = v125;
  *v125 = (char *)v58 + 520;
  v128 = (_QWORD **)(v62 + 1);
  v62[1] = v61;
  *v61 = (struct tagTHREADINFO *)v62;
  *((_QWORD *)v58 + 66) = v62;
  v127 = (_DWORD *)((char *)v58 + 536);
  v63 = *((_DWORD *)v58 + 134) + 1;
  *((_DWORD *)v58 + 134) = v63;
  if ( v63 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v63;
  if ( Size_4 )
  {
    v124 = *(_QWORD *)(Size_4 + 504);
    *(_QWORD *)(Size_4 + 504) = v110;
  }
  else
  {
    *v56 |= 8u;
  }
  if ( (*v56 & 0x200) == 0 )
  {
    if ( v31 - 577 <= 3 )
      goto LABEL_224;
    if ( v31 < 0x245 || v31 > 0x257 || (v64 = 1, v31 == 589) )
      v64 = 0;
    v65 = v64 == 0;
    v66 = 0;
    if ( !v65 )
LABEL_224:
      v66 = 1;
    if ( !v66 || (v67 = 1, v31 == 595) )
      v67 = 0;
    if ( v67 )
      goto LABEL_233;
    if ( v31 != 528 || (v68 = 1, (_WORD)a3 != 582) )
      v68 = 0;
    if ( v68 )
    {
LABEL_233:
      v69 = SGDGetUserSessionState(v31 - 577 <= 3);
      CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v69 + 3424), a4, 6LL, v110);
    }
  }
  EtwTraceBeginSendMessage(v110, Size_4, a7);
  v70 = *((_DWORD *)a6 + 122) & 1;
  if ( Size_4 )
  {
    v71 = 0;
    v112 = 0;
    v72 = 512;
    v113 = 0;
    if ( !v70 )
    {
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 4LL), 0x40u);
      if ( (*(_DWORD *)(*((_QWORD *)a6 + 56) + 16LL) & 0x40) != 0 )
        KeSetEvent(*((PRKEVENT *)a6 + 92), 2, 0);
    }
    if ( a7 )
    {
      v112 = *(_DWORD *)(a7 + 36);
      v72 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
    }
    CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
    v73 = a6;
    v74 = Size_4;
    if ( *(_QWORD *)(Size_4 + 432) == *((_QWORD *)a6 + 54) )
    {
      v75 = *(_DWORD *)(Size_4 + 488);
      if ( (v75 & 0x10000) == 0 )
      {
        *(_DWORD *)(Size_4 + 488) = v75 | 0x10000;
        v113 = 1;
      }
    }
    if ( (*v56 & 1) == 0 )
    {
      do
      {
        if ( v71 )
          break;
        v76 = 0LL;
        v136 = 0LL;
        v137 = 0LL;
        v77 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v74 + 448) + 4LL), 0xFFFFFDFF);
        if ( a2 == 788 )
        {
          if ( a4 )
          {
            if ( *((_DWORD *)v73 + 158) <= 0x501u )
            {
              if ( *((_DWORD *)v73 + 162) )
              {
                v76 = *a4;
                if ( *((_DWORD *)*a4 + 12) == 13 || *((_DWORD *)*a4 + 12) == 14 )
                {
                  ThreadLock(v76, &v136);
                  v77 = 1;
                }
              }
            }
          }
        }
        v71 = xxxRealSleepThread(v72, v112, 0, 0, 0LL) == 0;
        if ( v77 )
        {
          v80 = v76[22] & 0xFFFFFF7F | (v71 << 7);
          v76[22] = v80;
          if ( v71 )
          {
            v81 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(v80 + 1)) & 0x7F;
            v76[22] = v81;
            if ( (v81 & 0x7Fu) > 0xA )
              v76[16] |= 0x10u;
          }
          ThreadUnlock1(v80, v78, v79);
        }
        if ( v71 && a7 )
        {
          v82 = *(_DWORD *)(a7 + 32);
          v83 = *v56;
          if ( ((v82 & 0x10) != 0 || (v83 & 0x20) != 0) && (v83 & 0x10) != 0 )
          {
            v112 = 0;
            v71 = 0;
          }
          if ( (v82 & 8) != 0 && !IsThreadHungTimeCheck(a6, gdwHungAppTimeout) )
            v71 = 0;
          if ( !v71 )
            EtwTraceConvertTimeOutToBlocking();
        }
        v73 = a6;
        v74 = Size_4;
      }
      while ( (*v56 & 1) == 0 );
      v31 = a2;
    }
    CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
    v84 = Size_4;
    if ( v113 )
    {
      *(_DWORD *)(Size_4 + 488) &= ~0x10000u;
      MergeDeferredMessagesOfThreadOnQueue(Size_4);
    }
    if ( (*(_DWORD *)(Size_4 + 488) & 1) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(Size_4 + 448) + 8LL), 0x200u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(Size_4 + 448) + 4LL), 0x200u);
      if ( (*(_DWORD *)(*(_QWORD *)(Size_4 + 448) + 16LL) & 0x200) != 0 )
        KeSetEvent(*(PRKEVENT *)(Size_4 + 736), 2, 0);
    }
    if ( !v71 )
    {
      if ( Size )
      {
        v85 = v118;
        v123 = v118;
        if ( a2 != 131 )
        {
          v86 = *v111;
          if ( v114 )
          {
            if ( v114 == 1 )
              strncpycch(v118, v86);
            else
              wcsncpycch(v118, v86, Size >> 1);
          }
          else
          {
            memmove(v118, v86, Size);
          }
          v87 = 1;
LABEL_303:
          EtwTraceEndSendMessage(v110);
          *(_QWORD *)(v84 + 504) = v124;
          if ( a7 )
          {
            **(_QWORD **)(a7 + 40) = *v119;
            if ( (*(_DWORD *)(a7 + 32) & 0x20) != 0 && (*v56 & 0x8000) != 0 )
            {
              v92 = 0LL;
              UserSetLastError(1400LL);
            }
            else
            {
              v92 = v71 == 0;
            }
          }
          else
          {
            v92 = *v119;
          }
          if ( (a7 || v71) && (*v56 & 1) == 0 )
          {
            v93 = *v56 | 1;
            *v56 = v93;
            if ( (v93 & 0x4000) != 0 )
            {
              *v56 = v93 | 8;
            }
            else
            {
              --*v127;
              v94 = v125;
              v95 = *v125;
              v96 = *v128;
              if ( *(_QWORD **)(*v125 + 8LL) != v125 || (_QWORD *)*v96 != v125 )
                goto LABEL_346;
              *v96 = v95;
              *(_QWORD *)(v95 + 8) = v96;
              *v94 = 0LL;
              *v56 |= 0x10u;
            }
          }
          v97 = *v56;
          if ( (*v56 & 0x4010) != 0x10 )
          {
            v97 |= 8u;
            *v56 = v97;
          }
          if ( (v97 & 0x8008) == 8 )
            return v92;
          v98 = v129;
          v99 = v120;
          if ( *v129 == 576 )
          {
            FreeTouchInputInfo(*v120, 0LL);
          }
          else if ( *v129 == 281 )
          {
            FreeGestureInfo(*v120, 0LL);
          }
          if ( (*v56 & 0x200) == 0 )
          {
            v100 = (_WORD *)*v98;
            if ( (unsigned int)((_DWORD)v100 - 577) <= 3 )
              goto LABEL_330;
            if ( (unsigned int)((_DWORD)v100 - 581) > 0x12 || (v101 = 1, (_DWORD)v100 == 589) )
              v101 = 0;
            v65 = v101 == 0;
            v102 = 0;
            if ( !v65 )
LABEL_330:
              v102 = 1;
            if ( !v102 || (v103 = 1, (_DWORD)v100 == 595) )
              v103 = 0;
            if ( v103 )
              goto LABEL_339;
            if ( (_DWORD)v100 != 528 || (v100 = v130, *v130 != 582) )
              v87 = 0;
            if ( v87 )
            {
LABEL_339:
              v104 = *v99;
              v105 = SGDGetUserSessionState(v100);
              CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v105 + 3424), v104, 6LL, v110);
            }
          }
          v106 = *(_QWORD *)v110;
          v107 = *v131;
          if ( *(_QWORD *)(*(_QWORD *)v110 + 8LL) == v110 && *v107 == v110 )
          {
            *v107 = v106;
            *(_QWORD *)(v106 + 8) = v107;
            HMAssignmentUnlock(v132);
            if ( *v111 )
              Win32FreePool(*v111);
            Win32FreeToPagedLookasideList(SMSLookaside, v110);
            return v92;
          }
LABEL_346:
          __fastfail(3u);
        }
        if ( a9 )
        {
          if ( a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(a2, 0LL, (__int64)a1);
            v85 = v123;
          }
          v84 = Size_4;
        }
        v88 = *v111;
        v89 = *(_OWORD *)*v111;
        if ( a3 )
        {
          v90 = v85[6];
          *(_OWORD *)v85 = v89;
          *((_OWORD *)v85 + 1) = v88[1];
          *((_OWORD *)v85 + 2) = v88[2];
          v85[6] = v90;
          v91 = *((_QWORD *)v88 + 6);
          v87 = 1;
          if ( v91 )
          {
            *(_OWORD *)v90 = *(_OWORD *)v91;
            *(_OWORD *)(v90 + 16) = *(_OWORD *)(v91 + 16);
            *(_QWORD *)(v90 + 32) = *(_QWORD *)(v91 + 32);
          }
          goto LABEL_303;
        }
        *(_OWORD *)v85 = v89;
      }
      else if ( v31 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      {
        TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
      }
    }
    v87 = 1;
    goto LABEL_303;
  }
  if ( !v70 )
  {
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 4LL), 0x40u);
    if ( (*(_DWORD *)(*((_QWORD *)a6 + 56) + 16LL) & 0x40) != 0 )
      KeSetEvent(*((PRKEVENT *)a6 + 92), 2, 0);
  }
  EtwTraceEndSendMessage(v110);
  return 1LL;
}
