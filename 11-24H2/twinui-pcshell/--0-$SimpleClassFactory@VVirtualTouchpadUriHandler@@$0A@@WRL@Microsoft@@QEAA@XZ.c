/*
 * XREFs of ??0?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1804586A8
 * Callers:
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1804586F0 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<VirtualTouchpadUriHandler,0>::SimpleClassFactory<VirtualTouchpadUriHandler,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<VirtualTouchpadUriHandler,0>::`vftable';
  return result;
}
