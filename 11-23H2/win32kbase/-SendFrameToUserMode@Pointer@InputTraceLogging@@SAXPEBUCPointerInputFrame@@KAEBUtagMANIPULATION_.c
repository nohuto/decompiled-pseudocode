/*
 * XREFs of ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C01D2D30
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444433AEBU?$_tlgWrapperByRef@$0BA@@@43444444@Z @ 0x1C00016D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U-$_.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C019D674 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToUserMode(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct tagMANIPULATION_INPUT_INFO *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  char v7; // cf
  unsigned int v8; // edi
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-78h] BYREF
  __int32 v28; // [rsp+E0h] [rbp-70h] BYREF
  __int32 v29; // [rsp+E4h] [rbp-6Ch] BYREF
  int v30; // [rsp+E8h] [rbp-68h] BYREF
  int v31; // [rsp+ECh] [rbp-64h] BYREF
  int v32; // [rsp+F0h] [rbp-60h] BYREF
  int v33; // [rsp+F4h] [rbp-5Ch] BYREF
  int v34; // [rsp+F8h] [rbp-58h] BYREF
  int v35; // [rsp+FCh] [rbp-54h] BYREF
  int v36; // [rsp+100h] [rbp-50h] BYREF
  int v37; // [rsp+104h] [rbp-4Ch] BYREF
  int v38; // [rsp+108h] [rbp-48h] BYREF
  __int64 v39; // [rsp+110h] [rbp-40h] BYREF
  __int64 v40; // [rsp+118h] [rbp-38h] BYREF
  __int64 v41; // [rsp+120h] [rbp-30h] BYREF
  __int64 v42; // [rsp+128h] [rbp-28h] BYREF
  __int64 v43; // [rsp+130h] [rbp-20h] BYREF
  __int64 v44; // [rsp+138h] [rbp-18h] BYREF
  __int64 v45; // [rsp+140h] [rbp-10h] BYREF
  __int128 v46; // [rsp+150h] [rbp+0h]
  __int128 v47; // [rsp+160h] [rbp+10h]
  __int128 v48; // [rsp+170h] [rbp+20h]
  __int128 v49; // [rsp+180h] [rbp+30h]
  __int128 v50; // [rsp+190h] [rbp+40h]
  __int128 v51; // [rsp+1A0h] [rbp+50h]
  __int128 v52; // [rsp+1B0h] [rbp+60h]
  __int128 v53; // [rsp+1C0h] [rbp+70h]
  __int128 v54; // [rsp+1D0h] [rbp+80h]
  __int128 v55; // [rsp+1E0h] [rbp+90h]
  __int128 v56; // [rsp+1F0h] [rbp+A0h]
  __int128 v57; // [rsp+200h] [rbp+B0h] BYREF
  __int128 v58; // [rsp+210h] [rbp+C0h]
  __m256i v59; // [rsp+220h] [rbp+D0h]

  if ( InputTraceLogging::Enabled(0) )
  {
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 32LL) )
    {
      v7 = *((_DWORD *)a3 + 38) & 1;
      LODWORD(v27) = v6;
      LODWORD(v26) = -v7;
      HIDWORD(v26) = *((_DWORD *)a3 + 37);
      HIDWORD(v27) = *(_DWORD *)(v5 + 40);
      v40 = *(_QWORD *)(v5 + 72);
      v39 = *(_QWORD *)(v5 + 216);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0289810,
        byte_1C025C0DB,
        v4,
        v5,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v27 + 4,
        (__int64)&v27,
        (__int64)&v26 + 4,
        (__int64)&v26);
    }
    v8 = 0;
    if ( *((_DWORD *)a3 + 37) )
    {
      do
      {
        v9 = (__int128 *)((char *)a3 + 240 * v8 + 160);
        v10 = v9[1];
        v46 = *v9;
        v11 = v9[2];
        v47 = v10;
        v12 = v9[3];
        v48 = v11;
        v13 = v9[4];
        v49 = v12;
        v14 = v9[5];
        v50 = v13;
        v15 = v9[6];
        v51 = v14;
        v16 = v9[7];
        v9 += 8;
        v52 = v15;
        v17 = *v9;
        v53 = v16;
        v18 = v9[1];
        v54 = v17;
        v19 = v9[2];
        v55 = v18;
        v20 = v9[3];
        v56 = v19;
        v21 = v9[4];
        v57 = v20;
        v22 = v9[5];
        v58 = v21;
        v23 = v9[6];
        *(_OWORD *)v59.m256i_i8 = v22;
        *(_OWORD *)&v59.m256i_u64[2] = v23;
        if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 32LL) )
        {
          v27 = *(__int64 *)((char *)&v59.m256i_i64[2] + 4);
          v26 = *(__int64 *)((char *)&v59.m256i_i64[1] + 4);
          v28 = v59.m256i_i32[2];
          v29 = v59.m256i_i32[0];
          v41 = *((_QWORD *)&v58 + 1);
          v30 = v58;
          v42 = (__int64)&v57;
          v43 = *((_QWORD *)&v56 + 1);
          v44 = v56;
          v31 = HIDWORD(v55);
          v32 = DWORD2(v55);
          v33 = DWORD1(v55);
          v34 = v55;
          v35 = HIDWORD(v48);
          v36 = DWORD2(v48);
          v37 = DWORD1(v48);
          v38 = v48;
          LODWORD(v39) = HIDWORD(v46);
          LODWORD(v40) = DWORD1(v46);
          v45 = v51;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0289810,
            (int)&unk_1C025BF89,
            v24,
            v25,
            (__int64)&v45,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v44,
            (__int64)&v43,
            &v42,
            (__int64)&v30,
            (__int64)&v41,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v26,
            (__int64)&v26 + 4,
            (__int64)&v27,
            (__int64)&v27 + 4);
        }
        ++v8;
      }
      while ( v8 != *((_DWORD *)a3 + 37) );
    }
  }
}
