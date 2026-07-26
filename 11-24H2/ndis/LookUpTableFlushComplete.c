/*
 * XREFs of LookUpTableFlushComplete @ 0x14014EE64
 * Callers:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1400DC5D4 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14014F280 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14014F310 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140166AB0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x1400048BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     FlushLookUpTableBucket @ 0x1400E5D8C (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     UpdateInternalStatsOnFlush @ 0x14014F38C (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  char v10; // [rsp+128h] [rbp-80h] BYREF
  char v11; // [rsp+129h] [rbp-7Fh] BYREF
  char v12; // [rsp+12Ah] [rbp-7Eh] BYREF
  char v13; // [rsp+12Bh] [rbp-7Dh] BYREF
  char v14; // [rsp+12Ch] [rbp-7Ch] BYREF
  char v15; // [rsp+12Dh] [rbp-7Bh] BYREF
  char v16; // [rsp+12Eh] [rbp-7Ah] BYREF
  char v17; // [rsp+12Fh] [rbp-79h] BYREF
  char v18; // [rsp+130h] [rbp-78h] BYREF
  _BYTE v19[3]; // [rsp+131h] [rbp-77h] BYREF
  int v20; // [rsp+134h] [rbp-74h] BYREF
  int v21; // [rsp+138h] [rbp-70h] BYREF
  int v22; // [rsp+13Ch] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+140h] [rbp-68h] BYREF
  __int64 v24; // [rsp+148h] [rbp-60h] BYREF
  __int64 v25; // [rsp+150h] [rbp-58h] BYREF
  __int64 v26; // [rsp+158h] [rbp-50h] BYREF
  __int64 v27; // [rsp+160h] [rbp-48h] BYREF
  __int64 v28; // [rsp+168h] [rbp-40h] BYREF
  __int64 v29; // [rsp+170h] [rbp-38h] BYREF
  __int64 v30; // [rsp+178h] [rbp-30h] BYREF
  __int128 *v31; // [rsp+180h] [rbp-28h] BYREF
  __int64 v32; // [rsp+188h] [rbp-20h] BYREF
  const wchar_t *v33; // [rsp+190h] [rbp-18h] BYREF
  __int16 v34; // [rsp+198h] [rbp-10h]
  const wchar_t *v35; // [rsp+1A0h] [rbp-8h] BYREF
  __int16 v36; // [rsp+1A8h] [rbp+0h]
  const wchar_t *v37; // [rsp+1B0h] [rbp+8h] BYREF
  __int16 v38; // [rsp+1B8h] [rbp+10h]
  const wchar_t *v39; // [rsp+1C0h] [rbp+18h] BYREF
  __int16 v40; // [rsp+1C8h] [rbp+20h]
  const wchar_t *v41; // [rsp+1D0h] [rbp+28h] BYREF
  __int16 v42; // [rsp+1D8h] [rbp+30h]
  const wchar_t *v43; // [rsp+1E0h] [rbp+38h] BYREF
  __int16 v44; // [rsp+1E8h] [rbp+40h]
  const wchar_t *v45; // [rsp+1F0h] [rbp+48h] BYREF
  __int16 v46; // [rsp+1F8h] [rbp+50h]
  const wchar_t *v47; // [rsp+200h] [rbp+58h] BYREF
  __int16 v48; // [rsp+208h] [rbp+60h]
  const wchar_t *v49; // [rsp+210h] [rbp+68h] BYREF
  __int16 v50; // [rsp+218h] [rbp+70h]
  __int64 v51; // [rsp+240h] [rbp+98h]
  __int128 v52; // [rsp+248h] [rbp+A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+C8h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( (unsigned int)dword_14011A900 > 5 && tlgKeywordOn((__int64)&dword_14011A900, 0x200000000000LL) )
      {
        v10 = 4;
        v36 = 42;
        v33 = L"SummaryCount";
        v34 = 24;
        v23 = *(unsigned int *)(a1 + 324);
        v35 = L"NumLargeEventFailures";
        v24 = *(unsigned int *)(a1 + 320);
        v37 = L"NumAllocationFailures";
        v25 = *(unsigned int *)(a1 + 316);
        v39 = L"NumBucketLimitReached";
        v26 = *(unsigned int *)(a1 + 312);
        v41 = L"MinEntriesFlushed";
        v27 = *(unsigned int *)(a1 + 308);
        v43 = L"MaxEntriesFlushed";
        v45 = L"TotalEntriesFlushed";
        v46 = 38;
        v29 = *(unsigned int *)(a1 + 304);
        v47 = L"MaxEntriesStored";
        v30 = *(_QWORD *)(a1 + 296);
        v49 = L"NumFlushes";
        v50 = 20;
        v7 = *(_QWORD *)(a1 + 344);
        v38 = 42;
        v40 = 42;
        v20 = 1;
        v11 = 4;
        v12 = 4;
        v13 = 4;
        v14 = 4;
        v15 = 4;
        v16 = 4;
        v28 = v5;
        v17 = 4;
        v18 = 4;
        v42 = 34;
        v44 = 34;
        v8 = *(_QWORD *)(v7 + 8);
        v31 = &v52;
        v9 = *(_OWORD *)(v8 - 16);
        v21 = -1;
        v48 = 32;
        v52 = v9;
        v19[0] = 0;
        v22 = 300;
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v8,
          (__int64)&unk_140103380,
          v5,
          v6,
          (__int64)&v32,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)v19,
          (__int64 *)&v31,
          (__int64 *)&v49,
          (__int64)&v30,
          (__int64)&v18,
          (__int64 *)&v47,
          (__int64)&v29,
          (__int64)&v17,
          (__int64 *)&v45,
          (__int64)&v28,
          (__int64)&v16,
          (__int64 *)&v43,
          (__int64)&v27,
          (__int64)&v15,
          (__int64 *)&v41,
          (__int64)&v26,
          (__int64)&v14,
          (__int64 *)&v39,
          (__int64)&v25,
          (__int64)&v13,
          (__int64 *)&v37,
          (__int64)&v24,
          (__int64)&v12,
          (__int64 *)&v35,
          (__int64)&v23,
          (__int64)&v11,
          (__int64 *)&v33,
          (__int64)&v20,
          (__int64)&v10);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v51 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v51;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}
