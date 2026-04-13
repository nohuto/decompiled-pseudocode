/*
 * XREFs of ??0?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7768
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@12@@Z @ 0x1800A75EC (--$MakeAndInitialize@V-$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@V123@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180066C78 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>::SimpleClassFactory<MobilityExperienceManager,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>::`vftable';
  return result;
}
