/*
 * XREFs of ?Release@CMuteControlBase@@UEAAKXZ @ 0x18007F3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteControlBase::Release(CMuteControlBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMuteControlBase *, __int64))(*(_QWORD *)this + 88LL))(this, 1LL);
  return v1;
}
