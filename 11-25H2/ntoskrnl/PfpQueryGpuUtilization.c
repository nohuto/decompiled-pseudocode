/*
 * XREFs of PfpQueryGpuUtilization @ 0x14091D1F8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  int v5; // rax^4
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v7; // r10d
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  int SessionId; // [rsp+70h] [rbp+8h] BYREF

  DWORD1(v10) = 0;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v9 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  v5 = HIDWORD(**(_QWORD **)(a1 + 16));
  if ( (_DWORD)v9 != 1 )
    return 3221225561LL;
  SessionId = HIDWORD(**(_QWORD **)(a1 + 16));
  if ( v5 == -1 )
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v10 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(25, (__int64)&v10, 1, (__int64)&SessionId) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    result = ExCallCallBack(Win32Callouts, v7, &v10);
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result >= 0 )
  {
    *((_QWORD *)&v9 + 1) = v11;
    *(_OWORD *)*(_QWORD *)(a1 + 16) = v9;
    *a3 = 16;
    return 0LL;
  }
  return result;
}
