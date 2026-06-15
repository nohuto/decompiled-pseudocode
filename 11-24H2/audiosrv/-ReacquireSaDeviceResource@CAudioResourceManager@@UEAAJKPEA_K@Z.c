/*
 * XREFs of ?ReacquireSaDeviceResource@CAudioResourceManager@@UEAAJKPEA_K@Z @ 0x18006AF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReacquireSaDeviceResource(
        CAudioResourceManager *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(**((_QWORD **)this + 6) + 56LL))(
           *((_QWORD *)this + 6),
           a2,
           a3);
}
