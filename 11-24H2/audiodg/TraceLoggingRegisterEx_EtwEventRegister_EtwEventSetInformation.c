/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x140046118
 * Callers:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1400460DC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(_QWORD *a1)
{
  _QWORD *v1; // rsi
  bool v2; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 4;
  v2 = a1[4] == 0LL;
  v7 = *(_OWORD *)(a1[1] - 16LL);
  if ( !v2 )
    __fastfail(5u);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v4 = ((__int64 (__fastcall *)(__int128 *, void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *), _QWORD *, _QWORD *))EtwEventRegister)(
         &v7,
         tlgEnableCallback,
         a1,
         v1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(*v1, 2LL, a1[1], *(unsigned __int16 *)a1[1], v7, *((_QWORD *)&v7 + 1));
  }
  return v5;
}
