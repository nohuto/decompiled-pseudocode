/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180063E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevel(CVolumeStrip *this, __int64 a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 20) + 160LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
