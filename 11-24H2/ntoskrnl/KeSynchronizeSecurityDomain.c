/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x1404A1ABC
 * Callers:
 *     PspCombineSecurityDomains @ 0x1408AB200 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x14039E420 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x1405C6940 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 Count; // rdx
  unsigned int v6; // r8d
  int v7; // ebx
  $B38C3B1372D6E954799962D5DD404846 *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rcx
  struct _KAFFINITY_EX v12; // [rsp+30h] [rbp-D0h] BYREF

  memset_0(&v12.8, 0, sizeof(v12.8));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v2, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)&v12.Count = 2097153LL;
  memset_0(&v12.8, 0, sizeof(v12.8));
  KiCopyAffinityEx(&v12, 0x20u, (struct _KAFFINITY_EX *)a1->ActiveProcessors);
  Count = v12.Count;
  v6 = *((_DWORD *)KiGlobalState + CurrentPrcb->Number);
  if ( v12.Count > v6 >> 6 )
  {
    v12.Bitmap[v6 >> 6] &= ~(1LL << (v6 & 0x3F));
    Count = v12.Count;
  }
  v7 = 0;
  if ( (_WORD)Count )
  {
    v8 = &v12.8;
    v9 = (unsigned __int16)Count;
    do
    {
      v7 += __popcnt(v8->Bitmap[0]);
      v8 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v8 + 8);
      --v9;
    }
    while ( v9 );
  }
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v7 )
  {
    KiIpiSendPacket(0, (char *)&v12, (__int64)KiSynchronizeSecurityDomainTarget, 1LL, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v11, (__int64)CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(Count) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), Count);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
