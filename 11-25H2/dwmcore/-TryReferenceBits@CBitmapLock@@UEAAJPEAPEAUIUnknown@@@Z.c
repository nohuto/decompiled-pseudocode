/*
 * XREFs of ?TryReferenceBits@CBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z @ 0x180261610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapLock::TryReferenceBits(struct IUnknown *this, struct IUnknown **a2)
{
  struct IUnknownVtbl *lpVtbl; // rcx

  *a2 = 0LL;
  lpVtbl = this[8].lpVtbl;
  if ( lpVtbl )
  {
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    *a2 = (struct IUnknown *)this[8].lpVtbl;
  }
  else if ( BYTE5(this[15].lpVtbl) )
  {
    ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
    *a2 = this;
  }
  return 0LL;
}
