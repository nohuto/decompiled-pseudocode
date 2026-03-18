/*
 * XREFs of PpmPerfFeedbackCounterUpdate @ 0x1405D2A58
 * Callers:
 *     PpmBeginActiveTimeAccumulation @ 0x1403B6D7C (PpmBeginActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v11[0] = 0LL;
  v12 = 0;
  v7 = *(_BYTE *)(a1 + 33) == 0;
  v8 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    return guard_dispatch_icall_no_overrides(v8, &v12, a3, a4);
  guard_dispatch_icall_no_overrides(v8, 0LL, v11, &v13);
  result = v13;
  v10 = v11[0];
  if ( a2 )
  {
    if ( a3 )
    {
      *a2 = v13;
      *a3 = v10;
    }
  }
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
