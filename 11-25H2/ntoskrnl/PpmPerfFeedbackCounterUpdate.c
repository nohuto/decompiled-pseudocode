/*
 * XREFs of PpmPerfFeedbackCounterUpdate @ 0x1405CE184
 * Callers:
 *     PpmBeginActiveTimeAccumulation @ 0x140466B9C (PpmBeginActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool v6; // zf
  __int64 v7; // rcx
  __int64 result; // rax

  v6 = *(_BYTE *)(a1 + 33) == 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    return guard_dispatch_icall_no_overrides(v7);
  guard_dispatch_icall_no_overrides(v7);
  result = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      *a2 = 0LL;
      *a3 = 0LL;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
