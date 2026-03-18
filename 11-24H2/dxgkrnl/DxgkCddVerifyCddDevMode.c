/*
 * XREFs of DxgkCddVerifyCddDevMode @ 0x1403F3D00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x140040AA4 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkCddVerifyCddDevMode(__int64 a1)
{
  int v2; // r8d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v3; // edx
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int8 v7; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)(a1 + 70) == 24 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0
      && (unsigned int)GetBitsPerPixel((enum _D3DDDIFORMAT)*(_DWORD *)(a1 + 228)) == *(_DWORD *)(a1 + 168) )
    {
      v3 = D3DDDI_VSSLO_UNINITIALIZED;
      if ( (v2 & 0x200000) != 0 )
        v3 = ((*(_DWORD *)(a1 + 180) & 2) != 0) + 1;
      if ( *(_DWORD *)(a1 + 224) )
      {
        if ( (v2 & 0x400000) == 0 )
          return 0LL;
        v7 = 0;
        v4 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)(a1 + 220), v3, &v7);
        v5 = *(unsigned int *)(a1 + 184);
        if ( v4 == (_DWORD)v5 || v4 + 1 == (_DWORD)v5 && v7 )
          return 0LL;
        WdLogSingleEntry4(3LL, v5, *(unsigned int *)(a1 + 220), *(unsigned int *)(a1 + 224), v7);
        WdLogGlobalForLineNumber = 3381;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3359;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, *(unsigned int *)(a1 + 168), *(int *)(a1 + 228));
      WdLogGlobalForLineNumber = 3330;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3315;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cdd specified an invalid CDD_DEVMODE in DxgkCddVerifyCddDevMode.",
      3315LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225473LL;
}
