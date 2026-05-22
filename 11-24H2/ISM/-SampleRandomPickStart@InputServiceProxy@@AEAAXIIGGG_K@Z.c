/*
 * XREFs of ?SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z @ 0x18015E7F0
 * Callers:
 *     ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x18015EA40 (-SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@443@Z @ 0x180008594 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$01@@U2@U2@.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?MeasureDurationinMS@LatencySampleStartData@@QEAAN_K@Z @ 0x18015E6C0 (-MeasureDurationinMS@LatencySampleStartData@@QEAAN_K@Z.c)
 */

void __fastcall InputServiceProxy::SampleRandomPickStart(
        InputServiceProxy *this,
        int a2,
        int a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int64 a7)
{
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // [rsp+60h] [rbp-1h] BYREF
  int v19; // [rsp+64h] [rbp+3h] BYREF
  int v20; // [rsp+68h] [rbp+7h] BYREF
  int v21; // [rsp+6Ch] [rbp+Bh] BYREF
  int v22; // [rsp+70h] [rbp+Fh] BYREF
  LARGE_INTEGER v23; // [rsp+78h] [rbp+17h] BYREF
  __int64 v24; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+88h] [rbp+27h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp+4Fh] BYREF

  if ( !*(_QWORD *)(*((_QWORD *)this + 7) + 16LL) )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    *(LARGE_INTEGER *)(*((_QWORD *)this + 7) + 16LL) = PerformanceCount;
  }
  v11 = *((_QWORD *)this + 7);
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 + 1 >= v12 )
  {
    *(_QWORD *)(v11 + 8) = v12 + 1;
    v13 = rand();
    v14 = *((_QWORD *)this + 7);
    if ( !((unsigned __int64)v13 % *(_QWORD *)(v14 + 8)) )
    {
      *(_BYTE *)v14 = 1;
      *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) = a2;
      *(_DWORD *)(*((_QWORD *)this + 7) + 28LL) = a3;
      *(_WORD *)(*((_QWORD *)this + 7) + 32LL) = a4;
      *(_WORD *)(*((_QWORD *)this + 7) + 34LL) = a5;
      *(_WORD *)(*((_QWORD *)this + 7) + 36LL) = a6;
      *(_QWORD *)(*((_QWORD *)this + 7) + 40LL) = a7;
    }
  }
  v23.QuadPart = 0LL;
  QueryPerformanceCounter(&v23);
  if ( LatencySampleStartData::MeasureDurationinMS(*((LatencySampleStartData **)this + 7), v23.QuadPart) > 60000.0 )
  {
    if ( (unsigned int)dword_18024E328 > 5 && tlgKeywordOn((__int64)&dword_18024E328, 0x400000000001LL) )
    {
      v17 = *((_QWORD *)this + 7);
      v24 = *(_QWORD *)(v17 + 40);
      v18 = *(unsigned __int16 *)(v17 + 34);
      v19 = *(unsigned __int16 *)(v17 + 36);
      LOWORD(PerformanceCount.LowPart) = *(_WORD *)(v17 + 32);
      v20 = *(_DWORD *)(v17 + 28);
      v21 = *(_DWORD *)(v17 + 24);
      v22 = 2;
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v17,
        (__int64)&unk_180222F7C,
        v15,
        v16,
        (__int64)&v25,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&PerformanceCount,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v24);
    }
    *(_QWORD *)(*((_QWORD *)this + 7) + 8LL) = 0LL;
    *(LARGE_INTEGER *)(*((_QWORD *)this + 7) + 16LL) = v23;
  }
}
