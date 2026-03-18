/*
 * XREFs of GetHlslNameAndSemantic @ 0x1801D4118
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1801D3F58 (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetHlslNameAndSemantic(unsigned __int16 a1, const char **a2, const char **a3)
{
  unsigned int v3; // r9d
  const char *v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  const char *result; // rax
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d

  v3 = a1;
  v4 = 0LL;
  if ( v3 > 6 )
  {
    v9 = v3 - 7;
    if ( !v9 )
    {
      v4 = "CLIPPLANES1";
      result = "ClipPlanesW";
      goto LABEL_15;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v4 = "CLIPPLANES2";
      result = "RejectDistance0";
      goto LABEL_15;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = "CLIPPLANES3";
      result = "PositionW";
      goto LABEL_15;
    }
    v12 = v11 - 247;
    if ( !v12 )
    {
      v4 = "TEXCOORD0";
      result = "uv0";
      goto LABEL_15;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v4 = "TEXCOORD1";
      result = "uv1";
      goto LABEL_15;
    }
    if ( v13 == 1 )
    {
      v4 = "TEXCOORD2";
      result = "uv2";
      goto LABEL_15;
    }
LABEL_26:
    result = 0LL;
    goto LABEL_15;
  }
  if ( v3 == 6 )
  {
    v4 = "CLIPPLANES0";
    result = "XYDot";
    goto LABEL_15;
  }
  if ( !v3 )
  {
    v4 = "SV_POSITION";
    result = "position";
    goto LABEL_15;
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    v4 = "COLOR0";
    result = "color";
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v4 = "LIGHTINGDATA0";
    result = "XYZ_Light0Space";
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v14 = v7 - 1;
    if ( !v14 )
    {
      v4 = "LIGHTINGDATA2";
      result = "XYZ_Light1Space";
      goto LABEL_15;
    }
    if ( v14 == 1 )
    {
      v4 = "LIGHTINGDATA3";
      result = "NormalXYZ_Light1Space";
      goto LABEL_15;
    }
    goto LABEL_26;
  }
  v4 = "LIGHTINGDATA1";
  result = "NormalXYZ_Light0Space";
LABEL_15:
  *a2 = result;
  *a3 = v4;
  return result;
}
