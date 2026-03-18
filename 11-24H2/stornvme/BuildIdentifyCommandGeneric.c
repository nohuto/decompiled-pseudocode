/*
 * XREFs of BuildIdentifyCommandGeneric @ 0x14001F0F4
 * Callers:
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x140027E58 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x14002881C (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x14002891C (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140028C30 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140028D94 (NVMeGetNamespaceIoCommandSetIdentify.c)
 * Callees:
 *     NVMeControllerSupportsUUIDList @ 0x14000D6E0 (NVMeControllerSupportsUUIDList.c)
 *     NVMeVersionCheck2 @ 0x140016F80 (NVMeVersionCheck2.c)
 */

char __fastcall BuildIdentifyCommandGeneric(
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
  int v10; // eax
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r11
  int v14; // r10d

  *(_DWORD *)(a2 + 4) = a8;
  *(_QWORD *)(a2 + 24) = a7;
  *(_BYTE *)(a2 + 47) = a6;
  *(_BYTE *)a2 = 6;
  *(_BYTE *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 42) = 0;
  LOBYTE(v10) = NVMeControllerSupportsUUIDList(a1);
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = a9 - 1;
    if ( (unsigned int)(a9 - 1) <= 0x7E )
    {
      if ( !v12
        || (v14 = v12 - 1) == 0
        || (unsigned int)(v14 - 4) <= 1 && (LOBYTE(v10) = NVMeVersionCheck2(a1, 2LL, 0LL, v11), (_BYTE)v10) )
      {
        v10 = *(_DWORD *)(v13 + 56);
        *(_DWORD *)(v13 + 56) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)a9) & 0x7F;
      }
    }
  }
  return v10;
}
