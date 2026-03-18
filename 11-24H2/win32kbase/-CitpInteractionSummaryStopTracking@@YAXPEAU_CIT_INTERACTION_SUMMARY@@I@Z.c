/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1400B3008
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400B2ECC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400B5DE8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@88888888888888888858444448848888447477@Z @ 0x14000A698 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@77777777777777777747666667767777665655@Z @ 0x1400B20A4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1400B3B28 (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1400B52F4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CFCD0 (UserUnsafeIsProcessDwm.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  const WCHAR **v6; // r11
  __int64 v7; // rdi
  struct _CIT_AUDIO_STATS *v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // r15
  __int64 UserSessionState; // rax
  __int64 v12; // r8
  int v13; // r12d
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // r10
  __int64 v17; // r9
  bool v18; // zf
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // r9
  const WCHAR *v24; // r10
  __int64 v25; // r11
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r10
  const WCHAR *v30; // r13
  const WCHAR *v31; // rdi
  const WCHAR *v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  __int16 v35; // ax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  const WCHAR *v39; // r11
  int v40; // eax
  int v41; // eax
  char v42[2]; // [rsp+1F0h] [rbp-80h] BYREF
  __int16 v43; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v44; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v45; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v46; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v47; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v48; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v49; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v50; // [rsp+200h] [rbp-70h] BYREF
  __int16 v51; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v52; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v53; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v54; // [rsp+208h] [rbp-68h] BYREF
  __int16 v55; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v56; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v57; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v58; // [rsp+210h] [rbp-60h] BYREF
  __int16 v59; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v60; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v61; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v62; // [rsp+218h] [rbp-58h] BYREF
  __int16 v63; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v64; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v65; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v66; // [rsp+220h] [rbp-50h] BYREF
  __int16 v67; // [rsp+222h] [rbp-4Eh] BYREF
  _WORD v68[2]; // [rsp+224h] [rbp-4Ch] BYREF
  int v69; // [rsp+228h] [rbp-48h] BYREF
  int v70; // [rsp+22Ch] [rbp-44h] BYREF
  int v71; // [rsp+230h] [rbp-40h] BYREF
  int v72; // [rsp+234h] [rbp-3Ch] BYREF
  int v73; // [rsp+238h] [rbp-38h] BYREF
  int v74; // [rsp+23Ch] [rbp-34h] BYREF
  int v75; // [rsp+240h] [rbp-30h] BYREF
  int v76; // [rsp+244h] [rbp-2Ch] BYREF
  int v77; // [rsp+248h] [rbp-28h] BYREF
  int v78; // [rsp+24Ch] [rbp-24h] BYREF
  int v79; // [rsp+250h] [rbp-20h] BYREF
  int v80; // [rsp+254h] [rbp-1Ch] BYREF
  int v81; // [rsp+258h] [rbp-18h] BYREF
  int v82; // [rsp+25Ch] [rbp-14h] BYREF
  int v83; // [rsp+260h] [rbp-10h] BYREF
  const WCHAR *v84; // [rsp+268h] [rbp-8h] BYREF
  __int128 v85; // [rsp+270h] [rbp+0h] BYREF
  __int64 v86; // [rsp+280h] [rbp+10h]
  int v87; // [rsp+288h] [rbp+18h]
  __int16 v88; // [rsp+28Ch] [rbp+1Ch]
  int v89; // [rsp+290h] [rbp+20h] BYREF
  int v90; // [rsp+294h] [rbp+24h] BYREF
  __int64 v91; // [rsp+298h] [rbp+28h] BYREF
  __int64 v92; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v93; // [rsp+2A8h] [rbp+38h] BYREF
  const WCHAR *v94; // [rsp+2B0h] [rbp+40h] BYREF
  const WCHAR *v95; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v96; // [rsp+2C0h] [rbp+50h] BYREF
  const WCHAR *v97[2]; // [rsp+2C8h] [rbp+58h] BYREF
  __int64 v98; // [rsp+2D8h] [rbp+68h] BYREF
  __int64 v99[8]; // [rsp+2E0h] [rbp+70h] BYREF
  __int64 v100; // [rsp+330h] [rbp+C0h] BYREF
  char v101; // [rsp+340h] [rbp+D0h] BYREF
  char v102; // [rsp+348h] [rbp+D8h] BYREF

  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != a1
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = v97;
  *((_QWORD *)a1 + 1) = a1;
  v97[1] = (const WCHAR *)((char *)a1 + 124);
  v7 = 2LL;
  *(_QWORD *)a1 = a1;
  v97[0] = (const WCHAR *)((char *)a1 + 116);
  do
  {
    v8 = (struct _CIT_AUDIO_STATS *)*v6;
    if ( *((_BYTE *)*v6 + 3) )
      CitpAudioStatSnapDelta(v8);
    ++v6;
    --v7;
  }
  while ( v7 );
  v10 = *(_DWORD **)(W32GetUserSessionState(v8) + 18968);
  if ( (v10[3] & 0x10) == 0
    || *((_WORD *)a1 + 57) != 4
    || *((_WORD *)a1 + 54)
    && *((_WORD *)a1 + 55)
    && ((*((_BYTE *)a1 + 100) & 1) != 0
     || !(unsigned int)UserUnsafeIsProcessDwm(**(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL))) )
  {
    if ( (v10[3] & 0x20) == 0
      || (v28 = *((unsigned __int16 *)a1 + 57), (v28 & 8) == 0)
      || (v28 & 0xFFFFFFF3) != 0
      || (v9 = 3LL, *((_WORD *)a1 + 53) >= 3u)
      || *((_WORD *)a1 + 54) && *((_WORD *)a1 + 55) )
    {
      UserSessionState = W32GetUserSessionState(v9);
      v13 = a2 - *((_DWORD *)a1 + 23);
      v14 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18968) + 32LL);
      v15 = a2 - *(_DWORD *)(v14 + 288);
      v16 = *(_QWORD *)(v14 + 256) + 1LL;
      v17 = *(_QWORD *)(v14 + 280);
      *(_QWORD *)(v14 + 256) = v16;
      v18 = (*((_BYTE *)a1 + 100) & 1) == 0;
      v100 = v16;
      if ( v18 )
      {
        v19 = *((_OWORD *)a1 + 2);
        v87 = *((_DWORD *)a1 + 14);
        v20 = *((_QWORD *)a1 + 6);
        v21 = *((_WORD *)a1 + 30);
        v85 = v19;
        v88 = v21;
        v86 = v20;
        if ( !(unsigned int)OnlyCompositionMetrics(a1, &v85, v12, v17)
          && (unsigned int)dword_14029AF48 > 5
          && (qword_14029AF58 & 0x800000000800LL) != 0
          && (qword_14029AF60 & 0x800000000800LL) == qword_14029AF60 )
        {
          v94 = (const WCHAR *)*((_QWORD *)a1 + 2);
          v26 = *((_DWORD *)a1 + 31) & 0xFFFFFF;
          v97[0] = (const WCHAR *)0x2000000;
          v82 = v26;
          v27 = *((_DWORD *)a1 + 29) & 0xFFFFFF;
          v95 = v24;
          v81 = v27;
          v68[0] = *((_WORD *)a1 + 53);
          v67 = *((_WORD *)a1 + 56);
          v66 = *((_WORD *)a1 + 55);
          v65 = *((_WORD *)a1 + 54);
          v80 = *((_DWORD *)a1 + 24);
          v64 = *((_WORD *)a1 + 28);
          v63 = *((_WORD *)a1 + 52);
          v79 = *(_DWORD *)(v14 + 292);
          v78 = v10[3];
          v77 = v10[5];
          v76 = v10[4];
          v75 = v10[2];
          v62 = *((_WORD *)a1 + 35);
          LOBYTE(v100) = *((_BYTE *)a1 + 72);
          v61 = *((_WORD *)a1 + 34);
          v60 = *((_WORD *)a1 + 33);
          v59 = *((_WORD *)a1 + 32);
          v58 = *((_WORD *)a1 + 31);
          v57 = *((_WORD *)a1 + 22);
          v56 = *((_WORD *)a1 + 30);
          v55 = *((_WORD *)a1 + 29) + v56;
          v54 = *((_WORD *)a1 + 27);
          v53 = *((_WORD *)a1 + 26);
          v52 = *((_WORD *)a1 + 25) + v53;
          v51 = *((_WORD *)a1 + 24);
          v50 = *((_WORD *)a1 + 23) + v51;
          v49 = *((_WORD *)a1 + 21);
          v48 = *((_WORD *)a1 + 20);
          v47 = *((_WORD *)a1 + 19);
          v46 = *((_WORD *)a1 + 18);
          v45 = *((_WORD *)a1 + 17);
          v44 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v85 = *((_QWORD *)a1 + 20);
          WORD4(v85) = *((_WORD *)a1 + 84);
          LOWORD(v27) = *((_WORD *)a1 + 70);
          v83 = v13;
          v43 = v27;
          v74 = *((_DWORD *)a1 + 38);
          v69 = *((_DWORD *)a1 + 36);
          v73 = *((unsigned __int16 *)a1 + 51);
          v72 = *((_DWORD *)a1 + 33);
          v71 = *((_DWORD *)a1 + 34);
          v70 = v15;
          v93 = v23;
          v92 = v25;
          v96 = v25;
          v101 = 1;
          v102 = 1;
          v91 = v25;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            0xFFFFFFLL,
            byte_14027FF9C,
            v22,
            v23,
            &v91,
            (__int64)&v102,
            (__int64)&v101,
            &v96,
            &v92,
            (__int64)&v93,
            (__int64)&v70,
            (__int64)&v71,
            (__int64)&v72,
            (__int64)&v73,
            (__int64)&v69,
            (__int64)&v74,
            (__int64)&v43,
            (__int64 *)&v85,
            (__int64)&v44,
            (__int64)&v45,
            (__int64)&v46,
            (__int64)&v47,
            (__int64)&v48,
            (__int64)&v49,
            (__int64)&v50,
            (__int64)&v51,
            (__int64)&v52,
            (__int64)&v53,
            (__int64)&v54,
            (__int64)&v55,
            (__int64)&v56,
            (__int64)&v57,
            (__int64)&v58,
            (__int64)&v59,
            (__int64)&v60,
            (__int64)&v61,
            (__int64)&v100,
            (__int64)&v62,
            (__int64)&v75,
            (__int64)&v76,
            (__int64)&v77,
            (__int64)&v78,
            (__int64)&v79,
            (__int64)&v63,
            (__int64)&v64,
            (__int64)&v80,
            (__int64)&v65,
            (__int64)&v66,
            (__int64)&v67,
            (__int64)v68,
            (__int64)&v81,
            (__int64)&v82,
            (__int64)&v94,
            (__int64)&v83,
            (__int64)&v95,
            (__int64)v97);
        }
      }
      else
      {
        v29 = *((_QWORD *)a1 + 3);
        v84 = &word_14025E168;
        v30 = &word_14025E168;
        v31 = &word_14025E168;
        if ( *(_QWORD *)(v29 + 40) )
        {
          v32 = *(const WCHAR **)(v29 + 48);
          if ( *(_DWORD *)(v29 + 72) == 1 )
          {
            v84 = *(const WCHAR **)(v29 + 40);
            if ( v32 )
              v30 = v32;
          }
          else if ( v32 )
          {
            v31 = *(const WCHAR **)(v29 + 48);
          }
        }
        v33 = *((_OWORD *)a1 + 2);
        v87 = *((_DWORD *)a1 + 14);
        v34 = *((_QWORD *)a1 + 6);
        v35 = *((_WORD *)a1 + 30);
        v85 = v33;
        v88 = v35;
        v86 = v34;
        if ( !(unsigned int)OnlyCompositionMetrics(a1, &v85, v12, v17)
          && (unsigned int)dword_14029AF48 > 5
          && tlgKeywordOn((__int64)&dword_14029AF48, 0x800000000800LL) )
        {
          v99[0] = v100;
          v91 = *((_QWORD *)a1 + 2);
          v40 = *((_DWORD *)a1 + 31) & 0xFFFFFF;
          v98 = 0x2000000LL;
          v89 = v40;
          v41 = *((_DWORD *)a1 + 29) & 0xFFFFFF;
          v90 = v13;
          v70 = v41;
          v43 = *((_WORD *)a1 + 53);
          v44 = *((_WORD *)a1 + 56);
          v45 = *((_WORD *)a1 + 55);
          v46 = *((_WORD *)a1 + 54);
          v71 = *((_DWORD *)a1 + 24);
          v47 = *((_WORD *)a1 + 28);
          v48 = *((_WORD *)a1 + 52);
          v72 = *(_DWORD *)(v14 + 292);
          v73 = v10[3];
          v69 = v10[5];
          v74 = v10[4];
          v75 = v10[2];
          v49 = *((_WORD *)a1 + 35);
          LOBYTE(v100) = *((_BYTE *)a1 + 72);
          v50 = *((_WORD *)a1 + 34);
          v51 = *((_WORD *)a1 + 33);
          v52 = *((_WORD *)a1 + 32);
          v53 = *((_WORD *)a1 + 31);
          v54 = *((_WORD *)a1 + 22);
          v55 = *((_WORD *)a1 + 30);
          v56 = *((_WORD *)a1 + 29) + v55;
          v57 = *((_WORD *)a1 + 27);
          v58 = *((_WORD *)a1 + 26);
          v59 = *((_WORD *)a1 + 25) + v58;
          v60 = *((_WORD *)a1 + 24);
          v61 = *((_WORD *)a1 + 23) + v60;
          v62 = *((_WORD *)a1 + 21);
          v63 = *((_WORD *)a1 + 20);
          v64 = *((_WORD *)a1 + 19);
          v65 = *((_WORD *)a1 + 18);
          v66 = *((_WORD *)a1 + 17);
          v67 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v85 = *((_QWORD *)a1 + 20);
          WORD4(v85) = *((_WORD *)a1 + 84);
          v68[0] = *((_WORD *)a1 + 70);
          v76 = *((_DWORD *)a1 + 38);
          v77 = *((_DWORD *)a1 + 36);
          v78 = *((unsigned __int16 *)a1 + 51);
          v79 = *((_DWORD *)a1 + 33);
          v80 = *((_DWORD *)a1 + 34);
          v92 = (__int64)a1 + 76;
          v93 = (__int64)a1 + 76;
          v82 = *(_DWORD *)(v38 + 64);
          v83 = *(_DWORD *)(v38 + 68);
          v81 = v15;
          v96 = v37;
          v101 = 1;
          v102 = 1;
          v42[0] = 1;
          v94 = v31;
          v95 = v30;
          v97[0] = v39;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            0xFFFFFFLL,
            (__int64)&unk_1402803FE,
            v36,
            v37,
            v97,
            &v84,
            &v95,
            &v94,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)v42,
            (__int64)&v102,
            (__int64)&v101,
            &v93,
            &v92,
            (__int64)&v96,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v79,
            (__int64)&v78,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)v68,
            (__int64 *)&v85,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55,
            (__int64)&v54,
            (__int64)&v53,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v100,
            (__int64)&v49,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v69,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v71,
            (__int64)&v46,
            (__int64)&v45,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v70,
            (__int64)&v89,
            (__int64)&v91,
            (__int64)&v90,
            (__int64)v99,
            (__int64)&v98);
        }
      }
    }
  }
}
