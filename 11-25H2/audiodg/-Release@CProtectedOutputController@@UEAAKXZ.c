/*
 * XREFs of ?Release@CProtectedOutputController@@UEAAKXZ @ 0x14006D320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtectedOutputController::Release(CProtectedOutputController *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
}
