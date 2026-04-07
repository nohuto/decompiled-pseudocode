/*
 * XREFs of ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180078C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBase::Release(CMILRefCountBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMILRefCountBase *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
