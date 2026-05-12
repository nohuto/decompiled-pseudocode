/*
 * XREFs of NvmeControllerGetAERExtendedCommand @ 0x1400EDE38
 * Callers:
 *     NvmeControllerReConfigAsyncEventCompletion @ 0x1400C9390 (NvmeControllerReConfigAsyncEventCompletion.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0 (NvmeControllerGetLogPageCompletionForAER.c)
 *     NvmeControllerStartAsyncEventCommands @ 0x1400F5140 (NvmeControllerStartAsyncEventCommands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetAERExtendedCommand(__int64 a1)
{
  union _SLIST_HEADER *v1; // rcx
  PSLIST_ENTRY v2; // rax
  __int64 result; // rax
  int v4; // ecx

  v1 = *(union _SLIST_HEADER **)(a1 + 1416);
  if ( !v1 )
    return 0LL;
  v2 = ExpInterlockedPopEntrySList(v1 + 1);
  result = (unsigned __int64)&v2[-1] & -(__int64)(v2 != 0LL);
  if ( !result )
    return 0LL;
  v4 = *(_DWORD *)(result + 48);
  *(_WORD *)(result + 52) = 0;
  if ( (v4 & 1) == 0 )
    *(_DWORD *)(result + 48) = v4 | 1;
  *(_QWORD *)(*(_QWORD *)result + 4240LL) = result;
  return result;
}
