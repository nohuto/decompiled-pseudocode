/*
 * XREFs of ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180060790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 20) + 104LL))(
           *((_QWORD *)this + 20),
           a2);
}
