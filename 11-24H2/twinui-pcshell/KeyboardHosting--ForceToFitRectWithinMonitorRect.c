/*
 * XREFs of KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x1802192AC
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180231970 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18047250C (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::ForceToFitRectWithinMonitorRect(__int64 a1, int *a2, _OWORD *a3)
{
  char result; // al
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14[6]; // [rsp+0h] [rbp-18h]

  result = 0;
  v5 = (float)*a2;
  *(_OWORD *)v14 = *(_OWORD *)a1;
  LODWORD(v4) = *(_OWORD *)a1;
  v6 = (float)a2[2];
  if ( v5 <= v4 )
  {
    v8 = v4 + *(float *)(a1 + 8);
    if ( v8 <= v6 )
      goto LABEL_7;
    v7 = v14[0] + (float)(v6 - v8);
  }
  else
  {
    if ( (float)(v14[0] + *(float *)(a1 + 8)) > v6 )
      goto LABEL_7;
    v7 = v14[0] + (float)(v5 - v4);
  }
  v14[0] = v7;
  result = 1;
LABEL_7:
  v9 = *(float *)(a1 + 4);
  v10 = (float)a2[1];
  v11 = (float)a2[3];
  if ( v10 <= v9 )
  {
    v13 = v9 + *(float *)(a1 + 12);
    if ( v13 > v11 )
    {
      v12 = v14[1] + (float)(v11 - v13);
      goto LABEL_12;
    }
  }
  else if ( (float)(v9 + *(float *)(a1 + 12)) <= v11 )
  {
    v12 = v14[1] + (float)(v10 - v9);
LABEL_12:
    v14[1] = v12;
    result = 1;
  }
  *a3 = *(_OWORD *)v14;
  return result;
}
