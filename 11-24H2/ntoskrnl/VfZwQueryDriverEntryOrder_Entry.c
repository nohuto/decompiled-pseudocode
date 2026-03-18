/*
 * XREFs of VfZwQueryDriverEntryOrder_Entry @ 0x140B93CD0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B94D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B94DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDriverEntryOrder_Entry(__int64 a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
    return ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  }
  return result;
}
