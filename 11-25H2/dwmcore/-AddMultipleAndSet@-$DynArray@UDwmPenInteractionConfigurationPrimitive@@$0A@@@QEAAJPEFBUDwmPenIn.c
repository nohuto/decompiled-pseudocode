/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x18013323C
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800FBB64 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x180132DA0 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_ @ 0x180133324 (_anonymous_namespace_--SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017C86C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        void *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int v8; // eax
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (unsigned int)v5 + a3 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *(_DWORD *)(a1 + 20) )
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 12 * v5), a2, 12LL * a3);
      *(_DWORD *)(a1 + 24) = v6;
    }
    else
    {
      Src = a2;
      v8 = DynArrayImpl<0>::Grow(a1, 0xCu, a3, 0, (unsigned __int64 *)&Src);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC0u, 0LL);
      }
      else
      {
        memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(12 * *(_DWORD *)(a1 + 24))), Src, 12 * a3);
        *(_DWORD *)(a1 + 24) += a3;
      }
    }
  }
  return v7;
}
