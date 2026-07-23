/*
 * XREFs of RtlProtectHeap @ 0x180024F60
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlpCallVectoredHandlers @ 0x180075B30 (RtlpCallVectoredHandlers.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DE0B0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800F0A44 (RtlpRemoveVectoredHandler.c)
 *     RtlAddFunctionTable @ 0x1800F3AE0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800FB190 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpProtectHeap @ 0x180025030 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapValidateProtection @ 0x1800BAD10 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapProtect @ 0x180159364 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  unsigned int HeapProtection; // eax
  __int64 v5; // rdx
  unsigned int v6; // eax

  if ( HeapHandle != NtCurrentPeb()->ProcessHeap
    && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0) )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4,
                         (unsigned __int8)BYTE1(*(_QWORD *)HeapHandle),
                         *((_QWORD *)HeapHandle + 1));
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      v6 = 2;
      if ( (_DWORD)v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      RtlpHpHeapProtect(HeapHandle, v5);
    else
      RtlpProtectHeap(HeapHandle, v5);
    RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  }
}
