/*
 * XREFs of ?InvalidateWeakRef@CMILCOMWeakRef@@UEAAXXZ @ 0x1801F8460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMILCOMWeakRef::InvalidateWeakRef(CMILCOMWeakRef *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
}
