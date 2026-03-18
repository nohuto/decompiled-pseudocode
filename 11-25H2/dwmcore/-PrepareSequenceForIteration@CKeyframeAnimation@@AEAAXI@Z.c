/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003AD20
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  int v4; // xmm2_4
  char v5; // r8
  int v6; // eax
  char v7; // cl
  float v8; // xmm1_4
  __int64 v9; // r8
  char v10; // al

  v2 = *((_DWORD *)this + 132);
  v4 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 537) >> 3;
      if ( (a2 & 1) != 0 )
        v5 = ~(*((_BYTE *)this + 537) >> 3);
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 537) >> 3;
  }
  v6 = *((_DWORD *)this + 125);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 127) != 1.0 )
    v4 = *((_DWORD *)this + 127);
  *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v5)) & 8;
  v7 = 16;
  v8 = *((float *)this + 120);
  v9 = *((_QWORD *)this + 44);
  v10 = *(_BYTE *)(v9 + 140);
  *(_BYTE *)(v9 + 96) = v8 < 0.0;
  if ( v8 >= 0.0 )
    v7 = 0;
  *(_BYTE *)(v9 + 140) = v10 & 0xEF | v7;
  *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v4;
}
