/*
 * XREFs of wistd::__function::__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180222000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3)
{
  return TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
           *(TouchKeyboardExperienceManager **)(a1 + 8),
           *a2 != 0,
           a3);
}
