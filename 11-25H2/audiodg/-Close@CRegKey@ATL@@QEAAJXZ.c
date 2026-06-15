/*
 * XREFs of ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14008A7D0
 * Callers:
 *     ??1CRegKey@ATL@@QEAA@XZ @ 0x1400895C8 (--1CRegKey@ATL@@QEAA@XZ.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14008B014 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B6B8 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
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
