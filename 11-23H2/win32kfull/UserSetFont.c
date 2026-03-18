/*
 * XREFs of UserSetFont @ 0x1C00D04FC
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C00D0578 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00D16B0 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  struct HLFONT__ *v6; // rdi

  result = CreateFontFromUserProfile(a1);
  v6 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 24)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v6;
    return 1LL;
  }
  return result;
}
