/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180297234
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  _BYTE *v3; // r9
  char v5; // dl
  char v6; // r11
  char v7; // cl
  char v8; // dl
  char v9; // cl
  __int64 v10; // rax

  v3 = (char *)this + 105;
  v5 = *((_BYTE *)this + 105);
  v6 = v5 & 1;
  if ( *((_BYTE *)a3 + 8) )
  {
    *v3 = v5 | 1;
    v7 = v5 | 3;
    if ( !*((_BYTE *)a3 + 9) )
      v7 = v5 & 0xFC | 1;
    v8 = v7;
  }
  else
  {
    v8 = v5 & 0xFE;
    v7 = v8;
  }
  v9 = v7 & 1;
  *v3 = v8;
  if ( v6 != v9 )
  {
    v10 = *((_QWORD *)this + 3);
    if ( v9 )
      ++*(_DWORD *)(v10 + 6400);
    else
      --*(_DWORD *)(v10 + 6400);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
