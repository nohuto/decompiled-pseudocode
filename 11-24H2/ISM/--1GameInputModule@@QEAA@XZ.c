/*
 * XREFs of ??1GameInputModule@@QEAA@XZ @ 0x18010C090
 * Callers:
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010C214 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GameInputModule::~GameInputModule(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  HMODULE SpinCount; // rcx

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = (HMODULE)this->SpinCount;
  if ( SpinCount )
    FreeLibrary(SpinCount);
  LeaveCriticalSection(v1);
  DeleteCriticalSection(v1);
}
