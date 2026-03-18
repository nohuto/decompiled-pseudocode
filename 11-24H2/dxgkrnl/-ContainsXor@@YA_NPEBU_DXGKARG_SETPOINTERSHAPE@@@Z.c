/*
 * XREFs of ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x14030085C
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x140300108 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

char __fastcall ContainsXor(const struct _DXGKARG_SETPOINTERSHAPE *a1)
{
  UINT v1; // r8d
  UINT i; // r9d

  v1 = 0;
LABEL_2:
  if ( v1 >= a1->Height )
    return 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= a1->Width )
    {
      ++v1;
      goto LABEL_2;
    }
    if ( *(_DWORD *)((char *)a1->pPixels + 4 * i + (unsigned __int64)(a1->Pitch * v1)) == -1 )
      break;
  }
  return 1;
}
