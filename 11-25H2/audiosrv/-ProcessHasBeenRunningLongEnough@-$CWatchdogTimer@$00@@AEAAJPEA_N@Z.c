/*
 * XREFs of ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800B2180
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800B1AF4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18004F238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18005FC64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  int v7; // ecx
  double v8; // xmm6_8
  _DWORD *v9; // rcx
  double v10; // xmm6_8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  double v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct _FILETIME UserTime; // [rsp+90h] [rbp+20h] BYREF
  struct _FILETIME CreationTime; // [rsp+98h] [rbp+28h] BYREF

  CreationTime = 0LL;
  UserTime = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A7,
             (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
             v5);
  v14 = 0LL;
  GetSystemTimePreciseAsFileTime(&v14);
  if ( v14 >= *(_QWORD *)&CreationTime )
  {
    v7 = v14 - CreationTime.dwLowDateTime;
    if ( (__int64)(v14 - *(_QWORD *)&CreationTime) < 0 )
      v8 = (double)(int)(v7 & 1 | ((v14 - *(_QWORD *)&CreationTime) >> 1))
         + (double)(int)(v7 & 1 | ((v14 - *(_QWORD *)&CreationTime) >> 1));
    else
      v8 = (double)v7;
    v9 = *(_DWORD **)(a1 + 8);
    v10 = v8 / 10000000.0;
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 1LL) )
    {
      v15 = v10;
      v16 = v13;
      v17 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v11,
        byte_18019DFCA,
        v12,
        v13,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15);
    }
    *a2 = v10 >= 300.0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1BE,
      (int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      (const char *)0x8000FFFFLL,
      (__int64)"Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      *(const char **)&CreationTime,
      v14);
    return 2147549183LL;
  }
}
