/*
 * XREFs of PpmPerfFeedbackCounterUpdate @ 0x1405D0178
 * Callers:
 *     PpmBeginActiveTimeAccumulation @ 0x140371F00 (PpmBeginActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1, __int64 *a2, _QWORD *a3)
{
  bool v6; // zf
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  v10 = 0LL;
  v9 = 0;
  v6 = *(_BYTE *)(a1 + 33) == 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    return guard_dispatch_icall_no_overrides(v7, &v9);
  guard_dispatch_icall_no_overrides(v7, 0LL);
  result = v10;
  if ( a2 )
  {
    if ( a3 )
    {
      *a2 = v10;
      *a3 = 0LL;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
