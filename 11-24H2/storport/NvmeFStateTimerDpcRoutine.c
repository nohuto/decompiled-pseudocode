/*
 * XREFs of NvmeFStateTimerDpcRoutine @ 0x140132CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeFStateTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx
  int v5; // eax

  v4 = *(_QWORD *)(DeferredContext[20] + 8LL);
  v5 = *(_DWORD *)(v4 + 20);
  if ( (v5 & 0x100) != 0 )
  {
    *(_DWORD *)(v4 + 20) = v5 & 0xFFFFFEFF;
    PoFxSetComponentLatency(
      **(_QWORD **)(DeferredContext[20] + 8LL),
      0LL,
      10000LL * *(unsigned int *)(DeferredContext[20] + 188LL));
  }
}
