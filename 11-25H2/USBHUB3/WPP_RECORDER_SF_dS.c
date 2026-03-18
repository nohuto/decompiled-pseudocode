/*
 * XREFs of WPP_RECORDER_SF_dS @ 0x14000FC40
 * Callers:
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FD00 (HUBFDO_MapDvsecUsb4Hosts.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-58h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a7;
    if ( !a7 )
      v12 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
      32LL,
      &a6,
      4LL,
      v12,
      v11,
      0LL);
  }
  v13 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v13 = v7 == 0LL;
  }
  if ( v13 )
    v7 = L"NULL";
  LOWORD(v15) = 32;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v15, &a6, 4LL, v7);
}
