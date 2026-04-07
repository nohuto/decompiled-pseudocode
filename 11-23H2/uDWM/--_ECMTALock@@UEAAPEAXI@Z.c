/*
 * XREFs of ??_ECMTALock@@UEAAPEAXI@Z @ 0x180110FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CMTALock *__fastcall CMTALock::`vector deleting destructor'(CMTALock *this, char a2)
{
  *(_QWORD *)this = &CMTALock::`vftable';
  if ( *((_BYTE *)this + 48) )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    *((_BYTE *)this + 48) = 0;
  }
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CMTALock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
