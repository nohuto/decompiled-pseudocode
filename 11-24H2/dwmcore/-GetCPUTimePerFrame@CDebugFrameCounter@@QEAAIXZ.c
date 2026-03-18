/*
 * XREFs of ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18025FAAC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x180097998 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x18025FAFC (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r9
  unsigned __int64 v3; // r10

  if ( !*((_BYTE *)this + 8) || *(_DWORD *)this == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 16) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
