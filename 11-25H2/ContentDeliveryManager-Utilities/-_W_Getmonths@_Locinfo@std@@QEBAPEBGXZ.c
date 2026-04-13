/*
 * XREFs of ?_W_Getmonths@_Locinfo@std@@QEBAPEBGXZ @ 0x1800B3840
 * Callers:
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800B2BEC (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 * Callees:
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800B2DC0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 */

const unsigned __int16 *__fastcall std::_Locinfo::_W_Getmonths(void **this)
{
  char *v2; // rax
  char *v3; // rdi
  const unsigned __int16 *result; // rax

  v2 = (char *)_W_Getmonths();
  v3 = v2;
  if ( v2 )
  {
    std::_Yarn<wchar_t>::operator=(this + 7, v2);
    free(v3);
  }
  result = L":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:"
            "Nov:November:Dec:December";
  if ( this[7] )
    return (const unsigned __int16 *)this[7];
  return result;
}
