/*
 * XREFs of RtlProtectHeap @ 0x18009C280
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800EF340 (RtlpRemoveVectoredHandler.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800F9570 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapValidateProtection @ 0x180091990 (RtlpHpHeapValidateProtection.c)
 *     RtlpProtectHeap @ 0x18009C350 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x18009C570 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapProtect @ 0x180157DB4 (RtlpHpHeapProtect.c)
 */

struct _PEB *__fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  struct _PEB *result; // rax
  unsigned int HeapProtection; // eax
  __int64 v6; // rdx
  unsigned int v7; // eax

  result = NtCurrentPeb();
  if ( a1 != result->ProcessHeap && (a1[4] == -571548178 || (a1[29] & 0x1000000) == 0) )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( a1[4] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection((__int64)a1, (a1[5] & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    v6 = HeapProtection;
    if ( a2 )
    {
      v7 = 2;
      if ( (_DWORD)v6 == 64 )
        v7 = 32;
      v6 = v7;
    }
    if ( a1[4] == -571548178 )
      RtlpHpHeapProtect(a1, v6);
    else
      RtlpProtectHeap(a1, v6);
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  return result;
}
