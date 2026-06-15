/*
 * XREFs of ?IncrementObjectCount@SvcHostModule@Internal@Windows@@UEAAKXZ @ 0x18006F850
 * Callers:
 *     ?IncrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ @ 0x1800CD470 (-IncrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SvcHostModule::IncrementObjectCount(Windows::Internal::SvcHostModule *this)
{
  return CoAddRefSharedService(*((unsigned int *)this + 14));
}
