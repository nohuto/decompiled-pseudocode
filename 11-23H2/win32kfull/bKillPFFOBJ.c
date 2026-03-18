/*
 * XREFs of bKillPFFOBJ @ 0x1C00C56F0
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C5280 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0115720 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00C571C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

__int64 __fastcall bKillPFFOBJ(PFFOBJ *a1, struct PFFCLEANUP *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 68LL) && !*(_DWORD *)(*(_QWORD *)a1 + 64LL) )
  {
    PFFOBJ::vPFFC_Delete(a1, a2);
    return 1LL;
  }
  return result;
}
