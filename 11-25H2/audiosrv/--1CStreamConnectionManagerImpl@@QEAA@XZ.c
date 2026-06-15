/*
 * XREFs of ??1CStreamConnectionManagerImpl@@QEAA@XZ @ 0x18010F6F8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ @ 0x180113F50 (-_Destroy@-$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStreamConnectionManagerImpl::~CStreamConnectionManagerImpl(CStreamConnectionManagerImpl *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CStreamConnectionManagerImpl::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
