/*
 * XREFs of ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x1801910E4
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18018FF90 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x180001764 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180092E64 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1802286F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeueFrame(struct CManipulationFrame *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // edi
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __int128 v17; // xmm0
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r8
  int v20; // ecx
  __m128i v21; // [rsp+80h] [rbp-80h] BYREF
  __m128i v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int128 v28; // [rsp+F0h] [rbp-10h]
  __int128 v29; // [rsp+100h] [rbp+0h]
  __int128 v30; // [rsp+110h] [rbp+10h]
  __int128 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+130h] [rbp+30h]
  int v33; // [rsp+168h] [rbp+68h] BYREF
  int v34; // [rsp+170h] [rbp+70h] BYREF
  __int64 v35; // [rsp+178h] [rbp+78h] BYREF

  if ( InputTraceLogging::Enabled(2048, 0) )
  {
    v2 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL) )
    {
      v5 = *((_DWORD *)a1 + 4);
      v6 = *((_OWORD *)a1 + 2);
      v7 = *((_OWORD *)a1 + 3);
      v34 = *((_DWORD *)a1 + 6);
      v33 = v5;
      v24 = v6;
      v8 = *((_OWORD *)a1 + 4);
      v25 = v7;
      v9 = *((_OWORD *)a1 + 5);
      v26 = v8;
      v10 = *((_OWORD *)a1 + 6);
      v27 = v9;
      v11 = *((_OWORD *)a1 + 7);
      v28 = v10;
      v12 = *((_OWORD *)a1 + 8);
      v29 = v11;
      v13 = *((_OWORD *)a1 + 10);
      v30 = v12;
      v31 = *((_OWORD *)a1 + 9);
      v32 = v13;
      v35 = v24;
      v21.m128i_i64[0] = *((_QWORD *)a1 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1803CB364,
        v3,
        v4,
        (__int64)&v21,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    v14 = 0;
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v15 = 248LL * v14;
        v16 = *(__m128i *)((char *)a1 + v15 + 400);
        v21 = *(__m128i *)((char *)a1 + v15 + 368);
        v17 = *(_OWORD *)((char *)a1 + v15 + 448);
        v22 = v16;
        v23 = v17;
        v18 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v18 > 4u )
        {
          if ( (unsigned __int8)tlgKeywordOn(v18, 2048LL) )
          {
            v33 = *(_DWORD *)((char *)a1 + v15 + 600);
            v20 = *(_DWORD *)((char *)a1 + v15 + 560);
            LODWORD(v35) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
            v34 = v20;
            v21.m128i_i32[0] = _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
            v22.m128i_i64[0] = v23;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v19,
              (__int64)&unk_1803CB25C);
          }
        }
        ++v14;
      }
      while ( v14 != *((_DWORD *)a1 + 4) );
    }
  }
}
