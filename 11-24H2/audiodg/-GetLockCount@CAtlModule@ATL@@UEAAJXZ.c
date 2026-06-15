/*
 * XREFs of ?GetLockCount@CAtlModule@ATL@@UEAAJXZ @ 0x140065580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlModule::GetLockCount(ATL::CAtlModule *this)
{
  return *((unsigned int *)this + 3);
}
