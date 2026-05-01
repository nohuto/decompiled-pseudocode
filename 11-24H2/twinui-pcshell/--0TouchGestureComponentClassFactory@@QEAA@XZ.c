/*
 * XREFs of ??0TouchGestureComponentClassFactory@@QEAA@XZ @ 0x18058AD4C
 * Callers:
 *     ??$MakeAndInitialize@VTouchGestureComponentClassFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchGestureComponentClassFactory@@@Z @ 0x1802366B4 (--$MakeAndInitialize@VTouchGestureComponentClassFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEA.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

TouchGestureComponentClassFactory *__fastcall TouchGestureComponentClassFactory::TouchGestureComponentClassFactory(
        TouchGestureComponentClassFactory *this)
{
  TouchGestureComponentClassFactory *v1; // rcx
  TouchGestureComponentClassFactory *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v1;
  *(_QWORD *)v1 = &TouchGestureComponentClassFactory::`vftable';
  return result;
}
