/*
 * XREFs of ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180037FB8
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  float v6; // xmm8_4
  float v7; // xmm6_4
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int IsMaximizeSnapAnimationRejuvenationEnabled; // eax
  unsigned int v14; // eax
  int v15; // ecx

  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)a2 = 0;
  if ( *(_DWORD *)a3 == 1 )
  {
    v6 = *(float *)(a3 + 4) - *(float *)(a3 + 8);
    v7 = *(float *)(a3 + 12) - *(float *)(a3 + 16);
    if ( COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.00000011920929 || COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.00000011920929 )
    {
      if ( v6 >= -0.00000011920929 || v7 >= -0.00000011920929 )
      {
        if ( v6 <= 0.00000011920929 || v7 <= 0.00000011920929 )
        {
          if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(a1, a2)
            && ((v10 = *(_DWORD *)(a1 + 384), v10 == 3) || v10 == 5)
            || (v11 = *(_DWORD *)(a1 + 384), v11 == 1)
            || v11 == 6
            || (IsMaximizeSnapAnimationRejuvenationEnabled = CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(
                                                               v9,
                                                               v8),
                IsMaximizeSnapAnimationRejuvenationEnabled
             && (v14 = *(_DWORD *)(a1 + 384), v14 <= 0x12)
             && (v15 = 274452, _bittest(&v15, v14))) )
          {
            *(_DWORD *)a2 = 5;
            *(double *)(a2 + 8) = *(float *)(a3 + 4);
            *(double *)(a2 + 24) = *(float *)(a3 + 12);
            *(double *)(a2 + 16) = *(float *)(a3 + 8);
            *(double *)(a2 + 32) = *(float *)(a3 + 16);
          }
          else if ( v6 <= 0.00000011920929 || v7 >= -0.00000011920929 )
          {
            *(_DWORD *)a2 = 0;
          }
          else
          {
            *(_DWORD *)a2 = 3;
          }
        }
        else
        {
          *(_DWORD *)a2 = 2;
        }
      }
      else
      {
        *(_DWORD *)a2 = 1;
      }
    }
  }
  return a2;
}
