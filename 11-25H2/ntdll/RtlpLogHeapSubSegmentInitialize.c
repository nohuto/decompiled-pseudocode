/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x180116EC4
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18007CB10 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180119B8C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v12; // [rsp+26h] [rbp-82h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(Fields, 0, 0x44uLL);
  v13 = a1;
  v12 = 4149;
  v17 = a5;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x20402u, 0x24u, Fields);
}
