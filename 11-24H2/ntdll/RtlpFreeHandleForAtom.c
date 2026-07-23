/*
 * XREFs of RtlpFreeHandleForAtom @ 0x18007B6A8
 * Callers:
 *     RtlpFreeAllAtom @ 0x18007B560 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18010E600 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidHandle @ 0x18007B710 (RtlIsValidHandle.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  _RTL_HANDLE_TABLE *v4; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v5; // rbx
  _RTL_HANDLE_TABLE_ENTRY *v6; // rax

  v3 = *(_DWORD *)(a1 + 20);
  v4 = (_RTL_HANDLE_TABLE *)(a1 + 16);
  v5 = (PRTL_HANDLE_TABLE_ENTRY)((char *)v4->CommittedHandles + v3 * *(unsigned __int16 *)(a2 + 8));
  LOBYTE(v6) = RtlIsValidHandle(v4, v5);
  if ( (_BYTE)v6 )
  {
    memset_thunk_772440563353939046(v5, 0, v3);
    v6 = *(_RTL_HANDLE_TABLE_ENTRY **)(a1 + 32);
    v5->NextFree = v6;
    *(_QWORD *)(a1 + 32) = v5;
  }
  return (char)v6;
}
