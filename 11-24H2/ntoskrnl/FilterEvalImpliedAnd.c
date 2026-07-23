/*
 * XREFs of FilterEvalImpliedAnd @ 0x1408D1A38
 * Callers:
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x1409F2A20 (ValidFilter.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDqPropertyCallback @ 0x1408D2280 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D2920 (PropertyEval.c)
 */

__int64 __fastcall FilterEvalImpliedAnd(
        __int64 (__fastcall *a1)(int, int, int, int, __int64),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r10
  int v9; // r15d
  unsigned int i; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 *v16; // [rsp+20h] [rbp-30h]
  unsigned int v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF

  v5 = 0;
  v18 = 0;
  v19 = 0LL;
  v7 = a3;
  v17 = 0;
  v8 = a2;
  *a5 = 0;
  v9 = 1;
  for ( i = 0; i < v7; ++i )
  {
    v12 = 56LL * i;
    if ( (*(_DWORD *)(v12 + a4) & 0xFF00000) != 0 )
    {
      v5 = -1073741811;
      break;
    }
    v13 = v12 + a4 + 8;
    v16 = &v19;
    if ( a1 == PiDqPropertyCallback )
      v14 = PiDqPropertyCallback(v8, v13, (int)&v18, (int)&v17, (__int64)&v19);
    else
      v14 = guard_dispatch_icall_no_overrides(v8, v13);
    v5 = v14;
    if ( v14 == -1073741275 )
    {
      v5 = 0;
      v9 = 0;
    }
    else
    {
      if ( v14 )
        break;
      LODWORD(v16) = *(_DWORD *)(v12 + a4 + 40);
      PropertyEval(
        v18,
        v19,
        v17,
        *(unsigned int *)(v12 + a4),
        v16,
        *(_QWORD *)(v12 + a4 + 48),
        *(_DWORD *)(v12 + a4 + 44),
        a5);
      if ( *a5 == v5 )
        return 0LL;
    }
    v7 = a3;
    v8 = a2;
  }
  if ( !v9 && !v5 )
    return (unsigned int)-1073741823;
  return v5;
}
