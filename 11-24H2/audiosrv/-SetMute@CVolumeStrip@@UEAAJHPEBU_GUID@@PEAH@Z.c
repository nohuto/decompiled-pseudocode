/*
 * XREFs of ?SetMute@CVolumeStrip@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x180075F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::SetMute(CVolumeStrip *this, __int64 a2, const struct _GUID *a3, int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 21) + 88LL))(
           *((_QWORD *)this + 21),
           a2,
           a3,
           a4);
}
