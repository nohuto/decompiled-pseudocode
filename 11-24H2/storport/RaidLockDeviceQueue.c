/*
 * XREFs of RaidLockDeviceQueue @ 0x14003E764
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x140187608 (RaUnitStopDeviceIrp.c)
 *     StorProcessNVMeNewUnit @ 0x14018E2E4 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RaidLockDeviceQueue(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  *(_BYTE *)(a1 + 37) = 1;
  result = *(_QWORD *)(a1 + 88);
  do
  {
    if ( (result & 3) != 0 )
      break;
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), result | 2, result);
  }
  while ( v2 != result );
  return result;
}
