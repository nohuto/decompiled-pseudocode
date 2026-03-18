/*
 * XREFs of ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1801D67DC
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ResetTime(KeyframeSequence *this, int a2)
{
  float v3; // xmm1_4
  bool v4; // r9
  int v5; // r8d
  int v6; // edx
  float v7; // xmm1_4
  int v8; // eax

  v3 = *((float *)this + 34);
  v4 = (*((_BYTE *)this + 140) & 0x10) != 0;
  if ( v3 == 1.0 )
  {
    v5 = *((_DWORD *)this + 30);
    v6 = v5;
  }
  else
  {
    v6 = *((_DWORD *)this + 30);
    v5 = (int)(float)((float)v6 * v3);
  }
  v7 = *((float *)this + 33);
  if ( v7 == 0.0 )
    v8 = 0;
  else
    v8 = (int)(float)((float)v6 * v7);
  *((_DWORD *)this + 20) = v8;
  *((_DWORD *)this + 21) = v5;
  *((_DWORD *)this + 22) = v6;
  *((_BYTE *)this + 96) = v4;
  *((_DWORD *)this + 23) = v8;
  *((_BYTE *)this + 140) |= 0x20u;
  *((_DWORD *)this + 23) = a2;
}
