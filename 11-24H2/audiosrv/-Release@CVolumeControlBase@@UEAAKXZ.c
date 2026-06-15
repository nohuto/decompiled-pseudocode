/*
 * XREFs of ?Release@CVolumeControlBase@@UEAAKXZ @ 0x180068B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::Release(CVolumeControlBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 60);
  if ( !v1 && this )
    (*(void (__fastcall **)(CVolumeControlBase *, __int64))(*(_QWORD *)this + 232LL))(this, 1LL);
  return v1;
}
