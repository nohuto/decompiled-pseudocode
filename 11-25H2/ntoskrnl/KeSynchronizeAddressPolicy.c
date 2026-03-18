/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x14048D178
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140271300 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendPacket @ 0x140466C7C (KiIpiSendPacket.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14048D320 (KiSynchronizeAddressPolicyTarget.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int16 Count; // dx
  unsigned int v7; // r8d
  int v8; // edi
  $B38C3B1372D6E954799962D5DD404846 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KAFFINITY_EX v13; // [rsp+38h] [rbp-D0h] BYREF

  result = memset_0(&v13.8, 0, sizeof(v13.8));
  if ( *(_BYTE *)(a1 + 352) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    *(_QWORD *)&v13.Count = 2097153LL;
    memset_0(&v13.8, 0, sizeof(v13.8));
    KiCopyAffinityEx(&v13, 0x20u, *(struct _KAFFINITY_EX **)(a1 + 128));
    Count = v13.Count;
    v7 = *((_DWORD *)KiGlobalState + CurrentPrcb->Number);
    if ( v13.Count > v7 >> 6 )
    {
      v13.Bitmap[v7 >> 6] &= ~(1LL << (v7 & 0x3F));
      Count = v13.Count;
    }
    v8 = 0;
    if ( Count )
    {
      v9 = &v13.8;
      v10 = Count;
      do
      {
        v8 += __popcnt(v9->Bitmap[0]);
        v9 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v9 + 8);
        --v10;
      }
      while ( v10 );
    }
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      KiIpiSendPacket(0, (char *)&v13, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      KiIpiStallOnPacketTargetsPrcb(v12, (__int64)CurrentPrcb);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
