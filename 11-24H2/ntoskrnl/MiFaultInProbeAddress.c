/*
 * XREFs of MiFaultInProbeAddress @ 0x1402C3798
 * Callers:
 *     MiProbeAndLockPacket @ 0x140282730 (MiProbeAndLockPacket.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiLockProbePacketWorkingSet @ 0x1402C3B90 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x14066EAD4 (MiDeliverPicoExceptionForProbedPage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // r14d
  ULONG_PTR v5; // rdi
  int v6; // edi
  _QWORD v8[2]; // [rsp+28h] [rbp-49h] BYREF
  __int16 v9; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h]
  __int64 v12; // [rsp+50h] [rbp-21h]
  __int64 v13; // [rsp+58h] [rbp-19h]
  int v14; // [rsp+60h] [rbp-11h]

  memset_0(&v9, 0, 0x78uLL);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 96);
  v9 = 2;
  v8[0] = v2 & 0xFFFFFFFFFFFFF000uLL;
  v8[1] = v3 - (v2 & 0xFFFFFFFFFFFFF000uLL);
  v11 = 1LL;
  v10 = v8;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( v4 )
  {
    v5 = 2LL;
    if ( v4 == 3 )
    {
      v5 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 72) & 0xF) == 6 && (unsigned int)MiGetSystemRegionType(v2) == 11 )
    {
      v5 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v6 = MmAccessFault(v5, v2, 0, (ULONG_PTR)&v9 + 1);
  if ( v6 < 0 && (*(_DWORD *)(a1 + 72) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) )
    v6 = MiDeliverPicoExceptionForProbedPage(v2, v4);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v6;
}
