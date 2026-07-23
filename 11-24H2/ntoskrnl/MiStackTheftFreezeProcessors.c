/*
 * XREFs of MiStackTheftFreezeProcessors @ 0x140676544
 * Callers:
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiStackTheftFreezeProcessors(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v11[4]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR Context[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+58h] [rbp-B0h]
  _DWORD v14[3]; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v15[200]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v16; // [rsp+130h] [rbp+28h]

  memset_0(v14, 0, 0xD4uLL);
  v2 = a1[1];
  v3 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
  a1[2] = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (__int64 *)(*(_QWORD *)(48LL * *a1 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL);
  v5 = *v4;
  v13 = 0;
  Context[0] = (ULONG_PTR)v4;
  v16 = a1;
  v6 = a1[5];
  Context[1] = (v2 << 12) ^ (v5 ^ (v2 << 12)) & 0xFFF0000000000FFFuLL | 0x20;
  v7 = MiVaToFlushVm(v6);
  MiInitializeTbFlushList((__int64)v15, (__int64)v7, 20, 9, 84);
  MiInsertTbFlushEntry((__int64)v15, a1[5], 1LL, 0);
  v8 = 48 * v2 - 0x220000000000LL;
  v11[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v11);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  v14[1] = KeNumberProcessors_0;
  v14[0] = KeNumberProcessors_0;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)MiWritePteHighLevelIsr, (ULONG_PTR)Context);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnmapPageInHyperSpaceWorker(v3, 0x11u, 0x80000000);
}
