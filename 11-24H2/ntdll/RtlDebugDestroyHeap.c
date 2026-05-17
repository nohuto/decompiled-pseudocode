/*
 * XREFs of RtlDebugDestroyHeap @ 0x18011F328
 * Callers:
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 */

char __fastcall RtlDebugDestroyHeap(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (void *)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlDestroyHeap") || !RtlpValidateHeap(a1, 0) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, (__int64 *)(a1 + 216), &v4, 0x8000LL);
  }
  return 1;
}
