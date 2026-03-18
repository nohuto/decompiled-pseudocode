/*
 * XREFs of Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x140274D7C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x14023C1F0 (EditionIsRIMInjectionBlocked.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x140273C6C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledFallback @ 0x140274DB4 (Feature_InputInjectionDoInputCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputInjectionDoInputCheck__private_featureState & 0x10) != 0 )
    return Feature_InputInjectionDoInputCheck__private_featureState & 1;
  else
    return Feature_InputInjectionDoInputCheck__private_IsEnabledFallback(
             (unsigned int)Feature_InputInjectionDoInputCheck__private_featureState,
             3LL);
}
