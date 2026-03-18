/*
 * XREFs of ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x140042600
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1403782EC (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x140042660 (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 */

__int64 __fastcall IndexedSet<DMMVIDPNSOURCE>::Add<DMMVIDPNSOURCE>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return (unsigned __int8)Set<DMMVIDPNSOURCE>::Add(a1, a2, a3, v3) != 0 ? 3 : 1;
  a3 = 0LL;
  v3 -= 8LL;
  if ( !v3 )
    return (unsigned __int8)Set<DMMVIDPNSOURCE>::Add(a1, a2, a3, v3) != 0 ? 3 : 1;
  while ( *(_DWORD *)(v3 + 24) != *(_DWORD *)(a2 + 24) )
  {
    v5 = *(_QWORD *)(v3 + 8);
    v3 = v5 - 8;
    if ( v5 == a1 + 24 )
      v3 = 0LL;
    if ( !v3 )
      return (unsigned __int8)Set<DMMVIDPNSOURCE>::Add(a1, a2, a3, v3) != 0 ? 3 : 1;
  }
  LOBYTE(a3) = v3 != a2;
  return (unsigned int)(a3 + 1);
}
