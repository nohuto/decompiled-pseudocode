/*
 * XREFs of ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1802DB2E8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802D7984 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessCreate(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE *a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 9) == 0LL;
  *((_DWORD *)this + 21) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 14) = *((_QWORD *)a3 + 1);
  if ( !v3 )
    CHolographicManager::AddExclusiveView(*((RTL_SRWLOCK **)this + 9), (struct IUnknown *)this);
  return 0LL;
}
