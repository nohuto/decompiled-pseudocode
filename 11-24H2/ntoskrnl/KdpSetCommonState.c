/*
 * XREFs of KdpSetCommonState @ 0x1404CF704
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x140B79AAC (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140B79C44 (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140B7C1E0 (KdpReportExceptionStateChange.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KdpDeleteBreakpointRange @ 0x140B7C15C (KdpDeleteBreakpointRange.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSetCommonState(int a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  ULONG ActiveProcessorCount; // eax
  ULONG v7; // ecx
  char *v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v11) = 0;
  v4 = KeProcessorLevel;
  *(_DWORD *)a3 = a1;
  *(_WORD *)(a3 + 4) = v4;
  *(_WORD *)(a3 + 6) = KeGetPcr()->Prcb.Number;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = *(unsigned __int16 *)(a3 + 6);
  *(_DWORD *)(a3 + 8) = ActiveProcessorCount;
  if ( ActiveProcessorCount <= v7 )
    *(_DWORD *)(a3 + 8) = v7 + 1;
  *(_QWORD *)(a3 + 16) = KeGetCurrentThread();
  v8 = *(char **)(a2 + 248);
  *(_QWORD *)(a3 + 24) = v8;
  *(_OWORD *)(a3 + 192) = 0LL;
  *(_OWORD *)(a3 + 208) = 0LL;
  *(_OWORD *)(a3 + 224) = 0LL;
  KdpCopyMemoryChunks(v8, 4, (__int64)&v11);
  v9 = (unsigned int)v11;
  *(_WORD *)(a3 + 212) = v11;
  result = KdpDeleteBreakpointRange(v8, &v8[v9 - 1]);
  if ( (_BYTE)result )
    return KdpCopyMemoryChunks(v8, 4, (__int64)&v11);
  return result;
}
