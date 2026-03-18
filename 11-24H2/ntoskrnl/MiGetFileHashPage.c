/*
 * XREFs of MiGetFileHashPage @ 0x140486B9C
 * Callers:
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  ULONG *v2; // rdi
  __int64 Page; // rbx

  v2 = *(ULONG **)(a1 + 216);
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2u) < 0 )
  {
    ++dword_140E30164;
    return -1LL;
  }
  else
  {
    Page = MiGetPage((__int64)v2, a2, 0x30u);
    if ( Page == -1 )
    {
      ++dword_140E30164;
      MiReleaseNonPagedResources((__int64)v2, 1uLL);
    }
    else
    {
      _InterlockedIncrement64(&qword_140E387E8);
    }
    return Page;
  }
}
