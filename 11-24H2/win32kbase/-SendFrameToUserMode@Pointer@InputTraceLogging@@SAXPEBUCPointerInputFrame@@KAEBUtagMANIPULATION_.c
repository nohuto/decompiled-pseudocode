/*
 * XREFs of ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1401857E4
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140007DE4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444433AEBU?$_tlgWrapperByRef@$0BA@@@43444444@Z @ 0x140008520 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U-$_.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToUserMode(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct tagMANIPULATION_INPUT_INFO *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  char v8; // cf
  unsigned int v9; // edi
  __int128 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+D0h] [rbp-80h] BYREF
  int v28; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v29; // [rsp+DCh] [rbp-74h] BYREF
  int v30; // [rsp+E4h] [rbp-6Ch] BYREF
  int v31; // [rsp+E8h] [rbp-68h] BYREF
  int v32; // [rsp+ECh] [rbp-64h] BYREF
  int v33; // [rsp+F0h] [rbp-60h] BYREF
  int v34; // [rsp+F4h] [rbp-5Ch] BYREF
  int v35; // [rsp+F8h] [rbp-58h] BYREF
  int v36; // [rsp+FCh] [rbp-54h] BYREF
  int v37; // [rsp+100h] [rbp-50h] BYREF
  int v38; // [rsp+104h] [rbp-4Ch] BYREF
  int v39; // [rsp+108h] [rbp-48h] BYREF
  __int64 v40; // [rsp+110h] [rbp-40h] BYREF
  __int64 v41; // [rsp+118h] [rbp-38h] BYREF
  __int64 v42; // [rsp+120h] [rbp-30h] BYREF
  __int128 *v43; // [rsp+128h] [rbp-28h] BYREF
  __int64 v44; // [rsp+130h] [rbp-20h] BYREF
  __int64 v45; // [rsp+138h] [rbp-18h] BYREF
  __int64 v46; // [rsp+140h] [rbp-10h] BYREF
  __int128 v47; // [rsp+150h] [rbp+0h]
  __int128 v48; // [rsp+160h] [rbp+10h]
  __int128 v49; // [rsp+170h] [rbp+20h]
  __int128 v50; // [rsp+180h] [rbp+30h]
  __int128 v51; // [rsp+190h] [rbp+40h]
  __int128 v52; // [rsp+1A0h] [rbp+50h]
  __int128 v53; // [rsp+1B0h] [rbp+60h]
  __int128 v54; // [rsp+1C0h] [rbp+70h]
  __int128 v55; // [rsp+1D0h] [rbp+80h]
  __int128 v56; // [rsp+1E0h] [rbp+90h]
  __int128 v57; // [rsp+1F0h] [rbp+A0h]
  __int128 v58; // [rsp+200h] [rbp+B0h] BYREF
  __int128 v59; // [rsp+210h] [rbp+C0h]
  __int128 v60; // [rsp+220h] [rbp+D0h]
  __int128 v61; // [rsp+230h] [rbp+E0h]

  if ( InputTraceLogging::Enabled(32, 0) )
  {
    if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, v4) )
    {
      LODWORD(v27) = *((_DWORD *)a3 + 39);
      v8 = *((_DWORD *)a3 + 38) & 1;
      LODWORD(v29) = v7;
      HIDWORD(v27) = -v8;
      v28 = *((_DWORD *)a3 + 37);
      HIDWORD(v29) = *(_DWORD *)(v6 + 40);
      v41 = *(_QWORD *)(v6 + 72);
      v40 = *(_QWORD *)(v6 + 216);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027C172,
        v5,
        v6,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v29 + 4,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27 + 4,
        (__int64)&v27);
    }
    v9 = 0;
    if ( *((_DWORD *)a3 + 37) )
    {
      do
      {
        v10 = (__int128 *)((char *)a3 + 240 * v9 + 160);
        v11 = v10[1];
        v47 = *v10;
        v12 = v10[2];
        v48 = v11;
        v13 = v10[3];
        v49 = v12;
        v14 = v10[4];
        v50 = v13;
        v15 = v10[5];
        v51 = v14;
        v16 = v10[6];
        v52 = v15;
        v17 = v10[7];
        v10 += 8;
        v53 = v16;
        v18 = *v10;
        v54 = v17;
        v19 = v10[1];
        v55 = v18;
        v20 = v10[2];
        v56 = v19;
        v21 = v10[3];
        v57 = v20;
        v22 = v10[4];
        v58 = v21;
        v23 = v10[5];
        v59 = v22;
        v24 = v10[6];
        v60 = v23;
        v61 = v24;
        if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 32LL) )
        {
          v29 = *(_QWORD *)((char *)&v61 + 4);
          v28 = v61;
          v27 = *((_QWORD *)&v60 + 1);
          v30 = v60;
          v42 = *((_QWORD *)&v59 + 1);
          v31 = v59;
          v43 = &v58;
          v44 = *((_QWORD *)&v57 + 1);
          v45 = v57;
          v32 = HIDWORD(v56);
          v33 = DWORD2(v56);
          v34 = DWORD1(v56);
          v35 = v56;
          v36 = HIDWORD(v49);
          v37 = DWORD2(v49);
          v38 = DWORD1(v49);
          v39 = v49;
          LODWORD(v40) = HIDWORD(v47);
          LODWORD(v41) = DWORD1(v47);
          v46 = v52;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14029AE30,
            (__int64)&unk_14027C020,
            v25,
            v26,
            (__int64)&v46,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v45,
            (__int64)&v44,
            (__int64 *)&v43,
            (__int64)&v31,
            (__int64)&v42,
            (__int64)&v30,
            (__int64)&v27,
            (__int64)&v27 + 4,
            (__int64)&v28,
            (__int64)&v29,
            (__int64)&v29 + 4);
        }
        ++v9;
      }
      while ( v9 != *((_DWORD *)a3 + 37) );
    }
  }
}
