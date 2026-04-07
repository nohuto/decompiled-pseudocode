/*
 * XREFs of ?UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003E59C
 * Callers:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateAlpha(CSecondaryWindowRepresentation *this)
{
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
    }
  }
  return 0LL;
}
