/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140031BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x140031E68 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal_ea_140031E68.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  ULONGLONG TickCount64; // rbx
  int v3; // r9d
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // [rsp+80h] [rbp+17h] BYREF
  int v13; // [rsp+84h] [rbp+1Bh] BYREF
  int v14; // [rsp+88h] [rbp+1Fh] BYREF
  int v15; // [rsp+8Ch] [rbp+23h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+90h] [rbp+27h] BYREF
  __int64 v17; // [rsp+98h] [rbp+2Fh] BYREF
  _FILETIME v18; // [rsp+A0h] [rbp+37h] BYREF
  _QWORD v19[3]; // [rsp+A8h] [rbp+3Fh] BYREF
  _FILETIME v20; // [rsp+D0h] [rbp+67h] BYREF
  _FILETIME v21; // [rsp+D8h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF
  int v23; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    v21 = SystemTimeAsFileTime;
    v20 = SystemTimeAsFileTime;
    v5 = *v4;
    v20 = (_FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = 10000 * (v5 - TickCount64);
    v21 = (_FILETIME)(v6 + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = (__int64 *)*((_QWORD *)this + 4);
    v17 = v6 + *(_QWORD *)&SystemTimeAsFileTime;
    v18 = v20;
    v8 = *v7;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v8 > 3u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v8, 2LL) )
        {
          v20.dwLowDateTime = *((_DWORD *)this + 19);
          v21.dwLowDateTime = *((_DWORD *)this + 18);
          v22 = *((_DWORD *)this + 17);
          v23 = *((_DWORD *)this + 16);
          v12 = *((_DWORD *)this + 15);
          v13 = *((_DWORD *)this + 14);
          v14 = *((_DWORD *)this + 13);
          v15 = *((_DWORD *)this + 12);
          v19[0] = *((_QWORD *)this + 5);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            (unsigned int)&unk_1400B0E7B,
            v10,
            v11,
            (__int64)v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20);
        }
      }
    }
    else if ( *(_DWORD *)v8 > 3u
           && (*(_QWORD *)(v8 + 16) & 0x400000000002LL) != 0
           && (*(_QWORD *)(v8 + 24) & 0x400000000002LL) == *(_QWORD *)(v8 + 24) )
    {
      v20.dwLowDateTime = *((_DWORD *)this + 19);
      v21.dwLowDateTime = *((_DWORD *)this + 18);
      v22 = *((_DWORD *)this + 17);
      v23 = *((_DWORD *)this + 16);
      v15 = *((_DWORD *)this + 15);
      v14 = *((_DWORD *)this + 14);
      v13 = *((_DWORD *)this + 13);
      v12 = *((_DWORD *)this + 12);
      v19[0] = v17;
      v17 = *((_QWORD *)this + 5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_1400B0CC8,
        v6,
        v3,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)v19,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
  }
}
