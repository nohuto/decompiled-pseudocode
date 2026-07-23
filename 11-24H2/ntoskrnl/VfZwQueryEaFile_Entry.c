/*
 * XREFs of VfZwQueryEaFile_Entry @ 0x140B96930
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryEaFile_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 48), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 32), *(_QWORD *)a1);
    return ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  }
  return result;
}
