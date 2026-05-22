/*
 * XREFs of ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x180172130
 * Callers:
 *     <none>
 * Callees:
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180163DFC (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 */

__int64 __fastcall MPCManagerClientConnection::OnPeerDisconnected(
        RTL_SRWLOCK **this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  MPCManagerClient::OnServerConnectionChanged(this[32]);
  return 0LL;
}
