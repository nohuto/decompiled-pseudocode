/*
 * XREFs of sub_18002BFE4 @ 0x18002BFE4
 * Callers:
 *     sub_180032CBC @ 0x180032CBC (sub_180032CBC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002CF90 @ 0x18002CF90 (sub_18002CF90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BFE4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v5; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_18002894C(a1 + 16, a2);
  v5 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v3 = sub_18002CF90(a1 + 200, &v5);
  if ( v3 == *(_QWORD *)(a1 + 200) )
  {
    std::string::string(
      v6,
      "Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called before GetCustomData<T>()");
    sub_18001D37C(pExceptionObject, (__int64)v6);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v3 + 40);
}
