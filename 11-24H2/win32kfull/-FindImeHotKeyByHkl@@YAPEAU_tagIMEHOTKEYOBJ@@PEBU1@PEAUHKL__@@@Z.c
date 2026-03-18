/*
 * XREFs of ?FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z @ 0x1402B14A4
 * Callers:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401D7774 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1401F9CB0 (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByHkl(const struct _tagIMEHOTKEYOBJ *a1, HKL a2)
{
  while ( 1 )
  {
    if ( !a1 )
      return 0LL;
    if ( *((HKL *)a1 + 3) == a2 )
      break;
    a1 = *(const struct _tagIMEHOTKEYOBJ **)a1;
  }
  return a1;
}
