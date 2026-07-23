/*
 * XREFs of MiAttemptChangePagingFileMaximum @ 0x14067AF10
 * Callers:
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 * Callees:
 *     MiChangePagingFileMaximum @ 0x14067AF90 (MiChangePagingFileMaximum.c)
 *     MiReleasePageHash @ 0x1406923E0 (MiReleasePageHash.c)
 *     MiReservePageHash @ 0x140692440 (MiReservePageHash.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407EE4FC (MiCreatePageFileSpaceBitmaps.c)
 */

__int64 __fastcall MiAttemptChangePagingFileMaximum(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 PageFileSpaceBitmaps; // rax

  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 184) || (v2 = MiReservePageHash(a2)) != 0 )
  {
    PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(a2);
    if ( PageFileSpaceBitmaps )
    {
      MiChangePagingFileMaximum(a1, PageFileSpaceBitmaps, v2);
      return 0;
    }
    else
    {
      v5 = -1073741670;
      if ( v2 )
        MiReleasePageHash(v2, a2);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
