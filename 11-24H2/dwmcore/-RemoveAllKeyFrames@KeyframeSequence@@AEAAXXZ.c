/*
 * XREFs of ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18017EF84
 * Callers:
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18017ED88 (--1KeyframeSequence@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z @ 0x18017F1D8 (--_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z.c)
 */

void __fastcall KeyframeSequence::RemoveAllKeyFrames(KeyframeSequence *this, unsigned int a2)
{
  __int64 v2; // rbp
  KeyframeSequence::Keyframe **i; // r14
  KeyframeSequence::Keyframe *v5; // rbx

  v2 = 0LL;
  for ( i = (KeyframeSequence::Keyframe **)((char *)this + 104);
        (unsigned int)v2 < *((_DWORD *)this + 28);
        v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *i;
    Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease((char *)*i + 24 * v2 + 8);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)v5 + 3 * v2 + 2);
  }
  if ( *i )
    KeyframeSequence::Keyframe::`vector deleting destructor'(*i, a2);
  *((_DWORD *)this + 28) = 0;
  *i = 0LL;
  *((_BYTE *)this + 140) &= ~4u;
}
