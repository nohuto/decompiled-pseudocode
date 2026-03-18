/*
 * XREFs of HalpMcaPopulateErrorData @ 0x14053FB8C
 * Callers:
 *     HalpMcaReadError @ 0x14053FE0C (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047CEEC (HalpWheaReadMsrMisc.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14053FD6C (HalpMcaPopulateErrorDataEx.c)
 *     HalpWheaGetApicId @ 0x1405408B0 (HalpWheaGetApicId.c)
 *     HalpReadExtendedMcaRegistersAMD @ 0x1405438F8 (HalpReadExtendedMcaRegistersAMD.c)
 *     HalpReadExtendedMcaRegistersIntel @ 0x140543A7C (HalpReadExtendedMcaRegistersIntel.c)
 *     HalpHvGetMachineCheckContext @ 0x14054B6E4 (HalpHvGetMachineCheckContext.c)
 *     HalpWheaReadMsrAddress @ 0x140554580 (HalpWheaReadMsrAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMcaPopulateErrorData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 v11; // rax
  unsigned __int8 CpuVendor; // dl
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // di
  bool v19; // zf
  __int64 v20; // r9
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int128 v23; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0LL;
  if ( a6 )
  {
    LOBYTE(v11) = HalpMcaPopulateErrorDataEx(a1, a2, a3, a5, a6 - 1);
  }
  else
  {
    *(_DWORD *)a5 = 4;
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      *(_DWORD *)(a5 + 4) = 1;
    }
    else
    {
      v13 = 0;
      if ( CpuVendor == 1 )
        v13 = 2;
      *(_DWORD *)(a5 + 4) = v13;
    }
    *(_QWORD *)(a5 + 8) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a5 + 16) = a1;
    *(_DWORD *)(a5 + 68) = HalpWheaGetApicId(a1);
    v22 = guard_dispatch_icall_no_overrides(a1, 378LL, 0LL, v14);
    *(_DWORD *)(a5 + 36) = a2;
    *(_QWORD *)(a5 + 40) = a3;
    if ( (a3 & 0x400000000000000LL) != 0 )
      *(_QWORD *)(a5 + 48) = HalpWheaReadMsrAddress(a1, a2);
    if ( (a3 & 0x800000000000000LL) != 0 && HalpMcaMiscImplemented )
      *(_QWORD *)(a5 + 56) = HalpWheaReadMsrMisc(a1, a2);
    v11 = guard_dispatch_icall_no_overrides(a1, 377LL, 0LL, v15);
    v17 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v17 == 1 )
    {
      LOBYTE(v11) = HalpReadExtendedMcaRegistersIntel(v11, v16, a1, a5);
    }
    else if ( (_DWORD)v17 == 2 )
    {
      LOBYTE(v11) = HalpReadExtendedMcaRegistersAMD(v17, a2, a1, a5);
    }
    v18 = v22;
    if ( (v22 & 4) != 0 )
    {
      v19 = HalpHvWheaEnlightenedCpuManager == 0;
      *(_QWORD *)(a5 + 20) = v22;
      if ( !v19 )
      {
        v23 = 0LL;
        if ( (int)HalpHvGetMachineCheckContext((unsigned int)a1, &v23) >= 0 && (_DWORD)v23 != 2 )
          v18 = v22 & 0xFD;
      }
      if ( a4 && (v18 & 2) != 0 )
        *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
      LOBYTE(v11) = HalpGetCpuVendor();
      if ( (_BYTE)v11 == 2 )
      {
        v11 = guard_dispatch_icall_no_overrides(a1, 377LL, 0LL, v20);
        v6 = v11;
      }
      *(_QWORD *)(a5 + 264) = v6;
    }
  }
  return v11;
}
