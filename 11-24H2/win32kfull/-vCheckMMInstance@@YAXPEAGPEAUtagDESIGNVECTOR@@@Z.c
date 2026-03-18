/*
 * XREFs of ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1401165E0
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1401163A8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     GreGetCannonicalName @ 0x1401169A0 (GreGetCannonicalName.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vCheckMMInstance(char *a1, struct tagDESIGNVECTOR *a2)
{
  unsigned __int16 *v3; // rbx
  wchar_t v4; // ax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int64 v7; // rdi
  _WORD *v8; // rcx
  __int16 v9; // ax
  _WORD *v10; // rax
  _BYTE Src[528]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v12[528]; // [rsp+240h] [rbp-238h] BYREF

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
      if ( *v3 )
      {
        if ( !_wcsicmp(v3, L"OpenType)") )
        {
          v5 = (((char *)v3 - a1) >> 1) - 1;
          if ( v5 <= 0x7FFFFFFE )
          {
            v6 = 260LL;
            v7 = a1 - Src;
            v8 = Src;
            do
            {
              if ( !(v5 + v6 - 260) )
                break;
              v9 = *(_WORD *)((char *)v8 + v7);
              if ( !v9 )
                break;
              *v8++ = v9;
              --v6;
            }
            while ( v6 );
            v10 = v8 - 1;
            if ( v6 )
              v10 = v8;
            *v10 = 0;
            if ( v6 )
              GreGetCannonicalName(Src, v12);
          }
        }
      }
      return;
    }
  }
}
