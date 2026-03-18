/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400AB814
 * Callers:
 *     NtGdiSTROBJ_vEnumStart @ 0x1400AA2C0 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400AA3D0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400AB66C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x14033AEE0 (NtGdiSTROBJ_dwGetCodePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_STROBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 216) )
    result = *(_QWORD *)(a1 + 208);
  else
    result = 0LL;
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
