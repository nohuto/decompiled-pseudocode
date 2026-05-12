/*
 * XREFs of NvmeControllerPostPowerUp @ 0x1400F22F8
 * Callers:
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 * Callees:
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400CB05C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NvmeControllerPostPowerUp(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(result + 160);
  if ( v2 )
  {
    result = *(unsigned int *)(v2 + 176);
    if ( (result & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 176) = result & 0xFFFDFFFF;
      return NvmeSetNonOperationalPowerStatePermissiveMode(
               a1,
               (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 176LL) & 0x40000) != 0);
    }
  }
  return result;
}
