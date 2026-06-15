/*
 * XREFs of ?GetVolumeStepInfo@CVolumeStrip@@UEAAJPEAI0@Z @ 0x18006E830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetVolumeStepInfo(CVolumeStrip *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 20) + 184LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
