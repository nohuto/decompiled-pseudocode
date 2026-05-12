/*
 * XREFs of NvmeProtocolSpecificRequestShiftBuffer @ 0x1400886D4
 * Callers:
 *     NvmeQueryProtocolInfoFeatureData @ 0x14012B8A0 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeProtocolSpecificRequestShiftBuffer(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  __int64 *v5; // rcx
  __int64 v6; // rbx

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)(v1 + 16);
  if ( v3 < 8 )
    return 3221225485LL;
  v5 = *(__int64 **)(a1 + 24);
  v6 = *v5;
  memmove(v5, v5 + 1, v3 - 8);
  *(_QWORD *)(*(unsigned int *)(v1 + 16) + *(_QWORD *)(a1 + 24) - 8LL) = v6;
  return 0LL;
}
