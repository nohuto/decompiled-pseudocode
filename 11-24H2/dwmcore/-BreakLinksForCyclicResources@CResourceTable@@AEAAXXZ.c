/*
 * XREFs of ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x18018D31C
 * Callers:
 *     ??1CResourceTable@@UEAA@XZ @ 0x18018D2DC (--1CResourceTable@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResourceTable::BreakLinksForCyclicResources(CResourceTable *this)
{
  __int64 **v1; // rbx
  __int64 *v2; // r8
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  void (*v6)(void); // rax

  v1 = (__int64 **)((char *)this + 64);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == (__int64 *)v1 )
      break;
    if ( (__int64 **)v2[1] != v1 || (v3 = (__int64 *)*v2, *(__int64 **)(*v2 + 8) != v2) )
      __fastfail(3u);
    *v1 = v3;
    v3[1] = (__int64)v1;
    v4 = *(v2 - 1);
    v5 = (unsigned __int64)v2 & -(__int64)(v2 != (__int64 *)8);
    *v2 = v5;
    v6 = *(void (**)(void))(v4 + 8);
    v2[1] = v5;
    v6();
  }
}
