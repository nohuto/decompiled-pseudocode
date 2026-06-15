/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14008D350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x140001B9C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  _DWORD **v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  struct _FILETIME v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF
  struct _FILETIME v17; // [rsp+A0h] [rbp+20h] BYREF
  struct _FILETIME v18; // [rsp+A8h] [rbp+28h] BYREF
  int v19; // [rsp+B0h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = (__int64 *)*((_QWORD *)this + 3);
    v18 = SystemTimeAsFileTime;
    v17 = SystemTimeAsFileTime;
    v4 = *v3;
    v17 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v18 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = (_DWORD **)*((_QWORD *)this + 4);
    v13 = (__int64)v18;
    v14 = v17;
    v6 = *v5;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *v6 > 3u )
      {
        if ( tlgKeywordOn((__int64)v6, 0x200000000001LL) )
        {
          v15 = *((_QWORD *)this + 8);
          v17.dwLowDateTime = *((_DWORD *)this + 14);
          v18.dwLowDateTime = *((_DWORD *)this + 13);
          v19 = *((_DWORD *)this + 12);
          v16 = *((_QWORD *)this + 5);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v7,
            (__int64)&unk_1400B106F,
            v8,
            v9,
            &v16,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v15);
        }
      }
    }
    else
    {
      if ( *v6 > 3u && tlgKeywordOn((__int64)v6, 0x400000000001LL) )
      {
        v16 = *((_QWORD *)this + 8);
        v17.dwLowDateTime = *((_DWORD *)this + 14);
        v18.dwLowDateTime = *((_DWORD *)this + 13);
        v19 = *((_DWORD *)this + 12);
        v15 = v13;
        v13 = *((_QWORD *)this + 5);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v10,
          (__int64)&unk_1400B1116,
          v11,
          v12,
          &v13,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
