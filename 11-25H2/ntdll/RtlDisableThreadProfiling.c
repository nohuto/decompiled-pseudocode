/*
 * XREFs of RtlDisableThreadProfiling @ 0x180134330
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a1;
  v2 = NtSetInformationThread(-2LL, 32LL, &v5);
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v3);
  return (unsigned int)v2;
}
