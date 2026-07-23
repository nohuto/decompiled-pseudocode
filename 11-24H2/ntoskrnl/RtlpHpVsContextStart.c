/*
 * XREFs of RtlpHpVsContextStart @ 0x140604A2C
 * Callers:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     RtlpHpFixedHeapCreate @ 0x140602C10 (RtlpHpFixedHeapCreate.c)
 * Callees:
 *     RtlpHpVsSlotCreate @ 0x140604AFC (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1)
{
  __int64 v2; // rbp
  size_t v3; // r14
  _WORD *v4; // rax
  unsigned int v5; // edi
  _WORD *v6; // rbx
  __int64 v7; // rax
  _WORD *v8; // rdx

  v2 = (unsigned int)*(unsigned __int8 *)(a1 + 2) + 1;
  v3 = 4 * (_DWORD)v2 - ((4 * (_BYTE)v2 - 1) & 0x3Fu) + 63;
  v4 = (_WORD *)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, v3);
  v5 = 0;
  v6 = v4;
  if ( v4 && (memset_0(v4, 0, v3), *(_WORD *)a1 = ((unsigned __int64)v6 - a1) >> 6, (v7 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v8 = &v6[2 * v2];
    while ( v6 < v8 )
    {
      *v6 = (unsigned __int64)(v7 - a1) >> 6;
      v6 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
