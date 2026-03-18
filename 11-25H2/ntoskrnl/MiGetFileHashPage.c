/*
 * XREFs of MiGetFileHashPage @ 0x1402D1F24
 * Callers:
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  ULONG *v2; // rdi
  __int64 Page; // rbx

  v2 = *(ULONG **)(a1 + 216);
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2LL) < 0 )
  {
    ++dword_140E2FF1C;
    return -1LL;
  }
  else
  {
    Page = MiGetPage((__int64)v2, a2, 0x30u);
    if ( Page == -1 )
    {
      ++dword_140E2FF1C;
      MiReleaseNonPagedResources((__int64)v2, 1uLL);
    }
    else
    {
      _InterlockedIncrement64(&qword_140E385A8);
    }
    return Page;
  }
}
