/*
 * XREFs of RaidAllocateAddressMapping @ 0x14008AADC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeGetDeviceBaseEx @ 0x140072AA0 (NvmeGetDeviceBaseEx.c)
 *     StorPortGetDeviceBase @ 0x140073BD0 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateAddressMapping(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 Pool; // rax
  __int64 v11; // rdx
  __int64 result; // rax

  Pool = RaidAllocatePool(64LL, 40LL, 1296130386LL, a6);
  v11 = Pool;
  if ( !Pool )
    return 3221225495LL;
  *(_QWORD *)Pool = *a1;
  *a1 = Pool;
  *(_DWORD *)(Pool + 32) = a5;
  result = 0LL;
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 16) = a4;
  return result;
}
