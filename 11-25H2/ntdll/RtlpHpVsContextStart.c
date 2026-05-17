/*
 * XREFs of RtlpHpVsContextStart @ 0x18011E4E4
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegLfhExtendContext @ 0x1800B7D20 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpVsSlotCreate @ 0x18011E5C0 (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1)
{
  int v1; // r14d
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdx
  _WORD *v7; // rax
  unsigned int v8; // edi
  _WORD *v9; // rbx
  __int64 v10; // rax
  _WORD *v11; // rdx

  v1 = *(unsigned __int8 *)(a1 + 2);
  v3 = *(_QWORD *)(a1 + 8) ^ a1;
  v4 = (unsigned int)(v1 + 1);
  v5 = (unsigned __int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48));
  v6 = 4 * (_DWORD)v4 - ((4 * (_BYTE)v4 - 1) & 0x3Fu) + 63;
  if ( v5 == RtlpHpSegLfhExtendContext )
    v7 = (_WORD *)RtlpHpSegLfhExtendContext(v3, v6);
  else
    v7 = (_WORD *)v5(v3, v6);
  v8 = 0;
  v9 = v7;
  if ( v7
    && (memset_thunk_772440563353939046(v7, 0, 4 * (_DWORD)v4 - ((4 * (_BYTE)v4 - 1) & 0x3Fu) + 63),
        *(_WORD *)a1 = ((unsigned __int64)v9 - a1) >> 6,
        (v10 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v11 = &v9[2 * v4];
    while ( v9 < v11 )
    {
      *v9 = (unsigned __int64)(v10 - a1) >> 6;
      v9 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
