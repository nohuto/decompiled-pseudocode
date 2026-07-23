/*
 * XREFs of MiPfnIsPageTable @ 0x140685A5C
 * Callers:
 *     MiPfnIsActivePageTable @ 0x140251DBC (MiPfnIsActivePageTable.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnIsPageTable(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 && *(__int64 *)(a1 + 40) >= 0 )
  {
    v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v2 = (__int64)(v1 << 25) >> 16;
      if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL )
        return 1;
    }
  }
  return result;
}
