/*
 * XREFs of ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802D14C8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180189C54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18021A0F0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802D1338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *a3)
{
  RTL_SRWLOCK *v3; // rbx
  int v6; // r8d
  bool v7; // dl
  int v8; // r8d
  PVOID Ptr; // rcx
  CRenderTarget *v10; // rcx

  v3 = this + 17;
  AcquireSRWLockExclusive(this + 17);
  v6 = *((_DWORD *)a3 + 2);
  v7 = (HIDWORD(this[15].Ptr) & 0x40) != 0;
  HIDWORD(this[15].Ptr) = v6;
  v8 = v6 & 0x40;
  if ( v7 != (v8 != 0) )
  {
    Ptr = this[11].Ptr;
    if ( Ptr )
    {
      v10 = (CRenderTarget *)*((_QWORD *)Ptr + 4);
      if ( v10 )
      {
        if ( v8 )
          CRenderTarget::RemoveFromRenderTargetManager(v10);
        else
          CRenderTarget::AddToRenderTargetManager(v10);
      }
    }
  }
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
