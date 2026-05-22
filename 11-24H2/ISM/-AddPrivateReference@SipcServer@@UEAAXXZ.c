/*
 * XREFs of ?AddPrivateReference@SipcServer@@UEAAXXZ @ 0x18010D530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcServer::AddPrivateReference(SipcServer *this)
{
  _InterlockedAdd64((volatile signed __int64 *)this - 1, 0x100000000uLL);
}
