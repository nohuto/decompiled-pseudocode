/*
 * XREFs of HUBREG_DeleteUxdSubKeys @ 0x140086B68
 * Callers:
 *     HUBREG_UxdShutdown @ 0x14008BFB0 (HUBREG_UxdShutdown.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSubKeys(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // r15
  int v7; // edx
  __int64 Pool2; // rbx
  ULONG v9; // edi
  ULONG v10; // esi
  ULONG ResultLength; // [rsp+40h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-88h] BYREF

  memset(v14, 0, 0x44uLL);
  ResultLength = 0;
  DestinationString = 0LL;
  v6 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1856))(
                 WdfDriverGlobals,
                 a3);
  Pool2 = ExAllocatePool2(64LL, 42LL, 1748191317LL);
  if ( Pool2 )
  {
    v9 = 0;
    while ( 1 )
    {
      *(_OWORD *)Pool2 = 0LL;
      *(_OWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_WORD *)(Pool2 + 40) = 0;
      v10 = v9;
      if ( ZwEnumerateValueKey(v6, v9, KeyValueBasicInformation, (PVOID)Pool2, 0x2Au, &ResultLength) < 0 )
        break;
      ++v9;
      if ( *(_DWORD *)(Pool2 + 4) == 3 )
      {
        *(_WORD *)(Pool2 + 36) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(Pool2 + 12));
        memset(v14, 0, 0x44uLL);
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               a3,
               &DestinationString,
               68LL,
               v14,
               0LL,
               0LL) < 0 )
          break;
        if ( v14[9] == 1 || (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
        {
          if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
                 WdfDriverGlobals,
                 a3,
                 &DestinationString) < 0 )
            break;
          v9 = v10;
        }
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x68334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v7, 3, 113, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids);
  }
  return 0LL;
}
