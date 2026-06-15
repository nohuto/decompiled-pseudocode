/*
 * XREFs of ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x1400768E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LPVOID __fastcall ATL::CWin32Heap::Reallocate(HANDLE *this, void *a2, SIZE_T a3)
{
  if ( !a2 )
    return (LPVOID)(*(__int64 (__fastcall **)(HANDLE *, SIZE_T))*this)(this, a3);
  if ( a3 )
    return HeapReAlloc(this[1], 0, a2, a3);
  (*((void (__fastcall **)(HANDLE *))*this + 1))(this);
  return 0LL;
}
