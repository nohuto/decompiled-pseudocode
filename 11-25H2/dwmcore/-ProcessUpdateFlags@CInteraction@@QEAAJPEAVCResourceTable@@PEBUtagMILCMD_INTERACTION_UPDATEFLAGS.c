/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x18020AD68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v5; // dl
  char v6; // r8
  char v7; // dl
  char v8; // cl
  char v9; // dl
  char v10; // cl
  int v11; // eax

  v5 = *((_BYTE *)this + 200) & 0xFE | (*((_BYTE *)a3 + 8) != 0);
  *((_BYTE *)this + 200) = v5;
  v6 = v5 & 0xFB | (*((_BYTE *)a3 + 9) != 0 ? 4 : 0);
  *((_BYTE *)this + 200) = v6;
  v7 = v6 & 0xF7 | (*((_BYTE *)a3 + 10) != 0 ? 8 : 0);
  *((_BYTE *)this + 200) = v7;
  v8 = *((_BYTE *)a3 + 11) != 0 ? 0x10 : 0;
  v9 = (2 * v8) | v8 & 0xDF | v7 & 0xCF;
  *((_BYTE *)this + 200) = v9;
  *((_BYTE *)this + 200) = v9 & 0xBF | (*((_BYTE *)a3 + 12) != 0 ? 0x40 : 0);
  v10 = *((_BYTE *)this + 1624) & 0xFB | (*((_BYTE *)a3 + 13) != 0 ? 4 : 0);
  *((_BYTE *)this + 1624) = v10;
  v11 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 51) = v11;
  *((_DWORD *)this + 426) = v11;
  *((_BYTE *)this + 1624) = v10 & 0xF7 | (v11 != 2 ? 0 : 8);
  return 0LL;
}
