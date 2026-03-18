/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1801FD0D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801FD210 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPTIONS *a3)
{
  CVisual *v3; // r10
  char v4; // cl
  unsigned int v5; // r11d
  unsigned __int8 v7; // r9
  char v8; // dl
  unsigned int v9; // edx
  char v10; // r8

  v3 = this;
  v4 = *((_BYTE *)a3 + 9);
  v5 = 0;
  v7 = *((_BYTE *)v3 + 105);
  if ( ((v7 >> 6) & 1) != (v4 != 0) )
  {
    *((_BYTE *)v3 + 105) = v7 & 0xBF | (v4 != 0 ? 0x40 : 0);
    CVisual::OnInnerTransformChanged(v3);
    v7 = *((_BYTE *)v3 + 105);
  }
  v8 = *((_BYTE *)a3 + 11);
  if ( v7 >> 7 != (v8 != 0) )
  {
    *((_BYTE *)v3 + 105) = v7 & 0x7F | (v8 != 0 ? 0x80 : 0);
    v5 |= 1u;
    v7 = v7 & 0x7F | (v8 != 0 ? 0x80 : 0);
  }
  v9 = *((unsigned __int8 *)v3 + 106);
  *((_BYTE *)v3 + 105) = v7 & 0xEF | (*((_BYTE *)a3 + 8) != 0 ? 0x10 : 0);
  v10 = *((_BYTE *)a3 + 10);
  if ( ((v9 >> 3) & 1) != (v10 != 0) )
  {
    *((_BYTE *)v3 + 106) = v9 & 0xF7 | (v10 != 0 ? 8 : 0);
    if ( v10 )
    {
      *((_QWORD *)v3 + 69) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x200000u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)v3, v5);
  return 0LL;
}
