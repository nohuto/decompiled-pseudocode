/*
 * XREFs of ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B5700
 * Callers:
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801B53D0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsHDRColorSpace(enum DXGI_COLOR_SPACE_TYPE a1)
{
  _DWORD *v1; // rax

  v1 = &unk_18033AD70;
  do
  {
    if ( *v1 == a1 )
      break;
    ++v1;
  }
  while ( v1 != (_DWORD *)&unk_18033AD88 );
  return v1 != (_DWORD *)&unk_18033AD88;
}
