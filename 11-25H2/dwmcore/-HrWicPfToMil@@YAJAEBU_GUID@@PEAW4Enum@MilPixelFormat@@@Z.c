/*
 * XREFs of ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1801DCE68
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1801DCCF8 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 */

__int64 __fastcall HrWicPfToMil(const struct _GUID *a1, enum MilPixelFormat::Enum *a2)
{
  int v2; // edi
  __int64 v5; // rax

  v2 = 0;
  if ( a1->Data4[7] > 0x1Fu || memcmp_0(a1, &GUID_WICPixelFormatDontCare, 0xFuLL) || (v2 = a1->Data4[7]) == 0 )
  {
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat40bppCMYKAlpha.Data1
      && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat40bppCMYKAlpha.Data4 )
    {
      v2 = 44;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat80bppCMYKAlpha.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat80bppCMYKAlpha.Data4 )
    {
      v2 = 45;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppAlpha.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppAlpha.Data4 )
    {
      v2 = 67;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppRGBA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppRGBA.Data4 )
    {
      v2 = 68;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppPRGBA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppPRGBA.Data4 )
    {
      v2 = 69;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppBGRA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppBGRA.Data4 )
    {
      v2 = 15;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppPBGRA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppPBGRA.Data4 )
    {
      v2 = 16;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppBGRA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat64bppBGRA.Data4 )
    {
      v2 = 72;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppPBGRA.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat64bppPBGRA.Data4 )
    {
      v2 = 73;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat48bppBGR.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat48bppBGR.Data4 )
    {
      v2 = 71;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat16bppBGRA5551.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat16bppBGRA5551.Data4 )
    {
      v2 = 70;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat48bppBGRFixedPoint.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat48bppBGRFixedPoint.Data4 )
    {
      v2 = 74;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppBGRAFixedPoint.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat64bppBGRAFixedPoint.Data4 )
    {
      v2 = 75;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat96bppRGBFloat.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat96bppRGBFloat.Data4 )
    {
      v2 = 76;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppRGB.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppRGB.Data4 )
    {
      v2 = 77;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppRGB.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat64bppRGB.Data4 )
    {
      v2 = 78;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppY.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppY.Data4 )
    {
      v2 = 79;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppCb.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppCb.Data4 )
    {
      v2 = 80;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppCr.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppCr.Data4 )
    {
      v2 = 81;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat16bppCbCr.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat16bppCbCr.Data4 )
    {
      v2 = 82;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppR10G10B10A2.Data4 )
    {
      v2 = 32;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2HDR10.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat32bppR10G10B10A2HDR10.Data4 )
    {
      v2 = 33;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppDepth.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppDepth.Data4 )
    {
      v2 = 83;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppGain.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat8bppGain.Data4 )
    {
      v2 = 84;
    }
    else if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat24bppRGBGain.Data1
           && *(_QWORD *)a1->Data4 == *(_QWORD *)GUID_WICPixelFormat24bppRGBGain.Data4 )
    {
      v2 = 85;
    }
    else
    {
      v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat32bppBGRGain.Data1;
      if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppBGRGain.Data1 )
        v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat32bppBGRGain.Data4;
      if ( !v5 )
        v2 = 86;
    }
  }
  *(_DWORD *)a2 = v2;
  return v2 == 0 ? 0x88982F80 : 0;
}
