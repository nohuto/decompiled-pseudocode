/*
 * XREFs of ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C015C824
 * Callers:
 *     ?bFilterNotEnum@PFEOBJ@@QEAAHXZ @ 0x1C000474C (-bFilterNotEnum@PFEOBJ@@QEAAHXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010FF00 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0110BDC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0115720 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C015921A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02D5750 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPvtData *__fastcall PFFOBJ::pPvtDataMatch(PFFOBJ *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*(_QWORD *)this + 144LL);
        i
     && ((*(_DWORD *)(i + 8) & 4) == 0 || *(_DWORD *)(i + 12) != (unsigned int)PsGetCurrentThreadId())
     && *(_DWORD *)(i + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
        i = *(_QWORD *)(i + 16) )
  {
    ;
  }
  return (struct tagPvtData *)i;
}
