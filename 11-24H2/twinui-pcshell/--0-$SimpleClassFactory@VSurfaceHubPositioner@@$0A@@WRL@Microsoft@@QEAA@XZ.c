/*
 * XREFs of ??0?$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1801779B8
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@12@@Z @ 0x18017792C (--$MakeAndInitialize@V-$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@WRL@Microsoft@@V123@$$V@D.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::SimpleClassFactory<SurfaceHubPositioner,0>::SimpleClassFactory<SurfaceHubPositioner,0>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::SimpleClassFactory<SurfaceHubPositioner,0>::`vftable';
  return result;
}
