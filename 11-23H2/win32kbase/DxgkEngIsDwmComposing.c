/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( !qword_1C0294450 || (int)qword_1C0294450() < 0 )
    return 0LL;
  if ( qword_1C0294458 )
    return (unsigned int)qword_1C0294458();
  return v1;
}
