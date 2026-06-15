/*
 * XREFs of ?IsSubjectToConstraintResourceManagement@CAudioResourceManager@@UEAA_NPEAUIMMDevice@@@Z @ 0x1800BE440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::IsSubjectToConstraintResourceManagement(
        CAudioResourceManager *this,
        struct IMMDevice *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IMMDevice *))(**((_QWORD **)this + 6) + 88LL))(
           *((_QWORD *)this + 6),
           a2);
}
