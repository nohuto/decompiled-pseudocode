/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x1801A18DC
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801A0F90 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801A188C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this)
{
  void (***v2)(void); // rcx
  void (**v3)(void); // rdx
  void (*v4)(void); // rax

  v2 = (void (***)(void))*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    if ( *(_QWORD *)this )
      v4 = *v3;
    else
      v4 = v3[1];
    v4();
  }
}
