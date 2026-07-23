/*
 * XREFs of MiInitializePoolPageChainPacket @ 0x1402F45D8
 * Callers:
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 * Callees:
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 */

__int64 __fastcall MiInitializePoolPageChainPacket(int a1, int a2, __int64 a3, __int64 a4)
{
  return MiInitializePageChainPacket(
           (unsigned int)&MiSystemPartition,
           (unsigned int)&unk_140E384C0,
           2,
           0,
           a1,
           1,
           a2,
           -1LL,
           0LL,
           9,
           0LL,
           a3,
           a4);
}
