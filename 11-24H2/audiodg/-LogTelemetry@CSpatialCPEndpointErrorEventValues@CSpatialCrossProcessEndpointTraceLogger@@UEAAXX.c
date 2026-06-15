/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14008D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x140001B9C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140031F80 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  _DWORD **v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  DWORD v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _FILETIME v14; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+70h] [rbp-90h] BYREF
  struct _FILETIME v17; // [rsp+78h] [rbp-88h] BYREF
  struct _FILETIME v18; // [rsp+80h] [rbp-80h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  int v25; // [rsp+CCh] [rbp-34h]
  struct _FILETIME *v26; // [rsp+D0h] [rbp-30h]
  int v27; // [rsp+D8h] [rbp-28h]
  int v28; // [rsp+DCh] [rbp-24h]
  struct _FILETIME *v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+ECh] [rbp-14h]
  struct _FILETIME *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  struct _FILETIME *v35; // [rsp+100h] [rbp+0h]
  int v36; // [rsp+108h] [rbp+8h]
  int v37; // [rsp+10Ch] [rbp+Ch]
  int *v38; // [rsp+110h] [rbp+10h]
  int v39; // [rsp+118h] [rbp+18h]
  int v40; // [rsp+11Ch] [rbp+1Ch]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = (__int64 *)*((_QWORD *)this + 3);
    v14 = SystemTimeAsFileTime;
    v15 = SystemTimeAsFileTime;
    v4 = *v3;
    v15 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v14 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = (_DWORD **)*((_QWORD *)this + 4);
    v17 = v14;
    v18 = v15;
    v6 = *v5;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *v6 > 3u )
      {
        if ( tlgKeywordOn((__int64)v6, 0x200000000000LL) )
        {
          v8 = *((_DWORD *)this + 14);
          v40 = 0;
          v37 = 0;
          v34 = 0;
          v31 = 0;
          v28 = 0;
          v25 = 0;
          v16 = v8;
          v14.dwLowDateTime = *((_DWORD *)this + 13);
          v9 = *((_DWORD *)this + 12);
          v38 = &v16;
          v15.dwLowDateTime = v9;
          v35 = &v14;
          v32 = &v15;
          v10 = *((_QWORD *)this + 5);
          v39 = 4;
          v36 = 4;
          v33 = 4;
          v29 = &v17;
          v23 = v10;
          v30 = 8;
          v26 = &v18;
          v27 = 8;
          v24 = 16;
          tlgWriteTransfer_EventWriteTransfer(v7, byte_1400B11BD, 0LL, 0LL, 8u, &v22);
        }
      }
    }
    else if ( *v6 > 3u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v15.dwLowDateTime = *((_DWORD *)this + 14);
      v14.dwLowDateTime = *((_DWORD *)this + 13);
      v16 = *((_DWORD *)this + 12);
      v21 = *((_QWORD *)this + 5);
      v20 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v11,
        (__int64)&unk_1400B125A,
        v12,
        v13,
        &v21,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v20);
    }
  }
}
