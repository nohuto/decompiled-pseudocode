/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x14043DCE0
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v8; // si
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v8 = a2;
  v9 = *(_BYTE *)(a1 + 33) == 0;
  v10 = *(_QWORD *)(a1 + 40);
  if ( !v9 )
  {
    guard_dispatch_icall_no_overrides(v10, a2);
    if ( a4 )
    {
      if ( a5 )
      {
        *a4 = 0LL;
        *a5 = 0LL;
      }
    }
    if ( !v8 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      if ( !v11 )
      {
LABEL_9:
        result = *(unsigned int *)(a1 + 24);
        *a3 = result;
        return result;
      }
      *(_DWORD *)(a1 + 24) = -*(_QWORD *)(a1 + 8) * (unsigned __int64)*(unsigned int *)(a1 + 36) / -v11;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_9;
  }
  return guard_dispatch_icall_no_overrides(v10, a3);
}
