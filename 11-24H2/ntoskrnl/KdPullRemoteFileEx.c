/*
 * XREFs of KdPullRemoteFileEx @ 0x140B78680
 * Callers:
 *     <none>
 * Callees:
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFileEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return KdpPullRemoteFile(a1, a1, a2, a3, a4, a5);
}
