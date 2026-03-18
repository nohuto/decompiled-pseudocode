/*
 * XREFs of UserSetFont @ 0x1401CD7E8
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1401CD854 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     Get96DpiServerInfo @ 0x1402F15E0 (Get96DpiServerInfo.c)
 *     GetSessionDpiServerInfo @ 0x1402F19D0 (GetSessionDpiServerInfo.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct HLFONT__ *v7; // rdi

  result = CreateFontFromUserProfile(a1);
  v7 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionDpiServerInfo(v6) + 24)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v7;
    return 1LL;
  }
  return result;
}
