/*
 * XREFs of ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1802DCF08
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18003CBC0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802DCCE0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessInitialize(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE *a3)
{
  if ( *((_DWORD *)this + 46) )
    return 2147483661LL;
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 3);
  *(_QWORD *)((char *)this + 100) = *((_QWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 108) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 34) = CResource::GetOwningProcessId(this);
  *((_QWORD *)this + 19) = *((_QWORD *)a3 + 6);
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 14);
  _InterlockedExchange((volatile __int32 *)this + 46, 1);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
