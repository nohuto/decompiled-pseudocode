/*
 * XREFs of WdInstrExecuteInstruction @ 0x14056CBC4
 * Callers:
 *     WdInstrExecuteAction @ 0x1404C693C (WdInstrExecuteAction.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055F5C8 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WdInstrExecuteInstruction(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned int v14; // eax
  int v15; // ecx

  v6 = *(unsigned __int8 *)(a1 + 1);
  v7 = 0;
  v8 = *(_BYTE *)(a1 + 1) & 0x3F;
  if ( !v8 )
  {
    if ( a3 )
    {
      v14 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2, v6, a4) >> *(_BYTE *)(a1 + 49));
      v15 = *(_DWORD *)(a1 + 52);
      LOBYTE(v7) = v14 == v15;
      *a3 = v7;
      return v15 != v14 ? 0xC0000001 : 0;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 )
    {
      *a3 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2, v6, a4) >> *(_BYTE *)(a1 + 49));
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v13 = (*(_DWORD *)(a1 + 56) & *(_DWORD *)(a1 + 52)) << *(_BYTE *)(a1 + 49);
    if ( (v6 & 0x80u) != 0LL )
      v13 |= guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2, v6, a4) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
    v12 = v13;
    goto LABEL_11;
  }
  if ( v10 == 1 )
  {
    v11 = ((unsigned int)a2 & *(_DWORD *)(a1 + 56)) << *(_BYTE *)(a1 + 49);
    if ( (v6 & 0x80u) != 0LL )
      v11 |= guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2, v6, a4) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
    v12 = v11;
LABEL_11:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), v12, v6, a4);
  }
  return v7;
}
