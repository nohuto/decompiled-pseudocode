/*
 * XREFs of RIMWatchDog @ 0x14005AC20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002054 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMDisArmWatchDog @ 0x14005ABA8 (RIMDisArmWatchDog.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     RIMArmWatchDog @ 0x1400EF74C (RIMArmWatchDog.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401D3938 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1401D3A50 (WPP_RECORDER_AND_TRACE_SF_qqqDqSq.c)
 */

void __fastcall RIMWatchDog(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  CTouchProcessor *v6; // rcx
  int v7; // r15d
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 i; // rdi
  bool v14; // r12
  int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r15
  bool v25; // r12
  int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  __int64 v36; // rbx
  __int64 v37; // rdi
  int v38; // esi
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // [rsp+20h] [rbp-69h]
  int v46; // [rsp+28h] [rbp-61h]
  int v47; // [rsp+30h] [rbp-59h]
  int v48; // [rsp+38h] [rbp-51h]
  __int64 v49; // [rsp+68h] [rbp-21h]
  _QWORD *v50; // [rsp+80h] [rbp-9h]
  __int64 v51; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v52[10]; // [rsp+90h] [rbp+7h] BYREF
  int v53; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v54; // [rsp+F8h] [rbp+6Fh] BYREF
  int v55; // [rsp+100h] [rbp+77h]
  __int64 v56; // [rsp+108h] [rbp+7Fh] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v3 = W32GetUserSessionState(v2);
  RIMLockExclusive(v3 + 88);
  v5 = (_QWORD *)(W32GetUserSessionState(v4) + 120);
  v50 = v5;
  v7 = 0;
  v55 = 0;
  v8 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    goto LABEL_5;
  do
  {
    if ( *((_DWORD *)v8 + 224) )
    {
      if ( v8[113]
        && !*((_BYTE *)v8 + 65)
        && !*((_BYTE *)v8 + 64)
        && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v8[113]) > v8[114]
        && !PsGetProcessDebugPort(v8[2]) )
      {
        v6 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v24 = 0;
        }
        v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = *((_DWORD *)v8 + 17);
          v27 = v8[3];
          v28 = v8[2];
          v29 = v8[7];
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v31) = v25;
          LOBYTE(v32) = v24;
          WPP_RECORDER_AND_TRACE_SF_qqqD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 19392),
            v45,
            v46,
            15,
            (__int64)&WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
            v29,
            v28,
            v27,
            v26);
        }
        if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
        {
          v53 = *((_DWORD *)v8 + 17);
          v54 = v8[3];
          v56 = v8[2];
          v51 = v8[7];
          v52[0] = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)v6,
            (__int64)&unk_140276DBD,
            v33,
            v34,
            (__int64)v52,
            (__int64)&v51,
            (__int64)&v56,
            (__int64)&v54,
            (__int64)&v53);
        }
        v7 = v55;
      }
      if ( !v8[111] || *((_BYTE *)v8 + 65) || *((_BYTE *)v8 + 64) || *((_BYTE *)v8 + 760) )
      {
        *((_DWORD *)v8 + 224) = 0;
      }
      else
      {
        v7 = 1;
        v55 = 1;
        if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v8[111]) > v8[110] )
        {
          *((_DWORD *)v8 + 224) = 0;
          v6 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v7) = 0;
          }
          v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = *((_DWORD *)v8 + 17);
            v16 = v8[3];
            v17 = v8[2];
            v18 = v8[7];
            v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v20) = v14;
            LOBYTE(v21) = v7;
            WPP_RECORDER_AND_TRACE_SF_qqqD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v20,
              *(_QWORD *)(v19 + 19392),
              v45,
              v46,
              16,
              (__int64)&WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
              v18,
              v17,
              v16,
              v15);
          }
          if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
          {
            v53 = *((_DWORD *)v8 + 17);
            v54 = v8[3];
            v56 = v8[2];
            v52[0] = v8[7];
            v51 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (__int64)v6,
              (__int64)&unk_140276D75,
              v22,
              v23,
              (__int64)&v51,
              (__int64)v52,
              (__int64)&v56,
              (__int64)&v54,
              (__int64)&v53);
          }
          v7 = v55;
        }
      }
      for ( i = v8[51]; ; i = *(_QWORD *)(i + 40) )
      {
        v56 = i;
        if ( !i )
          break;
        if ( *(_DWORD *)(i + 352) )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(i + 344)) <= v8[114] )
          {
            v7 = 1;
            v55 = 1;
            *((_DWORD *)v8 + 224) = 1;
          }
          else
          {
            v6 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v35 = 0;
            }
            LOBYTE(v53) = v35;
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            LOBYTE(v54) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = *(_QWORD *)(i + 296);
              v37 = *(_QWORD *)(i + 200);
              v38 = *((_DWORD *)v8 + 17);
              v39 = v8[3];
              v40 = v8[2];
              v41 = v8[7];
              v42 = W32GetUserSessionState(v6);
              LOBYTE(v43) = v54;
              LOBYTE(v44) = v53;
              v49 = v37;
              i = v56;
              WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v44,
                v43,
                *(_QWORD *)(v42 + 19392),
                v45,
                v46,
                v47,
                v48,
                v41,
                v40,
                v39,
                v38,
                v56,
                v49,
                v36);
              v7 = v55;
            }
          }
        }
      }
      v5 = v50;
    }
    v8 = (_QWORD *)*v8;
  }
  while ( v8 != v5 );
  if ( v7 )
    RIMArmWatchDog();
  else
LABEL_5:
    RIMDisArmWatchDog((__int64)v6);
  v10 = W32GetUserSessionState(v9);
  RIMUnlockExclusive(v10 + 88);
  v12 = W32GetUserSessionState(v11);
  RIMUnlockExclusive(v12 + 56);
}
