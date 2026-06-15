/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001FC34
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001F740 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5553@Z @ 0x18000143C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U1@.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001EE5C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180059EB4 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchAndWaitForADGStartup(CAudioDGProcess *this, unsigned __int8 a2)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v5; // r14
  unsigned int v6; // ebx
  int v7; // edi
  ULONGLONG v8; // rax
  int v9; // ecx
  double v10; // xmm6_8
  ULONGLONG v11; // rax
  double v12; // xmm6_8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+68h] [rbp+7h] BYREF
  unsigned int v18; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned int v19; // [rsp+70h] [rbp+Fh] BYREF
  int v20; // [rsp+74h] [rbp+13h] BYREF
  double v21; // [rsp+78h] [rbp+17h] BYREF
  __int64 v22[3]; // [rsp+80h] [rbp+1Fh] BYREF
  unsigned __int8 v23; // [rsp+D8h] [rbp+77h] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+7Fh] BYREF

  TickCount64 = GetTickCount64();
  v24 = 0;
  v5 = TickCount64;
  v6 = 0;
  v7 = CAudioDGProcess::LaunchADGProcess(this, a2);
  if ( v7 >= 0 )
    v6 = CAudioDGProcess::WaitForADGStartup(this, &v24);
  v8 = GetTickCount64();
  v9 = v8 - v5;
  if ( (__int64)(v8 - v5) < 0 )
  {
    v11 = v9 & 1 | ((v8 - v5) >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)v9;
  }
  v12 = v10 / 1000.0;
  v13 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v13 > 4u
    && (*(_QWORD *)(v13 + 16) & 0x200000000080LL) != 0
    && (*(_QWORD *)(v13 + 24) & 0x200000000080LL) == *(_QWORD *)(v13 + 24) )
  {
    v17 = *((_DWORD *)this + 24);
    v18 = v24;
    v21 = v12;
    v19 = v6;
    v20 = v7;
    v23 = a2;
    v22[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      (int)&unk_1801A8611,
      v14,
      v15,
      (__int64)v22,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v21);
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
