/*
 * XREFs of RtlpHpLfhContextStart @ 0x1800D631C
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhContextStart(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, size_t); // rax
  size_t v2; // rdi
  __int64 v3; // rcx
  void *v4; // rax
  unsigned int v5; // ebx

  v1 = (__int64 (__fastcall *)(__int64, size_t))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40));
  v2 = (unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8;
  v3 = *(_QWORD *)a1;
  if ( v1 == RtlpHpSegLfhExtendContext )
    v4 = (void *)RtlpHpSegLfhExtendContext(v3, v2);
  else
    v4 = (void *)v1(v3, v2);
  v5 = 0;
  if ( v4 )
    memset_thunk_772440563353939046(v4, 0, v2);
  else
    return (unsigned int)-1073741670;
  return v5;
}
