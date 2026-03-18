/*
 * XREFs of HalpReadExtendedMcaRegistersAMD @ 0x1405438F8
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpReadExtendedMcaRegistersAMD(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // ebp
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9

  v4 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v7 = 16 * a2;
    *(_QWORD *)(a4 + 72) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(16 * a2 - 1073733627), 0LL, a4);
    *(_QWORD *)(a4 + 80) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733626), 0LL, v8);
    *(_QWORD *)(a4 + 88) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733628), 0LL, v9);
    *(_QWORD *)(a4 + 96) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733624), 0LL, v10);
    *(_QWORD *)(a4 + 104) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733623), 0LL, v11);
    *(_QWORD *)(a4 + 112) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733622), 0LL, v12);
    *(_QWORD *)(a4 + 120) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733621), 0LL, v13);
    *(_QWORD *)(a4 + 128) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733620), 0LL, v14);
    *(_QWORD *)(a4 + 136) = guard_dispatch_icall_no_overrides(a3, (unsigned int)(v7 - 1073733619), 0LL, v15);
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
