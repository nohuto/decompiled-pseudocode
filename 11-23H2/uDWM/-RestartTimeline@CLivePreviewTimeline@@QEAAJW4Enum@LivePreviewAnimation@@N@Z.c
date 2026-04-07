/*
 * XREFs of ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C9AA0
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18001D5E4 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E67BC (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreviewTimeline::RestartTimeline(__int64 a1, int a2, double a3)
{
  double *v3; // rax
  unsigned int v4; // r9d
  double v5; // xmm1_8
  double v6; // xmm0_8
  __int64 result; // rax

  *(_DWORD *)(a1 + 120) = a2;
  v3 = (double *)(a1 + 48);
  v4 = 0;
  if ( *(_BYTE *)(a1 + 72) || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v3 - 0.0) & _xmm) <= 0.0000011920929 )
  {
    if ( a2 == 3 )
    {
      *(_QWORD *)(a1 + 128) = 0x3FF0000000000000LL;
      goto LABEL_13;
    }
    if ( a2 == 4 )
    {
      *(_QWORD *)(a1 + 128) = 0LL;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( a2 != 3 )
  {
    if ( a2 == 4 )
    {
      v6 = (1.0 - *v3) * *(double *)(a1 + 128);
      *(double *)(a1 + 128) = v6;
      v5 = 1.0 - v6;
      goto LABEL_5;
    }
LABEL_12:
    v4 = -2147467259;
    goto LABEL_13;
  }
  v5 = (1.0 - *(double *)(a1 + 128)) * *v3 + *(double *)(a1 + 128);
  *(double *)(a1 + 128) = v5;
LABEL_5:
  a3 = a3 * v5;
LABEL_13:
  *v3 = *(double *)(a1 + 32);
  result = v4;
  *(double *)(a1 + 24) = a3;
  *(_WORD *)(a1 + 72) = 256;
  CDesktopManager::s_fTimelineDirty = 1;
  return result;
}
