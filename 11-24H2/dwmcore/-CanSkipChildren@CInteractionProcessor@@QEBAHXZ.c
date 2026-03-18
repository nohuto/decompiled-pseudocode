/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18020796C
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x18021C490 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180207A30 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$T.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180213534 (-SupportsAllInteractions@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-.c)
 */

__int64 __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  __int64 v1; // r11
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // rcx

  v1 = 3LL;
  if ( (*((_BYTE *)this + 1264) & 3) == 0 )
    return 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = (_DWORD *)((char *)this + 1312);
  do
  {
    if ( *((_BYTE *)v7 - 4) )
    {
      v5 = v7[1] & *v7 | (unsigned int)v5;
      v6 = v7[1] | (unsigned int)v6;
    }
    v7 += 3;
    --v1;
  }
  while ( v1 );
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 720,
                         v5,
                         v6);
      return (unsigned __int8)result;
    case 3:
      LOBYTE(result) = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 752,
                         v5,
                         v6);
      return (unsigned __int8)result;
    case 4:
      LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 688,
                         v5,
                         v6);
      return (unsigned __int8)result;
  }
  if ( *((_DWORD *)this + 197) != 5 )
  {
    if ( *((_DWORD *)this + 197) != 6 )
      return 0LL;
    LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                       (char *)this + 656,
                       v5,
                       v6);
    return (unsigned __int8)result;
  }
  LOBYTE(v4) = *((_DWORD *)this + 162) == -805306369;
  return v4;
}
