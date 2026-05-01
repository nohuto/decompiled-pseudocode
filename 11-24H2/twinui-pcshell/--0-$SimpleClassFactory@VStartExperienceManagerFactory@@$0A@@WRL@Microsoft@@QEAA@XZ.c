/*
 * XREFs of ??0?$SimpleClassFactory@VStartExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18038EAAC
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VStartExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VStartExperienceManagerFactory@@$0A@@12@@Z @ 0x18022430C (--$MakeAndInitialize@V-$SimpleClassFactory@VStartExperienceManagerFactory@@$0A@@WRL@Microsoft@@V.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<StartExperienceManagerFactory,0>::SimpleClassFactory<StartExperienceManagerFactory,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<StartExperienceManagerFactory,0>::`vftable';
  return result;
}
