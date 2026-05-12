/*
 * XREFs of NvmeNamespaceGetStorageDeviceProperty @ 0x1401A5244
 * Callers:
 *     NvmeNamespaceStorageQueryDevicePropertyIoctl @ 0x1401AE850 (NvmeNamespaceStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x14003310C (RaidRemoveTrailingBlanks.c)
 *     StorBuildNVMeSerialNumber @ 0x14008EC8C (StorBuildNVMeSerialNumber.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1400A1C98 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceGetStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // cf
  char v12; // al
  __int64 result; // rax
  _DWORD Src[14]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[2]; // [rsp+59h] [rbp-A7h] BYREF
  int v16; // [rsp+79h] [rbp-87h]
  __int16 v17; // [rsp+7Dh] [rbp-83h]
  char v18; // [rsp+7Fh] [rbp-81h]
  __int128 v19; // [rsp+9Ah] [rbp-66h] BYREF
  _BYTE v20[261]; // [rsp+ABh] [rbp-55h] BYREF
  __int128 v21; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 592);
  v21 = 0LL;
  memset_0(Src, 0, 0x18CuLL);
  v8 = *a3;
  v9 = *(_OWORD *)(v7 + 24);
  if ( *a3 > 0x18C )
    v8 = 396;
  v10 = *(_OWORD *)(v7 + 40);
  v11 = (*(_BYTE *)(v3 + 136) & 2) != 0;
  Src[1] = 396;
  v16 = *(_DWORD *)(v7 + 56);
  v17 = *(_WORD *)(v7 + 60);
  v12 = *(_BYTE *)(v7 + 62);
  Src[7] = v11 ? 20 : 17;
  Src[0] = 40;
  Src[2] = 0x1000000;
  v15[0] = v9;
  v18 = v12;
  v15[1] = v10;
  Src[4] = 57;
  StorCopyNVMeFirmwareRevision(v7, (__int64)&v21, 0x11u);
  Src[5] = 122;
  v19 = v21;
  StorBuildNVMeSerialNumber(a1, 0x100u, (__int64)v20);
  RaidRemoveTrailingBlanks((__int64)v15, 65);
  RaidRemoveTrailingBlanks((__int64)&v19, 17);
  RaidRemoveTrailingBlanks((__int64)v20, 256);
  Src[6] = 139;
  memmove(a2, Src, v8);
  result = 0LL;
  *a3 = v8;
  return result;
}
