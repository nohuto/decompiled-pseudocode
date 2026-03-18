/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x14004C5E0
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14004C1C8 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x14004C630 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?Initialize@CHostVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140224ED0 (-Initialize@CHostVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1402294E0 (-Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 308) |= 0x40u;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
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
