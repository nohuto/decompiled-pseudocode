/*
 * XREFs of ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x18028BC28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18028B530 (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18028BF08 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludedSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v5 = *((_DWORD *)a3 + 2);
  if ( a5 < v5 || (v5 & 3) != 0 )
  {
    v11 = -2003303421;
    v12 = -2003303421;
    v14 = 2992;
    goto LABEL_9;
  }
  v10 = CVisual::RemoveAllSharedLights(this, 1LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 2995;
    goto LABEL_6;
  }
  v10 = CVisual::AddSharedLights((__int64)this, (_QWORD **)this + 34, 1u, a2, a4, *((_DWORD *)a3 + 2) >> 2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 3000;
LABEL_6:
    v12 = v10;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v14, 0LL);
  }
  return v11;
}
