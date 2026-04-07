/*
 * XREFs of ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800B6AD8
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006C00C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateShowContact(__int64 a1, int a2)
{
  __int64 v2; // rax
  float v3; // xmm0_4
  double v4; // xmm1_8

  *(_DWORD *)(a1 + 376) = a2;
  if ( *(_BYTE *)(a1 + 408) )
    goto LABEL_8;
  if ( !*(_QWORD *)(a1 + 384) && !*(_QWORD *)(a1 + 400) )
  {
    if ( (a2 & 8) != 0 )
    {
      v2 = *(_QWORD *)(a1 + 392);
      v3 = FLOAT_1_0;
      if ( v2 )
        v3 = *(double *)(v2 + 48);
      v4 = v3;
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0.0;
LABEL_9:
    CVisual::SetOpacity((CVisual *)a1, v4);
  }
  return 0LL;
}
