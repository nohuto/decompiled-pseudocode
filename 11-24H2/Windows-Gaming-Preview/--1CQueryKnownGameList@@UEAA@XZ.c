/*
 * XREFs of ??1CQueryKnownGameList@@UEAA@XZ @ 0x18003D2A4
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D3F0 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CQueryKnownGameList::~CQueryKnownGameList(struct _RTL_CRITICAL_SECTION *this)
{
  const struct std::nothrow_t *v2; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  char *v5; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  DeleteCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[18].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore, v2);
  v5 = (char *)this->LockSemaphore;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  operator delete(this->OwningThread, v2);
  this->RecursionCount = -1073741823;
}
