/*
 * XREFs of ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1806C8258
 * Callers:
 *     ??1?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAA@XZ @ 0x1806C81C4 (--1-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAA@XZ.c)
 *     ??1BUCKET@@QEAA@XZ @ 0x1806C81E0 (--1BUCKET@@QEAA@XZ.c)
 * Callees:
 *     DPA_Destroy @ 0x1806C9B80 (DPA_Destroy.c)
 *     DPA_DestroyCallback @ 0x1806C9BE0 (DPA_DestroyCallback.c)
 */

BOOL __fastcall CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(struct _DPA **a1)
{
  BOOL result; // eax
  struct _DPA *v3; // rcx

  result = 1;
  v3 = *a1;
  if ( v3 )
  {
    g_pfn_DPA_DestroyCallback(v3, (PFNDAENUMCALLBACK)CActionCenterExperienceManager::IsHintSupported, 0LL);
    *a1 = 0LL;
    result = DPA_Destroy(0LL);
    *a1 = 0LL;
  }
  return result;
}
