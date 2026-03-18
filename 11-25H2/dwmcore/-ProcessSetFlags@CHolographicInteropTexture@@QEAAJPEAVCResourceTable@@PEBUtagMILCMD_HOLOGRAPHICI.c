/*
 * XREFs of ?ProcessSetFlags@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS@@@Z @ 0x1802DC38C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetFlags(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS *a3)
{
  int v3; // r9d
  int v4; // eax

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)this + 537) ^ v3;
  *((_DWORD *)this + 537) = v3;
  if ( (v4 & 1) != 0 && (v3 & 1) == 0 )
  {
    *((_BYTE *)this + 2152) = 1;
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x8000u);
  }
  return 0LL;
}
