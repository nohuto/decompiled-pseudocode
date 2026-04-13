/*
 * XREFs of _Getwctype @ 0x180005788
 * Callers:
 *     ?do_is@?$ctype@_W@std@@MEBA_NF_W@Z @ 0x18005D120 (-do_is@-$ctype@_W@std@@MEBA_NF_W@Z.c)
 * Callees:
 *     <none>
 */

__int16 __cdecl Getwctype(wchar_t a1, const _Ctypevec *a2)
{
  BOOL StringTypeW; // eax
  WCHAR SrcStr; // [rsp+30h] [rbp+8h] BYREF
  WORD CharType; // [rsp+40h] [rbp+18h] BYREF

  SrcStr = a1;
  CharType = 0;
  StringTypeW = GetStringTypeW(1u, &SrcStr, 1, &CharType);
  return StringTypeW ? CharType : 0;
}
