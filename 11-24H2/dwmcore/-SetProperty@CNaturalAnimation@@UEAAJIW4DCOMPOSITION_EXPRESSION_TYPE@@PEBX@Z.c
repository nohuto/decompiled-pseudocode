/*
 * XREFs of ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180217800
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x180217894 (-SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x180217908 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1802A0D30 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 *     ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z @ 0x1802A0E64 (-SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetProperty(CNaturalAnimation *a1, unsigned int a2, int a3, float *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( a3 != 52 )
  {
    switch ( a3 )
    {
      case 18:
        v4 = CNaturalAnimation::SetScalarProperty(a1, a2, *a4);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v7 = 559;
        break;
      case 35:
        v4 = CNaturalAnimation::SetVector2Property(a1, a2, (const struct D2DVector2 *)a4);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v7 = 563;
        break;
      case 42:
        v4 = CNaturalAnimation::SetTimespanProperty(a1, a2, (const struct TimeSpan *)a4);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v7 = 571;
        break;
      default:
        v5 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x23Fu, 0LL);
        return v5;
    }
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v7, 0LL);
    return v5;
  }
  v4 = CNaturalAnimation::SetVector3Property(a1, a2, (const struct D2DVector3 *)a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 567;
    goto LABEL_15;
  }
  return v5;
}
