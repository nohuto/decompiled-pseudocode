/*
 * XREFs of ?DecrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800CC450
 * Callers:
 *     ?DecrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x1800CC460 (-DecrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModule::DecrementObjectCount(Windows::Internal::ServiceModule *this)
{
  return Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>::DecrementObjectCount((__int64)this + 40);
}
