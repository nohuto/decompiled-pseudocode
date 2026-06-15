/*
 * XREFs of ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x18007A660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeRange(CVolumeStrip *this, __int64 a2, float *a3, float *a4, float *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *, float *, float *))(**((_QWORD **)this + 20) + 160LL))(
           *((_QWORD *)this + 20),
           a2,
           a3,
           a4,
           a5);
}
