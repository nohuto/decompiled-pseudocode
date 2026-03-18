/*
 * XREFs of VidSchiResetHwEngine @ 0x140052878
 * Callers:
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U5@U2@U?$_tlgWrapSz@D@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@474AEBU?$_tlgWrapSz@D@@77@Z @ 0x140001C64 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x14000213C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140002234 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x140021028 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x14004EBDC (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1400519A8 (-VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051A20 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VidSchiResetHwEngine(struct _VIDSCH_NODE *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 *v5; // r13
  LARGE_INTEGER PerformanceCounter; // rsi
  _DWORD *v7; // r14
  struct _TDR_RECOVERY_CONTEXT *v8; // rsi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 DbgOwnerTag; // rax
  bool v13; // zf
  struct _VIDSCH_NODE *v14; // r15
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r12d
  bool v24; // r15
  __int64 v25; // r8
  struct _VIDSCH_NODE *i; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  char *v32; // r15
  int v33; // r13d
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rcx
  _BYTE *v38; // r8
  __int64 v39; // rdx
  _BYTE *v40; // rcx
  __int64 v41; // r15
  char v42; // al
  _BYTE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  bool v47; // cf
  int v48; // eax
  bool result; // al
  int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch] BYREF
  int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+94h] [rbp-6Ch] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+9Ch] [rbp-64h] BYREF
  int v58; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v59[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v60[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _VIDSCH_NODE *v61; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  struct _TDR_RECOVERY_CONTEXT *v64; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v68; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v70; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v71; // [rsp+108h] [rbp+8h] BYREF
  __int64 v72; // [rsp+110h] [rbp+10h] BYREF
  void *v73; // [rsp+118h] [rbp+18h] BYREF
  __int64 v74; // [rsp+120h] [rbp+20h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v75; // [rsp+128h] [rbp+28h] BYREF
  void *v76; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int16 *v77; // [rsp+138h] [rbp+38h] BYREF
  __int64 v78; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v80[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v81; // [rsp+180h] [rbp+80h]
  _BYTE v82[40]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v83[96]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v84; // [rsp+220h] [rbp+120h] BYREF
  bool v85; // [rsp+230h] [rbp+130h]
  __int16 v86; // [rsp+238h] [rbp+138h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = (unsigned __int64 *)(v2 + 1984);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1984), &LockHandle);
  v62.QuadPart = 0LL;
  v63 = 0LL;
  v61 = a1;
  v84 = 0;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v61,
    *(unsigned int *)(v2 + 32),
    &v84);
  PerformanceCounter = v62;
  v7 = (_DWORD *)(*((_QWORD *)a1 + 23) + 112LL * *((unsigned int *)a1 + 49));
  memset(v7, 0, 0x70uLL);
  *((_DWORD *)a1 + 49) = (*((_DWORD *)a1 + 49) + 1) & (*((_DWORD *)a1 + 48) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((LARGE_INTEGER *)v7 + 1) = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v7 = 10;
  v8 = 0LL;
  *(_QWORD *)(v7 + 9) = v63;
  if ( *(struct _VIDSCH_NODE **)(v2 + 3256) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 3248) = RecoveryContext;
    v8 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_BYTE *)RecoveryContext + 2921) = 1;
      *((_DWORD *)RecoveryContext + 4) = *((_DWORD *)a1 + 537) != 0 ? 12 : 6;
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 3244;
      v10 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v8 + 4) = v10;
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24));
      v11 = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 5) = -1LL;
      *((_DWORD *)v8 + 36) = 69639;
      *((_DWORD *)v8 + 37) = DpiGetDriverVersion(*(_QWORD *)(v11 + 216));
      *((_DWORD *)v8 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 3256) + 4LL);
      DbgOwnerTag = DXGADAPTER::GetDbgOwnerTag(*((DXGADAPTER **)v8 + 4));
      v13 = *((_DWORD *)v8 + 4) == 6;
      *((_QWORD *)v8 + 13) = DbgOwnerTag;
      if ( v13 )
      {
        memset(v80, 0, sizeof(v80));
        v81 = 0LL;
        VidSchiCollectTdrPayloadEngineTimeout(a1, (struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *)v80);
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 3248), 1, 0x28u, v80);
        AcquireSpinLock::AcquireSpinLock(
          (AcquireSpinLock *)v82,
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1984LL),
          1,
          0);
        v14 = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 214);
        if ( v14 != (struct _VIDSCH_NODE *)((char *)a1 + 1712) )
        {
          do
          {
            if ( *((_BYTE *)v14 + 32) )
            {
              VidSchiDecrementHwContextReference((unsigned int *)v14 - 68, 1);
              *((_BYTE *)v14 + 32) = 0;
            }
            else
            {
              WdLogSingleEntry1(3LL, (char *)v14 - 272);
              WdLogGlobalForLineNumber = 8468;
            }
            v14 = *(struct _VIDSCH_NODE **)v14;
          }
          while ( v14 != (struct _VIDSCH_NODE *)((char *)a1 + 1712) );
          v5 = (unsigned __int64 *)(v2 + 1984);
        }
        AcquireSpinLock::Release((AcquireSpinLock *)v82);
      }
      else
      {
        VidSchiCollectTdrPayloadEnginePageFault(a1, v8);
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 3248), 1, 0, 0LL);
      }
    }
  }
  v15 = *((unsigned __int16 *)a1 + 2);
  ++*((_DWORD *)a1 + 127);
  v16 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v15 < *(_DWORD *)(v2 + 760) )
    v16 += 8 * v15;
  v59[1] = *(unsigned __int16 *)(*(_QWORD *)v16 + 6LL);
  v17 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v15 < *(_DWORD *)(v2 + 760) )
    v17 += 8 * v15;
  v59[0] = *(unsigned __int16 *)(*(_QWORD *)v17 + 8LL);
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v21 = *(_QWORD *)(v2 + 16);
    v65 = *((_QWORD *)a1 + 12);
    v66 = *((_QWORD *)a1 + 8);
    v67 = *((_QWORD *)a1 + 21);
    v50 = v20;
    v51 = v19;
    v64 = v8;
    v68 = *(unsigned __int16 **)(v21 + 1928);
    v69 = *(_QWORD *)(v21 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (__int64)&unk_14007563D,
      v18,
      v19,
      (__int64)&v69,
      &v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v51,
      (__int64)&v50);
  }
  *((_QWORD *)a1 + 222) = v8;
  *((_QWORD *)a1 + 221) = v7 + 4;
  v22 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[42])(*(_QWORD *)(v2 + 8), v59);
  *((_QWORD *)a1 + 221) = 0LL;
  v23 = v22;
  *((_QWORD *)a1 + 222) = 0LL;
  v24 = v22 == 0;
  v85 = v22 == 0;
  KeFlushQueuedDpcs();
  if ( !v23 )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v83, v5, 1, 0);
    for ( i = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 214); ; i = *(struct _VIDSCH_NODE **)i )
    {
      if ( i == (struct _VIDSCH_NODE *)((char *)a1 + 1712) )
      {
        *((_DWORD *)a1 + 4) = 2;
        AcquireSpinLock::Release((AcquireSpinLock *)v83);
        goto LABEL_27;
      }
      v27 = *((_QWORD *)i - 5);
      v28 = *((_QWORD *)i - 6);
      if ( v27 != v28 )
        break;
    }
    v34 = *(_QWORD *)(v2 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 40960LL, v34, v27, v28);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_34;
  }
LABEL_27:
  *((_BYTE *)v7 + 53) = 1;
  v7[11] = v23;
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v30 = *(_QWORD *)(v2 + 16);
    v31 = *((_DWORD *)a1 + 127);
    v54 = 0;
    v52 = v31;
    v53 = v23;
    v70 = v8;
    v71 = *(unsigned __int16 **)(v30 + 1928);
    v72 = *(_QWORD *)(v30 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v30,
      (__int64)&unk_1400755C3,
      v25,
      v29,
      (__int64)&v72,
      &v71,
      (__int64)&v70,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52);
  }
  if ( v8 )
  {
    *((_DWORD *)v8 + 704) = v23;
    TdrUpdateDbgReport(v8, 0);
    TdrCollectDbgInfoStage2(v8);
    v32 = (char *)a1 + 2156;
    if ( *((_BYTE *)a1 + 2156) )
    {
      v33 = *((_DWORD *)a1 + 543);
      goto LABEL_35;
    }
LABEL_34:
    v33 = *((_DWORD *)v8 + 709);
    v32 = (char *)v8 + 2821;
LABEL_35:
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
    {
      v55 = *((unsigned __int8 *)v8 + 2820);
      v37 = *(_QWORD **)(v2 + 16);
      v56 = *((_DWORD *)a1 + 537);
      v74 = *((_QWORD *)v8 + 351);
      v57 = *((_DWORD *)a1 + 127);
      v75 = v8;
      v58 = v33;
      v76 = (void *)v37[240];
      v77 = (unsigned __int16 *)v37[241];
      v78 = *(_QWORD *)((char *)v37 + 412);
      v86 = 4;
      v73 = v32;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v37,
        (__int64)&unk_1400754F0,
        v35,
        v36,
        (__int64)&v86,
        (__int64)&v78,
        &v77,
        &v76,
        (__int64)&v58,
        (__int64)&v75,
        (__int64)&v57,
        (__int64)&v74,
        &v73,
        (__int64)&v56,
        (__int64)&v55);
    }
    if ( v23 )
    {
      v38 = (_BYTE *)(v2 + 3269);
      if ( !v32 )
        goto LABEL_47;
      v39 = 15LL;
      v40 = (_BYTE *)(v2 + 3269);
      v41 = v32 - v38;
      do
      {
        if ( v39 == -2147483631 )
          break;
        v42 = v40[v41];
        if ( !v42 )
          break;
        *v40++ = v42;
        --v39;
      }
      while ( v39 );
      v43 = v40 - 1;
      if ( v39 )
        v43 = v40;
      *v43 = 0;
      if ( !v39 )
LABEL_47:
        *v38 = 0;
      *(_DWORD *)(v2 + 3284) = v33;
    }
    TdrCompleteRecoveryContext(v8, 1, 1);
    *(_QWORD *)(v2 + 3248) = 0LL;
    v24 = v85;
  }
  if ( !v23 )
  {
    *((_DWORD *)a1 + 110) = 0;
    *((_DWORD *)a1 + 111) = 0;
    *((_DWORD *)a1 + 124) = 0;
  }
  RtlClearBitEx(v2 + 640, *((unsigned __int16 *)a1 + 2), v25);
  *((_DWORD *)a1 + 4) = 0;
  if ( !v23 )
  {
    v44 = *((unsigned __int16 *)a1 + 2);
    v45 = *(_QWORD *)(v2 + 688);
    v46 = v45 + 8 * v44;
    v47 = (unsigned int)v44 < *(_DWORD *)(v2 + 760);
    if ( (unsigned int)v44 >= *(_DWORD *)(v2 + 760) )
      v46 = *(_QWORD *)(v2 + 688);
    v60[1] = *(unsigned __int16 *)(*(_QWORD *)v46 + 6LL);
    if ( v47 )
      v45 += 8 * v44;
    v60[0] = *(unsigned __int16 *)(*(_QWORD *)v45 + 8LL);
    v48 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[43])(*(_QWORD *)(v2 + 8), v60);
    *((_BYTE *)v7 + 54) = 1;
    v7[12] = v48;
    v24 = v48 == 0;
  }
  result = v24;
  *((_BYTE *)v7 + 52) = v24;
  return result;
}
