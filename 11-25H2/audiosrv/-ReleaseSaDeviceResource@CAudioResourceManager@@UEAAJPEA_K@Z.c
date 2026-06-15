/*
 * XREFs of ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x1800815D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReleaseSaDeviceResource(CAudioResourceManager *this, unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 6) + 72LL))(
           *((_QWORD *)this + 6),
           a2);
}
