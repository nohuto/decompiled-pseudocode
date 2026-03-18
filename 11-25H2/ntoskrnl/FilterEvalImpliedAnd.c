/*
 * XREFs of FilterEvalImpliedAnd @ 0x1408D1E0C
 * Callers:
 *     ConstraintEval @ 0x140839B70 (ConstraintEval.c)
 *     ValidFilter @ 0x14083A17C (ValidFilter.c)
 *     PiDqQueryEvaluateFilter @ 0x1408D06A0 (PiDqQueryEvaluateFilter.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDqPropertyCallback @ 0x1408D2660 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D2D00 (PropertyEval.c)
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
  unsigned int v13; // eax
  __int64 *v15; // [rsp+20h] [rbp-30h]
  unsigned int v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF

  v5 = 0;
  v17 = 0;
  v18 = 0LL;
  v7 = a3;
  v16 = 0;
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
    v15 = &v18;
    if ( a1 == PiDqPropertyCallback )
      v13 = PiDqPropertyCallback(v8, (int)v12 + (int)a4 + 8, (int)&v17, (int)&v16, (__int64)&v18);
    else
      v13 = guard_dispatch_icall_no_overrides(v8);
    v5 = v13;
    if ( v13 == -1073741275 )
    {
      v5 = 0;
      v9 = 0;
    }
    else
    {
      if ( v13 )
        break;
      LODWORD(v15) = *(_DWORD *)(v12 + a4 + 40);
      PropertyEval(
        v17,
        v18,
        v16,
        *(unsigned int *)(v12 + a4),
        v15,
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
