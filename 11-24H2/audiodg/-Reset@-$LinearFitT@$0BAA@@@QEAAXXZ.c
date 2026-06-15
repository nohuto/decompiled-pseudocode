/*
 * XREFs of ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140021144
 * Callers:
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F6A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021494 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x14002289C (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ??0CAudioPump@@QEAA@XZ @ 0x1400576D4 (--0CAudioPump@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinearFitT<256>::Reset(__int64 a1)
{
  __int64 result; // rax

  (**(void (__fastcall ***)(__int64))a1)(a1);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
