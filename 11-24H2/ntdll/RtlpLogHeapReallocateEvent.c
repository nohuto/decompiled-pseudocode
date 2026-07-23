/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x18010D1A4
 * Callers:
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapReallocateEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v13; // [rsp+26h] [rbp-82h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+68h] [rbp-40h]

  memset_thunk_772440563353939046(Fields, 0, 0x4CuLL);
  v17 = a5;
  v19 = a6;
  v15 = a2;
  if ( a3 )
    a2 = a3;
  v13 = 4130;
  v14 = a1;
  v16 = a2;
  v18 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v10 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x20402u, 0x2Cu, Fields);
}
