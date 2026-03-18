/*
 * XREFs of ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z @ 0x18028BE30
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18028B530 (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18028BF08 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v5 = *((_DWORD *)a3 + 2);
  if ( a5 < v5 || (v5 & 3) != 0 )
  {
    v11 = -2003303421;
    v13 = -2003303421;
    v15 = 2941;
    goto LABEL_8;
  }
  v10 = CVisual::RemoveAllSharedLights(this, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB80u, 0LL);
  }
  else
  {
    v12 = CVisual::AddSharedLights((__int64)this, (_QWORD **)this + 34, 0, a2, a4, *((_DWORD *)a3 + 2) >> 2);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = v12;
      v15 = 2949;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v15, 0LL);
    }
  }
  return v11;
}
