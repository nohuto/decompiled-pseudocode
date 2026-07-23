/*
 * XREFs of MiCopyPfnEntryRaw @ 0x1404386A0
 * Callers:
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiCreateInitialPfns @ 0x14066D630 (MiCreateInitialPfns.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MxCreatePfn @ 0x140C54874 (MxCreatePfn.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C5A248 (MiCreateResidentBasePfnTemplate.c)
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
