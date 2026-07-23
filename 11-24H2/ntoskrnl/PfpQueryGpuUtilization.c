/*
 * XREFs of PfpQueryGpuUtilization @ 0x1408F4FC8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  int v5; // rax^4
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v7; // r10d
  __int64 v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  int SessionId; // [rsp+70h] [rbp+8h] BYREF

  DWORD1(v11) = 0;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v10 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  v5 = HIDWORD(**(_QWORD **)(a1 + 16));
  if ( (_DWORD)v10 != 1 )
    return 3221225561LL;
  SessionId = HIDWORD(**(_QWORD **)(a1 + 16));
  if ( v5 == -1 )
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(25, (__int64)&v11, 1, (__int64)&SessionId) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    result = ExCallCallBack((signed __int64 *)Win32Callouts, v7, (__int64)&v11, v8);
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result >= 0 )
  {
    *((_QWORD *)&v10 + 1) = v12;
    *(_OWORD *)*(_QWORD *)(a1 + 16) = v10;
    *a3 = 16;
    return 0LL;
  }
  return result;
}
