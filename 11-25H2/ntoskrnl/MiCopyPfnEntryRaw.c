/*
 * XREFs of MiCopyPfnEntryRaw @ 0x140441F40
 * Callers:
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiCreateInitialPfns @ 0x140660920 (MiCreateInitialPfns.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiClearFileOnlyPfn @ 0x14066EDA0 (MiClearFileOnlyPfn.c)
 *     MxCreatePfn @ 0x140C414B4 (MxCreatePfn.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C46DD8 (MiCreateResidentBasePfnTemplate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCopyPfnEntryRaw(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax

  v2 = a1 - (_QWORD)a2;
  v3 = 6LL;
  do
  {
    result = *a2;
    *(__int64 *)((char *)a2 + v2) = *a2;
    ++a2;
    --v3;
  }
  while ( v3 );
  return result;
}
