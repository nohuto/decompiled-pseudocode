/*
 * XREFs of ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1802969B0
 * Callers:
 *     ?ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x180296DCC (-ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPEND.c)
 *     ?ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLIGHTS@@PEBXI@Z @ 0x180296E50 (-ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLI.c)
 *     ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x1802970A8 (-ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUD.c)
 *     ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z @ 0x1802972B0 (-ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x1801B96CC (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AddSharedLights(
        __int64 a1,
        _QWORD **a2,
        unsigned int a3,
        CResourceTable *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rsi
  __int64 v14; // r9
  _QWORD *i; // rax
  int v16; // eax

  v6 = 0;
  v7 = 0LL;
  while ( 2 )
  {
    if ( (unsigned int)v7 < a6 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a4, *(_DWORD *)(a5 + 4 * v7));
      v13 = (__int64)ResourceWithoutType;
      if ( ResourceWithoutType
        && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
             ResourceWithoutType,
             36LL) )
      {
        for ( i = *a2; i != a2[1]; i += 2 )
        {
          if ( *i == v13 )
            goto LABEL_10;
        }
        LOBYTE(v14) = 1;
        v16 = CCompositionLight::AddTarget(v13, a1, a3, v14);
        v6 = v16;
        if ( v16 >= 0 )
        {
LABEL_10:
          v7 = (unsigned int)(v7 + 1);
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xBDCu, 0LL);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xBCCu, 0LL);
      }
    }
    return v6;
  }
}
