/*
 * XREFs of ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x140114858
 * Callers:
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x14011475C (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x1401147E8 (-Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::AttachProcessObj::Attach(PRKAPC_STATE ApcState, PRKPROCESS PROCESS)
{
  if ( !LOBYTE(ApcState[1].ApcListHead[0].Flink) )
  {
    KeStackAttachProcess(PROCESS, ApcState);
    LOBYTE(ApcState[1].ApcListHead[0].Flink) = 1;
  }
}
