/*
 * XREFs of VfZwSetDriverEntryOrder_Entry @ 0x140B95FD0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetDriverEntryOrder_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckVirtualAddress(*(_QWORD *)(v3 + 16), *(_QWORD *)v3);
  return result;
}
