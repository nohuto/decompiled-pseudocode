/*
 * XREFs of RtlpHpVsContextStart @ 0x14060742C
 * Callers:
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x1406055D0 (RtlpHpFixedHeapCreate.c)
 * Callees:
 *     RtlpHpVsSlotCreate @ 0x1406074FC (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r8
  size_t v7; // r14
  _WORD *v8; // rax
  unsigned int v9; // edi
  _WORD *v10; // rbx
  __int64 v11; // rax
  _WORD *v12; // rdx

  v5 = (unsigned int)*(unsigned __int8 *)(a1 + 2) + 1;
  v6 = 4 * (_DWORD)v5 - ((4 * (_BYTE)v5 - 1) & 0x3Fu) + 63;
  v7 = (unsigned int)v6;
  v8 = (_WORD *)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, (unsigned int)v6, v6, a4);
  v9 = 0;
  v10 = v8;
  if ( v8
    && (memset_0(v8, 0, v7), *(_WORD *)a1 = ((unsigned __int64)v10 - a1) >> 6, (v11 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v12 = &v10[2 * v5];
    while ( v10 < v12 )
    {
      *v10 = (unsigned __int64)(v11 - a1) >> 6;
      v10 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
