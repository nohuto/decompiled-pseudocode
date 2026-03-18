/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140A9E2DC
 * Callers:
 *     MiMapSystemImage @ 0x140A8B428 (MiMapSystemImage.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // r8d
  unsigned __int64 v3; // rdx

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( v2 != 1 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v3);
    return 0LL;
  }
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v3, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}
