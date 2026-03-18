/*
 * XREFs of ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1801EDB48
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x1802A8A74 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ebx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v3 = a1 - 11;
  if ( !v3 )
    goto LABEL_11;
  v4 = 6;
  v5 = v3 - 6;
  if ( !v5 )
    goto LABEL_12;
  v6 = v5 - 1;
  if ( !v6 || (v7 = v6 - 17) == 0 || (v8 = v7 - 17) == 0 || (v9 = v8 - 17) == 0 )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a2 && (v13 = a2 - 1) != 0 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
          {
            v16 = 1435;
            goto LABEL_10;
          }
          v4 = 3;
        }
        else
        {
          v4 = 5;
        }
      }
      else
      {
        v4 = 4;
      }
    }
    else
    {
      v4 = 2;
    }
LABEL_12:
    *a3 = v4;
    return 0;
  }
  if ( v10 == 1 )
  {
    v4 = 1;
    goto LABEL_12;
  }
  v16 = 1445;
LABEL_10:
  v11 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v16, 0LL);
  return v11;
}
