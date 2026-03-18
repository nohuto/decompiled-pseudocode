/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x18008E9C0
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18008C1D0 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x18008E924 (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x18008F214 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180128F8C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
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
