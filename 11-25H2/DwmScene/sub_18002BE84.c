/*
 * XREFs of sub_18002BE84 @ 0x18002BE84
 * Callers:
 *     sub_180032B5C @ 0x180032B5C (sub_180032B5C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001D21C @ 0x18001D21C (sub_18001D21C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002CE30 @ 0x18002CE30 (sub_18002CE30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BE84(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v5; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_1800287EC(a1 + 16, a2);
  v5 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v3 = sub_18002CE30(a1 + 200, &v5);
  if ( v3 == *(_QWORD *)(a1 + 200) )
  {
    std::string::string(
      v6,
      "Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called before GetCustomData<T>()");
    sub_18001D21C(pExceptionObject, (__int64)v6);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v3 + 40);
}
