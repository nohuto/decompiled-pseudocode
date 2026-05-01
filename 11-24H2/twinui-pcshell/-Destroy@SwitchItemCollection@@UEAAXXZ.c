/*
 * XREFs of ?Destroy@SwitchItemCollection@@UEAAXXZ @ 0x1804B2EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemCollection::Destroy(SwitchItemCollection *this)
{
  if ( *((_DWORD *)this + 52) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
    *((_DWORD *)this + 52) = 0;
  }
}
