/*
 * XREFs of HalpReadExtendedMcaRegistersAMD @ 0x140541248
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpReadExtendedMcaRegistersAMD(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // ebp

  v4 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v7 = 16 * a2;
    *(_QWORD *)(a4 + 72) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(16 * a2 - 1073733627));
    *(_QWORD *)(a4 + 80) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733626));
    *(_QWORD *)(a4 + 88) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733628));
    *(_QWORD *)(a4 + 96) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733624));
    *(_QWORD *)(a4 + 104) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733623));
    *(_QWORD *)(a4 + 112) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733622));
    *(_QWORD *)(a4 + 120) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733621));
    *(_QWORD *)(a4 + 128) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733620));
    *(_QWORD *)(a4 + 136) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733619));
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
