/*
 * XREFs of HalpReadExtendedMcaRegistersAMD @ 0x1405410C8
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D35C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpReadExtendedMcaRegistersAMD(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    *(_QWORD *)(a4 + 72) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 80) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 88) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 96) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 104) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 112) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 120) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 128) = guard_dispatch_icall_no_overrides(a3);
    *(_QWORD *)(a4 + 136) = guard_dispatch_icall_no_overrides(a3);
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000007 )
    {
      _RAX = 2147483655LL;
      __asm { cpuid }
      v4 = _RBX;
    }
    *(_QWORD *)(a4 + 144) = v4;
    *(_DWORD *)(a4 + 64) = 10;
  }
}
