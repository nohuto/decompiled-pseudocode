/*
 * XREFs of RtlpHpVsSlotCreate @ 0x18011AF60
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x18011A6A4 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpVsContextStart @ 0x18011AE84 (RtlpHpVsContextStart.c)
 * Callees:
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 *     RtlInitializeSListHead @ 0x1800E1360 (RtlInitializeSListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_SLIST_HEADER *__fastcall RtlpHpVsSlotCreate(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax
  _SLIST_HEADER *v5; // rbx
  char v6; // al

  v2 = *(_QWORD *)(a1 + 8) ^ a1;
  v3 = (__int64 (__fastcall *)(__int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48));
  if ( v3 == RtlpHpSegLfhExtendContext )
    v4 = RtlpHpSegLfhExtendContext(v2);
  else
    v4 = ((__int64 (__fastcall *)(__int64, __int64))v3)(v2, 128LL);
  v5 = (_SLIST_HEADER *)v4;
  if ( v4 )
  {
    memset_thunk_772440563353939046((void *)(v4 + 16), 0, 0x70uLL);
    v5->Region = 0LL;
    v5->Alignment = (unsigned __int64)v5 - a1;
    v6 = *(_BYTE *)(a1 + 5);
    v5[1].Alignment = 0LL;
    v5[1].Region = 0LL;
    if ( (v6 & 1) != 0 )
      *((_BYTE *)&v5[1].HeaderX64 + 8) = 1;
    v5[2].Region = 0LL;
    v5[2].Alignment = 0LL;
    v5[4] = 0LL;
    RtlInitializeSListHead(v5 + 4);
  }
  return v5;
}
