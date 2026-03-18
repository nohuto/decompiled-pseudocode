/*
 * XREFs of HalpHvMapIoApicDeviceInterrupt @ 0x140B3C838
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvMapIoApicDeviceInterrupt(char a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp-40h]

  v4 = 0x8000000000000000uLL;
  LOBYTE(v4) = a1;
  result = guard_dispatch_icall_no_overrides(v4);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 12) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = 0;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_DWORD *)(a2 + 24) = 8;
    *(_DWORD *)(a2 + 36) = 0;
  }
  return result;
}
