/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18008578C
 * Callers:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003D4E8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800854F0 (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1802BC728 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805E5958 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806889E0 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689138 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x1806C78D0 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1806C7920 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(__int64 a1, __int64 a2, const WCHAR *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  _WORD *v10; // rax
  _WORD *v11; // rcx
  const WCHAR *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r10
  signed __int64 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *v18; // r11
  __int16 v19; // ax
  _WORD *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v7 = v4 + 1;
  *a4 = 0LL;
  if ( v4 + 1 >= v4 && (*a4 = 0LL, is_mul_ok(v7, 2uLL)) )
  {
    v10 = CoTaskMemAlloc(2 * v7);
    *a4 = v10;
    v11 = v10;
    if ( v10 )
    {
      if ( v7 > 0x7FFFFFFF )
      {
        *v10 = 0;
        return 0;
      }
      else if ( v4 >= 0x7FFFFFFF )
      {
        v8 = 0;
        if ( v7 )
          *v10 = 0;
      }
      else
      {
        v12 = &pvData;
        v13 = v4 & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64);
        v8 = 0;
        if ( a3 )
          v12 = a3;
        if ( v7 )
        {
          v14 = v13 - v7;
          v15 = 0LL;
          v16 = (char *)v12 - (char *)v10;
          v17 = v7;
          v18 = v10;
          do
          {
            if ( !(v14 + v7) )
              break;
            v19 = *(_WORD *)((char *)v11 + v16);
            if ( !v19 )
              break;
            *v11 = v19;
            ++v15;
            ++v11;
            --v7;
          }
          while ( v7 );
          v20 = v11 - 1;
          if ( v7 )
            v20 = v11;
          *v20 = 0;
          v21 = v15 - 1;
          if ( v7 )
            v21 = v15;
          v22 = v17 - v21;
          if ( v7 )
          {
            if ( v22 > 1 )
            {
              v23 = 2 * v22;
              if ( v23 > 2 )
                memset_0(&v18[v21 + 1], 0, v23 - 2);
            }
          }
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v8;
}
