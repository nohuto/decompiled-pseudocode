/*
 * XREFs of MiFaultInProbeAddress @ 0x14020ABF4
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x14066FCA4 (MiDeliverPicoExceptionForProbedPage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r14d
  ULONG_PTR v6; // rdi
  int v7; // edi
  _QWORD v9[2]; // [rsp+28h] [rbp-49h] BYREF
  __int16 v10; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v11; // [rsp+40h] [rbp-31h]
  __int64 v12; // [rsp+48h] [rbp-29h]
  __int64 v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  int v15; // [rsp+60h] [rbp-11h]

  memset_0(&v10, 0, 0x78uLL);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 96);
  v10 = 2;
  v9[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = v4 - (v3 & 0xFFFFFFFFFFFFF000uLL);
  v12 = 1LL;
  v11 = v9;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( v5 )
  {
    v6 = 2LL;
    if ( v5 == 3 )
    {
      v6 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 72) & 0xF) == 6
           && (unsigned int)MiGetSystemRegionType(v3, v3 & 0xFFFFFFFFFFFFF000uLL, v2) == 11 )
    {
      v6 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v7 = MmAccessFault(v6, v3);
  if ( v7 < 0 && (*(_DWORD *)(a1 + 72) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) )
    v7 = MiDeliverPicoExceptionForProbedPage(v3, v5);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v7;
}
