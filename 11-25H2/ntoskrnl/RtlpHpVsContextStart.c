/*
 * XREFs of RtlpHpVsContextStart @ 0x1405FB0EC
 * Callers:
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x1405F9290 (RtlpHpFixedHeapCreate.c)
 * Callees:
 *     RtlpHpVsSlotCreate @ 0x1405FB1BC (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1)
{
  __int64 v2; // rbp
  _WORD *v3; // rax
  unsigned int v4; // edi
  _WORD *v5; // rbx
  __int64 v6; // rax
  _WORD *v7; // rdx

  v2 = (unsigned int)*(unsigned __int8 *)(a1 + 2) + 1;
  v3 = (_WORD *)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1);
  v4 = 0;
  v5 = v3;
  if ( v3
    && (memset_0(v3, 0, 4 * (_DWORD)v2 - ((4 * (_BYTE)v2 - 1) & 0x3Fu) + 63),
        *(_WORD *)a1 = ((unsigned __int64)v5 - a1) >> 6,
        (v6 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v7 = &v5[2 * v2];
    while ( v5 < v7 )
    {
      *v5 = (unsigned __int64)(v6 - a1) >> 6;
      v5 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
