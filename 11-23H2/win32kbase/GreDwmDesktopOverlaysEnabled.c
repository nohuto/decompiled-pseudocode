/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C0232630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294EC8;
  if ( qword_1C0294EC8 )
    return (__int64 (*)(void))qword_1C0294EC8();
  return result;
}
