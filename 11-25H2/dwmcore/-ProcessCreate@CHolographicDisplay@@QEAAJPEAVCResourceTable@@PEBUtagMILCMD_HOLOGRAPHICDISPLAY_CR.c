/*
 * XREFs of ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x1802DA674
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802DA5D8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessCreate(
        CHolographicDisplay *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_CREATE *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v6; // rax

  v3 = (RTL_SRWLOCK *)((char *)this + 136);
  AcquireSRWLockExclusive((PSRWLOCK)this + 17);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 1) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)a3 + 2) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 8);
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged(this);
  return 0LL;
}
