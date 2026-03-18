/*
 * XREFs of MiCopyPfnEntryRaw @ 0x140441C20
 * Callers:
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiCreateInitialPfns @ 0x14066C460 (MiCreateInitialPfns.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MxCreatePfn @ 0x140C526E4 (MxCreatePfn.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C580B8 (MiCreateResidentBasePfnTemplate.c)
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
