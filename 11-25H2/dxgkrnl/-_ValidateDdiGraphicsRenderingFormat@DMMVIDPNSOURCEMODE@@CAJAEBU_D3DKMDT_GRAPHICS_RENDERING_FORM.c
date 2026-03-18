/*
 * XREFs of ?_ValidateDdiGraphicsRenderingFormat@DMMVIDPNSOURCEMODE@@CAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@@Z @ 0x140038494
 * Callers:
 *     ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x140038418 (-Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::_ValidateDdiGraphicsRenderingFormat(
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a1)
{
  __int64 cx; // rdx
  __int64 v2; // rax
  D3DKMDT_COLOR_BASIS ColorBasis; // eax
  D3DKMDT_PIXEL_VALUE_ACCESS_MODE PixelValueAccessMode; // eax
  __int64 result; // rax

  cx = a1->PrimSurfSize.cx;
  if ( (unsigned int)cx < 0x64 || a1->PrimSurfSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, cx, a1->PrimSurfSize.cy, a1);
    result = 3223192378LL;
    WdLogGlobalForLineNumber = 342;
  }
  else
  {
    v2 = a1->VisibleRegionSize.cx;
    if ( (unsigned int)v2 < 0x64 || a1->VisibleRegionSize.cy < 0x64 )
    {
      WdLogSingleEntry3(2LL, v2, a1->VisibleRegionSize.cy, a1);
      result = 3223192379LL;
      WdLogGlobalForLineNumber = 354;
    }
    else if ( a1->Stride )
    {
      if ( a1->PixelFormat )
      {
        ColorBasis = a1->ColorBasis;
        if ( ColorBasis && ColorBasis <= D3DKMDT_CB_YPBPR )
        {
          PixelValueAccessMode = a1->PixelValueAccessMode;
          if ( PixelValueAccessMode && PixelValueAccessMode <= D3DKMDT_PVAM_SETTABLEPALETTE )
          {
            return 0LL;
          }
          else
          {
            WdLogSingleEntry2(2LL, a1->PixelValueAccessMode, a1);
            result = 3223192383LL;
            WdLogGlobalForLineNumber = 390;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, a1->ColorBasis, a1);
          result = 3223192382LL;
          WdLogGlobalForLineNumber = 381;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, 0LL, a1);
        result = 3223192381LL;
        WdLogGlobalForLineNumber = 372;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, 0LL, a1);
      result = 3223192380LL;
      WdLogGlobalForLineNumber = 363;
    }
  }
  return result;
}
