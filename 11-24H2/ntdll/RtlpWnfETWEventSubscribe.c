/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x180132638
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x180099C70 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfETWEventSubscribe(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  _BYTE v12[6]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v13; // [rsp+36h] [rbp-82h]
  __int64 v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  int v18; // [rsp+70h] [rbp-48h]
  int v19; // [rsp+74h] [rbp-44h]

  memset_thunk_772440563353939046(v12, 0, 0x48uLL);
  v13 = 3360;
  v14 = a1;
  v19 = a6;
  v15 = a2;
  v16 = a3;
  v18 = a4;
  v17 = a5;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v10 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v10, 132098LL, 40LL, v12);
}
