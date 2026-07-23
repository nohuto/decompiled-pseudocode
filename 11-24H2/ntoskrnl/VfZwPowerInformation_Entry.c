/*
 * XREFs of VfZwPowerInformation_Entry @ 0x140B95D60
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwPowerInformation_Entry(__int64 a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 32), *(_QWORD *)a1);
    return ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  }
  return result;
}
