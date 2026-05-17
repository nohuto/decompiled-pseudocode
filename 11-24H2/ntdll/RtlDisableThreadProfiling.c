/*
 * XREFs of RtlDisableThreadProfiling @ 0x180132850
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(unsigned __int64 a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  unsigned __int64 v7; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = a1;
  v2 = NtSetInformationThread(-2LL, 32LL, &v4);
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
