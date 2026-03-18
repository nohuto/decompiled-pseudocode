/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBus @ 0x14005610C
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14003C120 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x140046840 (ACPIBuildPdo.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x140049D9C (AcpiEvaluateOscMethodOnPciRootBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBus(__int64 a1, __int64 a2, int a3)
{
  int *v4; // rdi
  __int64 result; // rax
  _DWORD *v6; // r8
  int v7; // eax
  __int64 v8; // r10
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a1 + 760) || (*(_DWORD *)(a1 + 8) & 0x2000000) == 0 )
    return 3221225473LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 0x10) != 0 )
    return 0LL;
  v4 = (int *)(a1 + 304);
  *(_DWORD *)(a1 + 304) = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x10u);
  if ( (AcpiOverrideAttributes & 0x2000) != 0 )
    return 0LL;
  v10 = 0;
  result = AcpiEvaluateOscMethodOnPciRootBus(a1, 1u, a3, &PciRootBusFeaturesControlRequest, &v10);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 184), 8u);
    v6 = &PciRootBusValidFeatureSets;
    v7 = 0;
    v8 = 3LL;
    v9 = 0;
    do
    {
      if ( (v10 & *v6) == *v6 )
        v7 |= *v6;
      ++v6;
      --v8;
    }
    while ( v8 );
    v9 = v7;
    if ( !AcpiUseFlexibleOscHandoffRegValue )
    {
      if ( (v10 & 0x15) != 0x15 )
        v7 = 0;
      v9 = v7;
    }
    return AcpiEvaluateOscMethodOnPciRootBus(a1, 0, (int)v6, &v9, v4);
  }
  return result;
}
