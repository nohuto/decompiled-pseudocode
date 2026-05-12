/*
 * XREFs of BuildIdentifyCommandGeneric @ 0x1400BE880
 * Callers:
 *     NvmeGetActiveNameSpaceIdList @ 0x1400BF674 (NvmeGetActiveNameSpaceIdList.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400F8EB4 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 * Callees:
 *     NvmeControllerSupportsUUIDList @ 0x1400BF638 (NvmeControllerSupportsUUIDList.c)
 *     NvmeVersionCheck2 @ 0x1400BFE38 (NvmeVersionCheck2.c)
 */

__int64 __fastcall BuildIdentifyCommandGeneric(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r11d
  unsigned __int8 v13; // r10
  int v14; // r11d

  *(_DWORD *)(a2 + 4) = a8;
  *(_QWORD *)(a2 + 24) = a7;
  *(_BYTE *)(a2 + 47) = a6;
  *(_BYTE *)a2 = 6;
  *(_BYTE *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 42) = 0;
  result = NvmeControllerSupportsUUIDList();
  if ( (_BYTE)result )
  {
    v13 = a9;
    result = (unsigned int)(a9 - 1);
    if ( (unsigned int)result <= 0x7E )
    {
      if ( !v12
        || (v14 = v12 - 1) == 0
        || (unsigned int)(v14 - 4) <= 1 && (result = NvmeVersionCheck2(v11, 2LL), (_BYTE)result) )
      {
        result = *(unsigned int *)(a2 + 56);
        *(_DWORD *)(a2 + 56) = result ^ ((unsigned __int8)result ^ v13) & 0x7F;
      }
    }
  }
  return result;
}
