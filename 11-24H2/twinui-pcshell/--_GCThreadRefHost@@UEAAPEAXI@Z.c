/*
 * XREFs of ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x180201250
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForRefs@CThreadRefHost@@QEAAXXZ @ 0x180201298 (-WaitForRefs@CThreadRefHost@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CThreadRefHost *__fastcall CThreadRefHost::`scalar deleting destructor'(CThreadRefHost *this, char a2)
{
  *(_QWORD *)this = &CThreadRefHost::`vftable';
  CThreadRefHost::WaitForRefs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
