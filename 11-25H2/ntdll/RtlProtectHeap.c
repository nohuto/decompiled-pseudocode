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

struct _PEB *__fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  struct _PEB *result; // rax
  unsigned int HeapProtection; // eax
  __int64 v6; // rdx
  unsigned int v7; // eax

  result = NtCurrentPeb();
  if ( a1 != result->ProcessHeap && (a1[4] == -571548178 || (a1[29] & 0x1000000) == 0) )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    if ( a1[4] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         a1,
                         (a1[5] & 0x40000000) != 0 ? 64 : 4,
                         (unsigned __int8)BYTE1(*(_QWORD *)a1),
                         *((_QWORD *)a1 + 1));
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
    return (struct _PEB *)RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  }
  return result;
}
