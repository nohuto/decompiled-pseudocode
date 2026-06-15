/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeStrip@@UEAAJPEAM@Z @ 0x180058E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevel(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 20) + 112LL))(*((_QWORD *)this + 20), a2);
}
