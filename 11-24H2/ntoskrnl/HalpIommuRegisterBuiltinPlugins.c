/*
 * XREFs of HalpIommuRegisterBuiltinPlugins @ 0x14056511C
 * Callers:
 *     HalpIommuInitDiscard @ 0x140C11D18 (HalpIommuInitDiscard.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 *     HalpIommuHsaDiscover @ 0x140C17508 (HalpIommuHsaDiscover.c)
 */

__int64 HalpIommuRegisterBuiltinPlugins()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int64 AcpiTable; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( HalpHvIommu && !HalpHvCpuManager )
    return 0LL;
  result = HalpIommuHsaDiscover(&v3);
  if ( (int)result >= 0 )
  {
    if ( (v3 & 2) != 0 )
      HalpIommuDmaGuardTableOptIn = 1;
    LOBYTE(v3) = 0;
    v1 = 0;
    AcpiTable = HalSocGetAcpiTable(1380011332);
    if ( AcpiTable && (result = HalpIvtProcessDmarTable(AcpiTable, &v3), v1 = result, (int)result >= 0) && (_BYTE)v3 )
      HalpIommuDmaGuardTableOptIn = 1;
    else
      return v1;
  }
  return result;
}
