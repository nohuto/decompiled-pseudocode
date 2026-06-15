/*
 * XREFs of ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x18005C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMute(CVolumeStrip *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21), a2);
}
