/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x14043DF60
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x140433E50 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v8; // si
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  v8 = a2;
  v9 = *(_BYTE *)(a1 + 33) == 0;
  v10 = *(_QWORD *)(a1 + 40);
  if ( !v9 )
  {
    guard_dispatch_icall_no_overrides(v10, a2, v16, &v17);
    v11 = v17;
    v12 = v16[0];
    if ( a4 )
    {
      v13 = a5;
      if ( a5 )
      {
        *a4 = v17;
        *v13 = v12;
      }
    }
    if ( !v8 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( v12 == v14 )
      {
LABEL_9:
        result = *(unsigned int *)(a1 + 24);
        *a3 = result;
        return result;
      }
      *(_DWORD *)(a1 + 24) = (v11 - *(_QWORD *)(a1 + 8)) * (unsigned __int64)*(unsigned int *)(a1 + 36) / (v12 - v14);
    }
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v12;
    goto LABEL_9;
  }
  return guard_dispatch_icall_no_overrides(v10, a3, a3, a4);
}
