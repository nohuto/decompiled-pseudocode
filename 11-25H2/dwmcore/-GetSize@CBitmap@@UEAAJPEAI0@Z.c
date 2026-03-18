/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1801F81E0
 * Callers:
 *     ?GetSize@CBitmap@@WCA@EAAJPEAI0@Z @ 0x180261050 (-GetSize@CBitmap@@WCA@EAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(struct _RTL_CRITICAL_SECTION *this, LONG *a2, LONG *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = this + 1;
  EnterCriticalSection(this + 1);
  if ( a2 && a3 )
  {
    *a2 = this[2].LockCount;
    *a3 = this[2].RecursionCount;
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2147942487LL;
  }
}
