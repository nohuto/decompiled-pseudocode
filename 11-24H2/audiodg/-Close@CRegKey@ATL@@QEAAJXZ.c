/*
 * XREFs of ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14008A250
 * Callers:
 *     ??1CRegKey@ATL@@QEAA@XZ @ 0x140089048 (--1CRegKey@ATL@@QEAA@XZ.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14008AA94 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B138 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ATL::CRegKey::Close(HKEY *this)
{
  LSTATUS result; // eax
  HKEY v3; // rcx

  result = 0;
  v3 = *this;
  if ( v3 )
  {
    result = RegCloseKey(v3);
    *this = 0LL;
  }
  return result;
}
