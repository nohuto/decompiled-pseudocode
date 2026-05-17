/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x180004F0C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfETWEventUnsubscribe(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _BYTE v16[6]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v17; // [rsp+36h] [rbp-82h]
  __int64 v18; // [rsp+50h] [rbp-68h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  int v22; // [rsp+70h] [rbp-48h]
  int v23; // [rsp+74h] [rbp-44h]

  memset_thunk_772440563353939046(v16, 0, 0x48uLL);
  v17 = 3361;
  v18 = a1;
  v23 = a6;
  v19 = a2;
  v20 = a3;
  v22 = a4;
  v21 = a5;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
    v14 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v14 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v14, 132098LL, 40LL, v16);
}
