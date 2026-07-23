/*
 * XREFs of MiGetFileHashPage @ 0x1404264BC
 * Callers:
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  ULONG *v2; // rdi
  __int64 Page; // rbx

  v2 = *(ULONG **)(a1 + 216);
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2LL) < 0 )
  {
    ++dword_140E302A4;
    return -1LL;
  }
  else
  {
    Page = MiGetPage((__int64)v2, a2, 0x30u);
    if ( Page == -1 )
    {
      ++dword_140E302A4;
      MiReleaseNonPagedResources((__int64)v2, 1uLL);
    }
    else
    {
      _InterlockedIncrement64(&qword_140E38928);
    }
    return Page;
  }
}
