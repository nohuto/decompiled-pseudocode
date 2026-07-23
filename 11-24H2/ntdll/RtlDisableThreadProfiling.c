/*
 * XREFs of RtlDisableThreadProfiling @ 0x180130A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 */

NTSTATUS __cdecl RtlDisableThreadProfiling(PVOID PerformanceDataHandle)
{
  int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  PVOID v7; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = PerformanceDataHandle;
  v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCounterProfiling, &v4, 0x18u);
  if ( v2 >= 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PerformanceDataHandle);
  return v2;
}
