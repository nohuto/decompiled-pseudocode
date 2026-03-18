/*
 * XREFs of ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x1801AF25C
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1801AE108 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x180001764 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180137A84 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180234030 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeueFrame(struct CManipulationFrame *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  __int64 v16; // rsi
  __m128i v17; // xmm1
  __int128 v18; // xmm0
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // ecx
  __m128i v23; // [rsp+80h] [rbp-80h] BYREF
  __m128i v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int128 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+100h] [rbp+0h]
  __int128 v32; // [rsp+110h] [rbp+10h]
  __int128 v33; // [rsp+120h] [rbp+20h]
  __int128 v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+168h] [rbp+68h] BYREF
  int v36; // [rsp+170h] [rbp+70h] BYREF
  __int64 v37; // [rsp+178h] [rbp+78h] BYREF

  if ( InputTraceLogging::Enabled(2048, 0) )
  {
    v2 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL, v2, v3) )
    {
      v6 = *((_DWORD *)a1 + 4);
      v7 = *((_OWORD *)a1 + 2);
      v8 = *((_OWORD *)a1 + 3);
      v36 = *((_DWORD *)a1 + 6);
      v35 = v6;
      v26 = v7;
      v9 = *((_OWORD *)a1 + 4);
      v27 = v8;
      v10 = *((_OWORD *)a1 + 5);
      v28 = v9;
      v11 = *((_OWORD *)a1 + 6);
      v29 = v10;
      v12 = *((_OWORD *)a1 + 7);
      v30 = v11;
      v13 = *((_OWORD *)a1 + 8);
      v31 = v12;
      v14 = *((_OWORD *)a1 + 10);
      v32 = v13;
      v33 = *((_OWORD *)a1 + 9);
      v34 = v14;
      v37 = v26;
      v23.m128i_i64[0] = *((_QWORD *)a1 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_1803D627D,
        v4,
        v5,
        (__int64)&v23,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
    v15 = 0;
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v16 = 248LL * v15;
        v17 = *(__m128i *)((char *)a1 + v16 + 400);
        v23 = *(__m128i *)((char *)a1 + v16 + 368);
        v18 = *(_OWORD *)((char *)a1 + v16 + 448);
        v24 = v17;
        v25 = v18;
        v19 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v19 > 4u )
        {
          if ( (unsigned __int8)tlgKeywordOn(v19, 2048LL, v19, v20) )
          {
            v35 = *(_DWORD *)((char *)a1 + v16 + 600);
            v22 = *(_DWORD *)((char *)a1 + v16 + 560);
            LODWORD(v37) = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12));
            v36 = v22;
            v23.m128i_i32[0] = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
            v24.m128i_i64[0] = v25;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v21,
              (__int64)&unk_1803D61D4);
          }
        }
        ++v15;
      }
      while ( v15 != *((_DWORD *)a1 + 4) );
    }
  }
}
