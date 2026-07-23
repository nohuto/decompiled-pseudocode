/*
 * XREFs of HalpMcaPopulateErrorData @ 0x14053D48C
 * Callers:
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047807C (HalpWheaReadMsrMisc.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14053D66C (HalpMcaPopulateErrorDataEx.c)
 *     HalpWheaGetApicId @ 0x14053E1B0 (HalpWheaGetApicId.c)
 *     HalpReadExtendedMcaRegistersAMD @ 0x140541248 (HalpReadExtendedMcaRegistersAMD.c)
 *     HalpReadExtendedMcaRegistersIntel @ 0x1405413CC (HalpReadExtendedMcaRegistersIntel.c)
 *     HalpHvGetMachineCheckContext @ 0x140548FA4 (HalpHvGetMachineCheckContext.c)
 *     HalpWheaReadMsrAddress @ 0x140551EC0 (HalpWheaReadMsrAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMcaPopulateErrorData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 v11; // rax
  unsigned __int8 CpuVendor; // dl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // di
  bool v17; // zf
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF

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
    v19 = guard_dispatch_icall_no_overrides(a1, 378LL);
    *(_DWORD *)(a5 + 36) = a2;
    *(_QWORD *)(a5 + 40) = a3;
    if ( (a3 & 0x400000000000000LL) != 0 )
      *(_QWORD *)(a5 + 48) = HalpWheaReadMsrAddress(a1, a2);
    if ( (a3 & 0x800000000000000LL) != 0 && HalpMcaMiscImplemented )
      *(_QWORD *)(a5 + 56) = HalpWheaReadMsrMisc(a1, a2);
    v11 = guard_dispatch_icall_no_overrides(a1, 377LL);
    v15 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v15 == 1 )
    {
      LOBYTE(v11) = HalpReadExtendedMcaRegistersIntel(v11, v14, a1, a5);
    }
    else if ( (_DWORD)v15 == 2 )
    {
      LOBYTE(v11) = HalpReadExtendedMcaRegistersAMD(v15, a2, a1, a5);
    }
    v16 = v19;
    if ( (v19 & 4) != 0 )
    {
      v17 = HalpHvWheaEnlightenedCpuManager == 0;
      *(_QWORD *)(a5 + 20) = v19;
      if ( !v17 )
      {
        v20 = 0LL;
        if ( (int)HalpHvGetMachineCheckContext((unsigned int)a1, &v20) >= 0 && (_DWORD)v20 != 2 )
          v16 = v19 & 0xFD;
      }
      if ( a4 && (v16 & 2) != 0 )
        *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
      LOBYTE(v11) = HalpGetCpuVendor();
      if ( (_BYTE)v11 == 2 )
      {
        v11 = guard_dispatch_icall_no_overrides(a1, 377LL);
        v6 = v11;
      }
      *(_QWORD *)(a5 + 264) = v6;
    }
  }
  return v11;
}
