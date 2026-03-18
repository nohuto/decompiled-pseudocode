/*
 * XREFs of ?HasDelayDeleteResources@CComposition@@QEBA_NXZ @ 0x1801E56B0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::HasDelayDeleteResources(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // di

  v1 = this + 143;
  EnterCriticalSection(this + 143);
  v3 = *(_QWORD *)&this[144].LockCount != 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
