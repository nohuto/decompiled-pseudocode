/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x140044A88
 * Callers:
 *     CheckUSBFnConfiguration @ 0x140043CD4 (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1400443F0 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x140044580 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        _DWORD a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rdi
  const wchar_t *v7; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  v7 = a6;
  v10 = a2;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      a4,
      v14,
      v13,
      va,
      4LL,
      0LL);
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v11 = 2 * v6 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v7 = L"NULL";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, v10, 1LL, &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids, v17, v7, v11, va);
}
