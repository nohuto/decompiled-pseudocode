/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x14030CDE0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     HalpCollectPmcCounters @ 0x14030CF90 (HalpCollectPmcCounters.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall EtwpReserveWithPmcCounters(
        __int64 a1,
        __int16 a2,
        int a3,
        unsigned __int64 *a4,
        signed __int64 *a5,
        int a6)
{
  __int64 v6; // r15
  unsigned __int64 *v8; // rax
  int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v20; // [rsp+80h] [rbp+18h]

  v6 = *(_QWORD *)(a1 + 1064);
  v8 = a4;
  v9 = (unsigned __int8)*(_DWORD *)(v6 + 20);
  v20 = *(_DWORD *)(v6 + 20);
  v10 = 8 * v9 + 16;
  v11 = v10 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v13 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(v13);
      v8 = a4;
    }
  }
  v14 = EtwpReserveTraceBuffer((unsigned int *)a1, v11, v8, a5, a6);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = *a5;
    *(_WORD *)(v14 + 4) = v11;
    *(_DWORD *)v14 = (unsigned __int8)a6 | (v9 << 8) | 0xC0110000;
    *(_WORD *)(v14 + 6) = a2;
    v16 = *(_QWORD *)(v6 + 8LL * KeGetPcr()->Prcb.Number + 24);
    if ( v16 )
    {
      v17 = v14 + 16;
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD))off_140E00A18[0] == HalpCollectPmcCounters )
        HalpCollectPmcCounters(v16, v17);
      else
        guard_dispatch_icall_no_overrides(v16, v17);
    }
    else
    {
      memset_0((void *)(v14 + 16), 0, 8LL * (unsigned __int8)v20);
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return v15 + v10;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
