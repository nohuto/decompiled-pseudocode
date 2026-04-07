/*
 * XREFs of ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18001E444
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::GetAnimationIds(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // esi
  int v7; // edx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // edx
  int v14; // edx

  v4 = 0;
  if ( a2 > 10 )
  {
    v12 = a2 - 11;
    if ( !v12 )
    {
      *a3 = 99;
      goto LABEL_5;
    }
    v9 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v9 )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        v13 = v9 - 1;
        if ( !v13 )
        {
          *a3 = 34;
          *a4 = 2;
          return v4;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          *a3 = 34;
          goto LABEL_5;
        }
        if ( v14 == 3 )
        {
          *a3 = 104;
          goto LABEL_5;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_16;
  }
  if ( a2 == 10 )
  {
    *a3 = 98;
    goto LABEL_5;
  }
  v7 = a2 - 1;
  if ( v7 )
  {
    v9 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v10 )
      {
        LODWORD(v10) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
          v10);
        *a3 = 94;
        goto LABEL_14;
      }
      v9 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v9 )
      {
        v11 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 == 1 )
          {
            *a3 = 101;
            goto LABEL_5;
          }
LABEL_25:
          v4 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xBFu, 0LL);
          return v4;
        }
        LODWORD(v11) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
          v11);
        *a3 = 95;
LABEL_14:
        *a4 = 1;
        return v4;
      }
    }
LABEL_16:
    LOBYTE(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      v9);
    *a3 = 104;
    goto LABEL_14;
  }
  *a3 = 100;
LABEL_5:
  *a4 = 1;
  return v4;
}
