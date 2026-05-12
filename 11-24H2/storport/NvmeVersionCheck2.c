/*
 * XREFs of NvmeVersionCheck2 @ 0x1400BFE38
 * Callers:
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 * Callees:
 *     NvmeVersionCheck @ 0x1400BFE0C (NvmeVersionCheck.c)
 */

char __fastcall NvmeVersionCheck2(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r9d
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // eax

  if ( a2 < 2 )
    return NvmeVersionCheck(a1, a2, a3);
  v4 = *(unsigned __int16 *)(a1 + 578);
  v5 = v4 < a2;
  v6 = v4 == a2;
  if ( v4 == a2 )
  {
    v7 = *(unsigned __int8 *)(a1 + 577);
    if ( v7 == a3 || v7 >= a3 )
      return 1;
    v5 = v4 < a2;
    v6 = v4 == a2;
  }
  return !v5 && !v6;
}
