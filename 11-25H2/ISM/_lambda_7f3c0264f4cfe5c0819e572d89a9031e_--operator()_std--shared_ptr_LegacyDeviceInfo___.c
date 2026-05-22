/*
 * XREFs of _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800CC274
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CCEA0 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     __std_find_trivial_4 @ 0x18009E3A0 (__std_find_trivial_4.c)
 */

bool __fastcall lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
        const __m128i ***a1,
        unsigned int **a2)
{
  return _std_find_trivial_4(**a1, (*a1)[1], **a2) != (*a1)[1];
}
