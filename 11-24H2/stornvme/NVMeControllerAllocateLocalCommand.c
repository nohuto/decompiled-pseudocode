/*
 * XREFs of NVMeControllerAllocateLocalCommand @ 0x140021FDC
 * Callers:
 *     NVMeControllerCreateLocalCommandPool @ 0x1400220FC (NVMeControllerCreateLocalCommandPool.c)
 *     NVMeControllerGetLocalCommand @ 0x140022280 (NVMeControllerGetLocalCommand.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeControllerAllocateLocalCommand(__int64 a1)
{
  void *v3; // [rsp+50h] [rbp+20h] BYREF
  __int64 v4; // [rsp+58h] [rbp+28h]

  v3 = 0LL;
  v4 = 0LL;
  StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
  if ( v3 )
    NVMeFreeDmaBuffer(a1, 4232LL, (__int64 *)&v3, v4);
  return 0LL;
}
