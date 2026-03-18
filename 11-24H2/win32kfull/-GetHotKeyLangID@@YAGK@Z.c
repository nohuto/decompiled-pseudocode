/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1401A0404
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401A017C (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401A0380 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401D7774 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 <= 0x7F )
    return word_1403537A8[(unsigned __int64)a1 >> 4];
  else
    return 0LL;
}
