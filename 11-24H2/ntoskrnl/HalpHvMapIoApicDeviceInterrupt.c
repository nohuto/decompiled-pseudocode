/*
 * XREFs of HalpHvMapIoApicDeviceInterrupt @ 0x140B4E878
 * Callers:
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvMapIoApicDeviceInterrupt(char a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-40h]
  __int128 v8; // [rsp+48h] [rbp-28h] BYREF
  __int128 v9; // [rsp+58h] [rbp-18h]

  v7 = 0x8000000000000000uLL;
  LOBYTE(v7) = a1;
  v3 = *(_DWORD *)(a2 + 20);
  v8 = 0LL;
  v9 = 0LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        LODWORD(v8) = 2;
    }
    else
    {
      LODWORD(v8) = 4;
    }
  }
  else
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 48);
  }
  DWORD2(v8) = 1;
  DWORD1(v8) = *(_DWORD *)(a2 + 8) == 0;
  result = guard_dispatch_icall_no_overrides(v7, &v8);
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
