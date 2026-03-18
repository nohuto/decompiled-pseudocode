/*
 * XREFs of ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1801313D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x180131474 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z @ 0x180132148 (-IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetSource(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETSOURCE *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  struct CBrush *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  const struct CResource *v10; // rcx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v5 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5)) )
  {
    v10 = *(const struct CResource **)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
    v6 = v10;
    if ( v10 && !CNineGridBrush::IsValidSourceResource(v10) )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x126u, 0LL);
      return v8;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = CNineGridBrush::SetSource(this, v6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x12Au, 0LL);
  return v8;
}
