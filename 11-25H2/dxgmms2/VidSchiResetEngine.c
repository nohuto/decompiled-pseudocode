/*
 * XREFs of VidSchiResetEngine @ 0x140044808
 * Callers:
 *     VidSchiResetEngines @ 0x1400A508C (VidSchiResetEngines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U5@U2@U?$_tlgWrapSz@D@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@474AEBU?$_tlgWrapSz@D@@77@Z @ 0x140001C64 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x14000213C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140002234 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x140024534 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     _tlgKeywordOn @ 0x1400404B8 (_tlgKeywordOn.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x14004F24C (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x14004F8F0 (McTemplateK0dp_EtwWriteTransfer.c)
 *     ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140051F28 (-VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051FA0 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchiMarkDevicesInError @ 0x140090288 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400ADF8C (VidSchiSubmitPreemptionCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall VidSchiResetEngine(struct _VIDSCH_NODE *a1, __int64 a2)
{
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER *v6; // r12
  struct _TDR_RECOVERY_CONTEXT *v7; // rsi
  __int64 v8; // rdx
  char v9; // r15
  __int64 v10; // r13
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // r9
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // cf
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // rcx
  DWORD v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r13
  __int64 v38; // rax
  _BYTE *v39; // r10
  __int64 v40; // r9
  __int64 v41; // rdx
  _BYTE *v42; // rcx
  __int64 v43; // r9
  char v44; // al
  _BYTE *v45; // rax
  int v46; // eax
  bool IsLimitExhausted; // al
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  char *v51; // rbx
  int v52; // r9d
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rcx
  char v56; // r13
  _BYTE *v57; // r8
  _BYTE *v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  char v61; // al
  _BYTE *v62; // rax
  unsigned int v63; // edx
  __int64 v64; // rax
  char result; // al
  char v66; // [rsp+88h] [rbp-80h] BYREF
  char v67; // [rsp+89h] [rbp-7Fh] BYREF
  __int16 v68; // [rsp+8Ah] [rbp-7Eh] BYREF
  int v69; // [rsp+8Ch] [rbp-7Ch]
  int v70; // [rsp+90h] [rbp-78h] BYREF
  int v71; // [rsp+94h] [rbp-74h] BYREF
  int v72; // [rsp+98h] [rbp-70h] BYREF
  DWORD v73; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v74; // [rsp+A0h] [rbp-68h] BYREF
  int v75; // [rsp+A4h] [rbp-64h] BYREF
  int v76; // [rsp+A8h] [rbp-60h] BYREF
  int v77; // [rsp+ACh] [rbp-5Ch] BYREF
  int v78; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v81; // [rsp+D0h] [rbp-38h]
  __int128 v82; // [rsp+E0h] [rbp-28h]
  LARGE_INTEGER v83; // [rsp+F0h] [rbp-18h]
  struct _TDR_RECOVERY_CONTEXT *v84; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v85; // [rsp+100h] [rbp-8h] BYREF
  __int64 v86; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int16 *v87; // [rsp+110h] [rbp+8h] BYREF
  __int64 v88; // [rsp+118h] [rbp+10h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v89; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int16 *v90; // [rsp+128h] [rbp+20h] BYREF
  __int64 v91; // [rsp+130h] [rbp+28h] BYREF
  void *v92; // [rsp+138h] [rbp+30h] BYREF
  __int64 v93; // [rsp+140h] [rbp+38h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v94; // [rsp+148h] [rbp+40h] BYREF
  void *v95; // [rsp+150h] [rbp+48h] BYREF
  unsigned __int16 *v96; // [rsp+158h] [rbp+50h] BYREF
  __int64 v97; // [rsp+160h] [rbp+58h] BYREF
  __int64 v98; // [rsp+168h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+170h] [rbp+68h] BYREF
  _OWORD v100[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v101; // [rsp+1A8h] [rbp+A0h]
  _DWORD v102[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v103; // [rsp+1B8h] [rbp+B0h]

  WdLogSingleEntry3(4LL, *((_QWORD *)a1 + 21), *((_QWORD *)a1 + 8), *((_QWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 3);
  WdLogGlobalForLineNumber = 18104;
  if ( *((_DWORD *)a1 + 755) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 788));
    if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 756) == 1 )
    {
      *((_QWORD *)a1 + 29) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 756);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 788));
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1984), &LockHandle);
  v67 = 0;
  v80 = (unsigned __int64)a1;
  v83.QuadPart = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v4 + 24),
    VidSchiSetNodeResettingStateAtISR,
    &v80,
    *(unsigned int *)(v4 + 32),
    &v67);
  PerformanceCounter = *(LARGE_INTEGER *)((char *)&v80 + 8);
  v6 = (LARGE_INTEGER *)(*((_QWORD *)a1 + 23) + 112LL * *((unsigned int *)a1 + 49));
  memset(v6, 0, 0x70uLL);
  *((_DWORD *)a1 + 49) = (*((_DWORD *)a1 + 49) + 1) & (*((_DWORD *)a1 + 48) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6[1] = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  v7 = 0LL;
  v6->LowPart = 6;
  *(_OWORD *)&v6[2].LowPart = v81;
  v6[4].QuadPart = v82;
  v6[6] = v83;
  if ( v83.LowPart == v83.HighPart && !*((_DWORD *)a1 + 537) )
  {
    v8 = *((unsigned int *)a1 + 755);
    if ( (_DWORD)v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2048LL, (unsigned int)v83.HighPart, v8, 0LL);
      WdLogGlobalForLineNumber = 906;
    }
    WdLogSingleEntry2(4LL, *((_QWORD *)a1 + 8), *((_QWORD *)a1 + 12));
    v9 = 1;
    *((_QWORD *)&v82 + 1) = v81;
    BYTE5(v6[7].QuadPart) = 0;
    v10 = v4 + 3256;
    WdLogGlobalForLineNumber = 18179;
    goto LABEL_43;
  }
  v10 = v4 + 3256;
  if ( *(struct _VIDSCH_NODE **)(v4 + 3256) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v4 + 3248) = RecoveryContext;
    v7 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_BYTE *)RecoveryContext + 2921) = 1;
      *((_DWORD *)RecoveryContext + 4) = *((_DWORD *)a1 + 537) != 0 ? 12 : 6;
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v4 + 3244;
      v12 = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v7 + 4) = v12;
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v13 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 5) = -1LL;
      *((_DWORD *)v7 + 36) = 69639;
      *((_DWORD *)v7 + 37) = DpiGetDriverVersion(*(_QWORD *)(v13 + 216));
      *((_DWORD *)v7 + 14) = *(unsigned __int16 *)(*(_QWORD *)v10 + 4LL);
      *((_QWORD *)v7 + 13) = DXGADAPTER::GetDbgOwnerTag(*((DXGADAPTER **)v7 + 4));
      if ( *((_DWORD *)v7 + 4) == 6 )
      {
        memset(v100, 0, sizeof(v100));
        v101 = 0LL;
        VidSchiCollectTdrPayloadEngineTimeout(a1, (struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *)v100);
        v14 = v100;
        v15 = 40;
      }
      else
      {
        VidSchiCollectTdrPayloadEnginePageFault(a1, v7);
        v14 = 0LL;
        v15 = 0;
      }
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v4 + 3248), 1, v15, v14);
    }
  }
  v16 = *((unsigned __int16 *)a1 + 2);
  v17 = *((_DWORD *)a1 + 127) + 1;
  v103 = 0;
  *((_DWORD *)a1 + 127) = v17;
  v18 = *(_QWORD *)(v4 + 688);
  v19 = v18 + 8 * v16;
  v20 = (unsigned int)v16 < *(_DWORD *)(v4 + 760);
  if ( (unsigned int)v16 >= *(_DWORD *)(v4 + 760) )
    v19 = *(_QWORD *)(v4 + 688);
  v102[1] = *(unsigned __int16 *)(*(_QWORD *)v19 + 6LL);
  if ( v20 )
    v18 += 8 * v16;
  v102[0] = *(unsigned __int16 *)(*(_QWORD *)v18 + 8LL);
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v24 = *(_QWORD *)(v4 + 16);
    v85 = *((_QWORD *)a1 + 12);
    v98 = *((_QWORD *)a1 + 8);
    v86 = *((_QWORD *)a1 + 21);
    v70 = v23;
    v71 = v22;
    v84 = v7;
    v87 = *(unsigned __int16 **)(v24 + 1928);
    v88 = *(_QWORD *)(v24 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      (__int64)&unk_1400755BD,
      v21,
      v22,
      (__int64)&v88,
      &v87,
      (__int64)&v86,
      (__int64)&v98,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&v71,
      (__int64)&v70);
  }
  v25 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[41])(*(_QWORD *)(v4 + 8), v102);
  if ( v25 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    *((_DWORD *)a1 + 4) = 2;
  }
  BYTE5(v6[7].QuadPart) = 1;
  v6[7].LowPart = v25;
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v28 = *(_QWORD *)(v4 + 16);
    v72 = *((_DWORD *)a1 + 127);
    v74 = v103;
    v73 = v25;
    v89 = v7;
    v90 = *(unsigned __int16 **)(v28 + 1928);
    v91 = *(_QWORD *)(v28 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      (__int64)&unk_140075543,
      v26,
      v27,
      (__int64)&v91,
      &v90,
      (__int64)&v89,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72);
  }
  v29 = v103;
  v6[5].QuadPart = v103;
  BYTE4(v6[7].QuadPart) = v9;
  if ( v9 )
  {
    v30 = v81;
    if ( (unsigned __int64)v82 >= (unsigned __int64)v81
      && (_QWORD)v82 - (_QWORD)v81 <= 0x7FFFFFFFuLL
      && (int)(v81 - v29) <= 0
      && (int)(v82 - v29) >= 0 )
    {
      if ( (unsigned int)v81 > v29 )
        v30 = v82;
      *((_QWORD *)&v82 + 1) = v30 & 0xFFFFFFFF00000000uLL | v29;
      goto LABEL_41;
    }
    v31 = *(_QWORD *)(v4 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 10LL, v29, v81, v31);
    WdLogGlobalForLineNumber = 906;
  }
  *((_QWORD *)&v82 + 1) = v82;
LABEL_41:
  if ( v7 )
    *((_DWORD *)v7 + 704) = v25;
LABEL_43:
  v32 = 0LL;
  v66 = 0;
  v79 = 0LL;
  if ( *(struct _VIDSCH_NODE **)v10 == a1 )
  {
    v32 = *((_QWORD *)a1 + *((unsigned int *)a1 + 394) + 198);
    if ( v32 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v32 + 104) + 40LL);
      if ( v33 )
      {
        v34 = 0LL;
        if ( *(_QWORD *)(v33 + 8) )
          v34 = *(_QWORD *)(v32 + 104);
        v79 = v34;
      }
    }
  }
  VidSchiMarkDevicesInError(&v80, &v66, &v79);
  if ( v7 )
  {
    v36 = v79;
    if ( v79 )
    {
      v37 = *(_QWORD *)(v79 + 40);
      v38 = *(_QWORD *)(v37 + 8);
      if ( v38 )
      {
        v39 = (char *)v7 + 2821;
        *((_QWORD *)v7 + 351) = *(_QWORD *)(v38 + 56);
        v40 = *(_QWORD *)(v37 + 2648);
        if ( !v40 )
          goto LABEL_60;
        v41 = 15LL;
        v42 = (char *)v7 + 2821;
        v43 = v40 - (_QWORD)v39;
        do
        {
          if ( v41 == -2147483631 )
            break;
          v44 = v42[v43];
          if ( !v44 )
            break;
          *v42++ = v44;
          --v41;
        }
        while ( v41 );
        v45 = v42 - 1;
        if ( v41 )
          v45 = v42;
        *v45 = 0;
        if ( !v41 )
LABEL_60:
          *v39 = 0;
        if ( v32 )
          *((_DWORD *)v7 + 709) = *(_DWORD *)(v32 + 140);
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v36 + 40) + 2632LL) )
      {
        v46 = *(_DWORD *)(v36 + 48);
        if ( (v46 & 8) == 0 && (v46 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v37 + 40), v7);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v37 + 40), v7, 1);
          *((_BYTE *)v7 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v48 = *(_QWORD *)(v37 + 2624);
            v49 = (unsigned __int64)*(unsigned int *)(v4 + 4) >> 5;
            v50 = *(_DWORD *)(v4 + 4) & 0x1F;
            *(_DWORD *)(v48 + 4 * v49) |= 1 << (*(_BYTE *)(v4 + 4) & 0x1F);
            if ( (byte_140081241 & 1) != 0 )
              McTemplateK0dp_EtwWriteTransfer(v50, v48, v49, *(unsigned int *)(v4 + 4), *((_QWORD *)v7 + 351));
          }
        }
      }
    }
    TdrUpdateDbgReport(v7, 0);
    TdrCollectDbgInfoStage2(v7);
    v51 = (char *)a1 + 2156;
    if ( *((_BYTE *)a1 + 2156) )
    {
      v52 = *((_DWORD *)a1 + 543);
    }
    else
    {
      v52 = *((_DWORD *)v7 + 709);
      v51 = (char *)v7 + 2821;
    }
    v69 = v52;
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
    {
      v75 = *((unsigned __int8 *)v7 + 2820);
      v55 = *(_QWORD **)(v4 + 16);
      v76 = *((_DWORD *)a1 + 537);
      v93 = *((_QWORD *)v7 + 351);
      v77 = *((_DWORD *)a1 + 127);
      v94 = v7;
      v78 = v54;
      v95 = (void *)v55[240];
      v96 = (unsigned __int16 *)v55[241];
      v97 = *(_QWORD *)((char *)v55 + 412);
      v68 = 4;
      v92 = v51;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v55,
        (__int64)&unk_140075470,
        v53,
        v54,
        (__int64)&v68,
        (__int64)&v97,
        &v96,
        &v95,
        (__int64)&v78,
        (__int64)&v94,
        (__int64)&v77,
        (__int64)&v93,
        &v92,
        (__int64)&v76,
        (__int64)&v75);
    }
    v56 = v66;
    if ( !v9 || v66 )
    {
      v57 = (_BYTE *)(v4 + 3269);
      if ( !v51 )
        goto LABEL_85;
      v58 = (_BYTE *)(v4 + 3269);
      v59 = v51 - v57;
      v60 = 15LL;
      do
      {
        if ( v60 == -2147483631 )
          break;
        v61 = v58[v59];
        if ( !v61 )
          break;
        *v58++ = v61;
        --v60;
      }
      while ( v60 );
      v62 = v58 - 1;
      if ( v60 )
        v62 = v58;
      *v62 = 0;
      if ( !v60 )
LABEL_85:
        *v57 = 0;
      *(_DWORD *)(v4 + 3284) = v69;
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v4 + 3248) = 0LL;
  }
  else
  {
    v56 = v66;
  }
  if ( v9 )
  {
    v63 = DWORD2(v82);
    *((_QWORD *)a1 + 55) = 0LL;
    *((_DWORD *)a1 + 124) = 0;
    VidSchiCompletePendingCommandInNodeHwQueue((__int64)a1, v63, 0);
    v64 = *((_QWORD *)&v82 + 1);
    *((_QWORD *)a1 + 8) = *((_QWORD *)&v82 + 1);
    *((_QWORD *)a1 + 9) = v64;
    if ( v56 )
    {
      v9 = 0;
    }
    else
    {
      *((_DWORD *)a1 + 543) = 0;
      *((_BYTE *)a1 + 2156) = 0;
    }
  }
  RtlClearBitEx(v4 + 640, *((unsigned __int16 *)a1 + 2), v35);
  *((_DWORD *)a1 + 4) = 0;
  result = v9;
  BYTE4(v6[7].QuadPart) = v9;
  BYTE6(v6[7].QuadPart) = v56;
  v6[5] = *(LARGE_INTEGER *)((char *)&v82 + 8);
  return result;
}
