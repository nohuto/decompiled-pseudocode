/*
 * XREFs of ApiSetzzzUpdateCursorSizes @ 0x1C00640F8
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ApiSetzzzUpdateCursorSizes())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295B28;
  if ( qword_1C0295B28 )
  {
    result = (__int64 (*)(void))qword_1C0295B28();
    if ( (int)result >= 0 )
    {
      result = qword_1C0295B30;
      if ( qword_1C0295B30 )
        return (__int64 (*)(void))qword_1C0295B30();
    }
  }
  return result;
}
