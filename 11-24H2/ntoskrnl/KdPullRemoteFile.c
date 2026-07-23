/*
 * XREFs of KdPullRemoteFile @ 0x140B78618
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x1407C4C90 (ExpKdPullRemoteFileForUser.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 * Callees:
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFile(int a1, int a2)
{
  _DWORD v3[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+44h] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v3[0] = 128;
  v3[1] = 5;
  v3[2] = 32;
  return KdpPullRemoteFile(
           a1,
           a2,
           (unsigned int)KdpCreateFileCallback,
           (unsigned int)&KdpWriteFileCallback,
           (__int64)KdpCloseFileCallback,
           (__int64)v3);
}
