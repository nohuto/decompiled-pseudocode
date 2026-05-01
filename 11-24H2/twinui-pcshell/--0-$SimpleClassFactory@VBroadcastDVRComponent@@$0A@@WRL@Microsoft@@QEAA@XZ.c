/*
 * XREFs of ??0?$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180314DD0
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@12@@Z @ 0x1801D021C (--$MakeAndInitialize@V-$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<BroadcastDVRComponent,0>::SimpleClassFactory<BroadcastDVRComponent,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<BroadcastDVRComponent,0>::`vftable';
  return result;
}
