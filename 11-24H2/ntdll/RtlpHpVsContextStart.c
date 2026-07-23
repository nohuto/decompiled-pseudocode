/*
 * XREFs of RtlpHpVsContextStart @ 0x18011AE84
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpVsSlotCreate @ 0x18011AF60 (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1)
{
  int v1; // r14d
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 (__fastcall *v5)(__int64); // rax
  _WORD *v6; // rax
  unsigned int v7; // edi
  _WORD *v8; // rbx
  __int64 v9; // rax
  _WORD *v10; // rdx

  v1 = *(unsigned __int8 *)(a1 + 2);
  v3 = *(_QWORD *)(a1 + 8) ^ a1;
  v4 = (unsigned int)(v1 + 1);
  v5 = (__int64 (__fastcall *)(__int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48));
  if ( v5 == RtlpHpSegLfhExtendContext )
    v6 = (_WORD *)RtlpHpSegLfhExtendContext(v3);
  else
    v6 = (_WORD *)((__int64 (__fastcall *)(__int64, _QWORD))v5)(v3, 4 * (_DWORD)v4 - ((4 * (_BYTE)v4 - 1) & 0x3Fu) + 63);
  v7 = 0;
  v8 = v6;
  if ( v6
    && (memset_thunk_772440563353939046(v6, 0, 4 * (_DWORD)v4 - ((4 * (_BYTE)v4 - 1) & 0x3Fu) + 63),
        *(_WORD *)a1 = ((unsigned __int64)v8 - a1) >> 6,
        (v9 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v10 = &v8[2 * v4];
    while ( v8 < v10 )
    {
      *v8 = (unsigned __int64)(v9 - a1) >> 6;
      v8 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
