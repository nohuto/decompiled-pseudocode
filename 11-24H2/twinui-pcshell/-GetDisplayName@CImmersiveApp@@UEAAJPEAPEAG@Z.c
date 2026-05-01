/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180193250
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180017B40 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // edi
  unsigned __int16 *v5; // rsi
  char *v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rcx
  signed __int64 v12; // r14
  unsigned __int16 v13; // ax
  unsigned __int16 *v14; // rax

  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (char *)*((_QWORD *)this + 63);
  if ( v6 && *(_WORD *)v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v8 = v7 + 1;
    if ( v7 + 1 >= v7 && is_mul_ok(v8, 2uLL) )
    {
      v4 = 0;
      v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * v8);
      if ( v10 )
      {
        v5 = v10;
        *v10 = 0;
        if ( v7 != -1LL )
        {
          if ( v8 <= 0x7FFFFFFF && v7 <= 0x7FFFFFFE )
          {
            v11 = v10;
            v12 = v6 - (char *)v10;
            while ( v8 != 1 )
            {
              v13 = *(unsigned __int16 *)((char *)v11 + v12);
              if ( !v13 )
                break;
              *v11++ = v13;
              --v8;
            }
            v10 = v11 - 1;
            if ( v8 )
              v10 = v11;
          }
          *v10 = 0;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    else
    {
      v4 = -2147024362;
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v14 = v5;
      v5 = 0LL;
      *a2 = v14;
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        3u);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
