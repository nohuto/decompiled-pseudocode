/*
 * XREFs of ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180039EA0
 * Callers:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1802993D0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z @ 0x1802B4084 (-Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z.c)
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::CopyIntoFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  __int64 v3; // rcx
  const void *v4; // r9
  void *v5; // r10
  int v6; // edx
  unsigned int v7; // edx

  *a3 = 0.0;
  if ( CExpressionValue::HasValue(this) )
  {
    v6 = *(_DWORD *)(v3 + 72);
    if ( v6 != 42 )
    {
      switch ( v6 )
      {
        case 17:
        case 18:
        case 35:
        case 52:
        case 69:
        case 70:
        case 71:
        case 104:
        case 265:
          break;
        default:
          v7 = 0;
          goto LABEL_4;
      }
    }
    v7 = v6 >> 4;
    if ( v7 > 0x10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x1D2u, 0LL);
      return 2147500037LL;
    }
    else
    {
LABEL_4:
      memcpy_0(v5, v4, 4LL * v7);
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023728, 0x1C9u, 0LL);
    return 2147943568LL;
  }
}
