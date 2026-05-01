/*
 * XREFs of ?SetQueryHelper@CQueryKnownGameList@@UEAAJPEAUIQueryHelper@KnownGameList@@@Z @ 0x180041B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::SetQueryHelper(
        struct _RTL_CRITICAL_SECTION *this,
        struct KnownGameList::IQueryHelper *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  ULONG_PTR SpinCount; // rcx

  v4 = this + 19;
  EnterCriticalSection(this + 19);
  if ( (struct KnownGameList::IQueryHelper *)this[18].SpinCount != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct KnownGameList::IQueryHelper *))(*(_QWORD *)a2 + 8LL))(a2);
    SpinCount = this[18].SpinCount;
    this[18].SpinCount = (ULONG_PTR)a2;
    if ( SpinCount )
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
