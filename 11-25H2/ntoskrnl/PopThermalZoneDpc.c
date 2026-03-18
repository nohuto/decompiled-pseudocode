/*
 * XREFs of PopThermalZoneDpc @ 0x1405CF690
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     _local_unwind @ 0x1404FB6F0 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1405183CC (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine3 @ 0x1406AA2D0 (KiCustomAccessRoutine3.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[76]; // [rsp+0h] [rbp-1B8h] BYREF
  _BYTE v10[52]; // [rsp+130h] [rbp-88h] BYREF
  __int64 v11; // [rsp+164h] [rbp-54h]
  __int64 v12; // [rsp+184h] [rbp-34h]
  _DWORD *v13; // [rsp+1A0h] [rbp-18h]

  v13 = v9;
  memset_0(v10, 0, 0x5CuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v12 = a3;
    *(_QWORD *)&v10[28] = __ROL8__(a2, a3);
    v11 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
