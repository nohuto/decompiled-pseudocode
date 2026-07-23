/*
 * XREFs of KiDispatchCallout @ 0x140454FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // r10
  unsigned int v10; // ebx
  unsigned __int64 v11; // r10
  __int64 v12; // rsi
  unsigned int v13; // r11d
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h] BYREF

  KeExitRetpoline();
  v7 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ retaddr ^ v7;
  *(_QWORD *)(a1 + 56) = v7 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
  }
  if ( !(_BYTE)KiKernelCetEnabled )
    retaddr = 0LL;
  v9 = *(_QWORD *)(v7 + 32) ^ *(_QWORD *)(v7 + 64);
  v10 = 25;
  v11 = v9 | 0xFFFF800000000000uLL;
  v12 = __ROR8__(v11, v11 & 0x3F);
  v13 = 0;
  v14 = v11 - 8;
  do
  {
    v15 = *(_QWORD *)(v14 + 8);
    v14 += 8LL;
    *(_QWORD *)v14 = v11 + (KiWaitAlways ^ _byteswap_uint64(v12 ^ __ROL8__(KiWaitNever ^ v15, KiWaitNever))) + v13;
    v12 = (v11 + __ROL8__(__ROR8__(v13 ^ (unsigned __int64)(200 - v13), ~(_BYTE)v15 & 0x3F) ^ v12, (v15 ^ 0xFA) & 0x3F)) ^ 0x770068EC;
    if ( v13 == 24 && *(_QWORD *)v11 != 0x85131481131482ELL )
    {
      *(_QWORD *)v14 ^= *(_QWORD *)v11 ^ 0x85131481131482ELL;
      v10 += *(_DWORD *)(v14 + 4);
      *(_QWORD *)v14 ^= *(_QWORD *)v11 ^ 0x85131481131482ELL;
    }
    ++v13;
  }
  while ( v13 < v10 );
  v16 = *(_QWORD *)v11 ^ 0x85131481131482ELL;
  *(_DWORD *)v11 = -1390710795;
  *(_DWORD *)v11 ^= 0xBC2A27DB;
  guard_dispatch_icall_no_overrides(v11, v16);
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
