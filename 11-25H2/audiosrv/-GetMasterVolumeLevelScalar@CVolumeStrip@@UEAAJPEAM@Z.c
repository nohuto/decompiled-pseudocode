/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18006D300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevelScalar(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 20) + 120LL))(*((_QWORD *)this + 20), a2);
}
