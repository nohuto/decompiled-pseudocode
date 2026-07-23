/*
 * XREFs of MiPageMightBeZero @ 0x1403421F4
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 */

__int64 __fastcall MiPageMightBeZero(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v5; // rdi

  if ( *(__int64 *)(a2 + 40) < 0 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) >= 0 && *(_QWORD *)(a2 + 8)
      || (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
    {
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      return 0LL;
    if ( (MiGetPagePrivilege(a2, 0, 0LL) & 0xFFFFFFFD) != 0 )
      return 0LL;
    v5 = a3 << 25 >> 16;
    if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 1 && (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x40 )
    return ((unsigned __int8)~HIBYTE(*(_DWORD *)(a2 + 32)) >> 6) & 1;
  return 0LL;
}
