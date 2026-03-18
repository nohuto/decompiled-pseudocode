/*
 * XREFs of ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C00E6828
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00E68B8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C002C48C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GreGetCannonicalName @ 0x1C029A924 (GreGetCannonicalName.c)
 */

void __fastcall vCheckMMInstance(char *a1, struct tagDESIGNVECTOR *a2)
{
  unsigned __int16 *v3; // rbx
  wchar_t v4; // ax
  char Src[528]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v6[528]; // [rsp+240h] [rbp-238h] BYREF

  *((_DWORD *)a2 + 1) = 0;
  v3 = (unsigned __int16 *)a1;
  while ( 1 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    ++v3;
    if ( v4 == 40 )
    {
      if ( *v3
        && !_wcsicmp(v3, L"OpenType)")
        && (int)RtlStringCchCopyNW(Src, 260LL, a1, (((char *)v3 - a1) >> 1) - 1) >= 0 )
      {
        GreGetCannonicalName(Src, v6);
      }
      return;
    }
  }
}
