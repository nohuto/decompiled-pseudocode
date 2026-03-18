/*
 * XREFs of ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z @ 0x1801E3B90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPlaybackRate(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE *a3)
{
  float v3; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // r8
  char v8; // al

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 120) != v3 )
  {
    if ( v3 != 0.0 )
    {
      if ( v3 >= 0.0 )
      {
        v5 = fmaxf(v3, 0.0625);
        v6 = FLOAT_16_0;
      }
      else
      {
        v5 = fmaxf(v3, -16.0);
        v6 = FLOAT_N0_0625;
      }
      v3 = fminf(v6, v5);
    }
    v7 = *((_QWORD *)this + 44);
    *((float *)this + 120) = v3;
    v8 = *(_BYTE *)(v7 + 140);
    *(_BYTE *)(v7 + 96) = v3 < 0.0;
    *(_BYTE *)(v7 + 140) = v8 & 0xEF | (v3 >= 0.0 ? 0 : 0x10);
    CResource::InvalidateAnimationSources(this, 30);
  }
  return 0LL;
}
