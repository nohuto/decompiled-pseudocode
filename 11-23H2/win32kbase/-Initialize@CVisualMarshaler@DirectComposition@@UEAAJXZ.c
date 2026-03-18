/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C009CCD0
 * Callers:
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00087C8 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000887C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C021CAB0 (-Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C021CAE0 (-Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 312) |= 0x40u;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 65) = -1;
  *((_DWORD *)this + 66) = -1;
  *((_DWORD *)this + 67) = -1;
  *((_DWORD *)this + 68) = -1;
  *((_DWORD *)this + 69) = -1;
  result = 0LL;
  *((_DWORD *)this + 28) = 1065353216;
  return result;
}
