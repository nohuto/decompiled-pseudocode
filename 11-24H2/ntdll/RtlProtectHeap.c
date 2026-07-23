/*
 * XREFs of RtlProtectHeap @ 0x180028BA0
 * Callers:
 *     RtlpRemoveVectoredHandler @ 0x180027330 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800F4140 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlpProtectHeap @ 0x180028980 (RtlpProtectHeap.c)
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlpHpHeapValidateProtection @ 0x18009C520 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapProtect @ 0x180156174 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edx
  int v6; // eax

  if ( HeapHandle != NtCurrentPeb()->ProcessHeap
    && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0) )
  {
    RtlpAcquireHeapListLock();
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4,
                         (unsigned __int8)BYTE1(*(_QWORD *)HeapHandle),
                         *((_QWORD *)HeapHandle + 1));
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      RtlpHpHeapProtect(HeapHandle, v5);
    else
      RtlpProtectHeap((__int64)HeapHandle, v5);
    RtlpReleaseHeapListLock(0LL);
  }
}
