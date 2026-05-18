/*
 * XREFs of sub_18002BB14 @ 0x18002BB14
 * Callers:
 *     sub_1800316BC @ 0x1800316BC (sub_1800316BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001D21C @ 0x18001D21C (sub_18001D21C.c)
 *     sub_18002DC94 @ 0x18002DC94 (sub_18002DC94.c)
 *     sub_18002E4B8 @ 0x18002E4B8 (sub_18002E4B8.c)
 *     sub_18003680C @ 0x18003680C (sub_18003680C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002BB14(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *v7; // [rsp+20h] [rbp-39h] BYREF
  __int64 v8; // [rsp+28h] [rbp-31h] BYREF
  __int64 v9; // [rsp+30h] [rbp-29h]
  _BYTE v10[16]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+68h] [rbp+Fh] BYREF

  v7 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v1 = a1 + 200;
  if ( sub_18003680C(a1 + 200, &v7) )
  {
    std::string::string(
      v11,
      "Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    sub_18001D21C(pExceptionObject, (__int64)v11);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  sub_18002E4B8(&v8);
  v2 = *(_QWORD *)sub_18002DC94(v1, v10, &v7);
  v3 = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v3 = v9;
  }
  v4 = v8;
  *(_QWORD *)(v2 + 40) = v8;
  v5 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 48) = v3;
  if ( v5 )
    sub_18001050C(v5);
  if ( v3 )
    sub_18001050C(v3);
  return v4;
}
