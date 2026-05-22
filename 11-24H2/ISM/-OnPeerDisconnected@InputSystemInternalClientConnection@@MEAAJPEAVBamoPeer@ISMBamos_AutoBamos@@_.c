/*
 * XREFs of ?OnPeerDisconnected@InputSystemInternalClientConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@_N@Z @ 0x18012DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall InputSystemInternalClientConnection::OnPeerDisconnected(
        InputSystemInternalClientConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2)
{
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 31);
  return 0LL;
}
