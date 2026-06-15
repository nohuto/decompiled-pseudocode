/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x18006E220
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180085CC0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x180046384 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18006E3B0 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x180114F60 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  LARGE_INTEGER v2; // rax
  int v3; // eax
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // [rsp+70h] [rbp+7h] BYREF
  int v8; // [rsp+74h] [rbp+Bh] BYREF
  int v9; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+17h] BYREF
  const WCHAR *v11; // [rsp+88h] [rbp+1Fh] BYREF
  const WCHAR *v12; // [rsp+90h] [rbp+27h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh] BYREF
  int v14; // [rsp+A0h] [rbp+37h]
  VolumeHardwareLogger *v15; // [rsp+D0h] [rbp+67h] BYREF
  int v16; // [rsp+D8h] [rbp+6Fh] BYREF
  int v17; // [rsp+E0h] [rbp+77h] BYREF
  int v18; // [rsp+E8h] [rbp+7Fh] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v15 = this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_12;
  VolumeHardwareLogger::CurrentVolumeLevel(this, &v13);
  if ( v14 == *((_DWORD *)this + 21) )
    goto LABEL_12;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v2 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v2;
    *((_QWORD *)this + 14) = v13;
    v3 = v14;
    *((_DWORD *)this + 30) = v14;
  }
  else
  {
    v3 = v14;
    if ( v14 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v13;
      *((_DWORD *)this + 30) = v3;
    }
    if ( v3 <= *((_DWORD *)this + 33) )
      goto LABEL_9;
  }
  *(_QWORD *)((char *)this + 124) = v13;
  *((_DWORD *)this + 33) = v3;
LABEL_9:
  v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v4 > 5u )
  {
    LODWORD(v15) = v14;
    v16 = HIDWORD(v13);
    v17 = v13;
    v18 = *((_DWORD *)this + 20);
    v7 = *((_DWORD *)this + 19);
    v8 = *((_DWORD *)this + 18);
    v6 = *((_QWORD *)this + 8);
    v9 = *(_DWORD *)(v6 + 72);
    v11 = *(const WCHAR **)(v6 + 64);
    v12 = *(const WCHAR **)(v6 + 56);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v4,
      (int)&unk_1801AE0B4,
      (__int64)v4,
      v5,
      &v12,
      &v11,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  *((_DWORD *)this + 21) = v14;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
