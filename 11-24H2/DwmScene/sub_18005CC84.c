/*
 * XREFs of sub_18005CC84 @ 0x18005CC84
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 *     sub_18002DDF4 @ 0x18002DDF4 (sub_18002DDF4.c)
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 *     sub_18005E448 @ 0x18005E448 (sub_18005E448.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005CC84(__int64 a1)
{
  __int64 *v1; // rbx
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

  v7 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (__int64 *)(a1 + 200);
  if ( sub_18003696C(a1 + 200, &v7) )
  {
    std::string::string(
      v11,
      "Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    sub_18001D37C(pExceptionObject, (__int64)v11);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  sub_18005E448(&v8);
  v2 = *(_QWORD *)sub_18002DDF4(v1, (__int64)v10, &v7);
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
    sub_18001060C(v5);
  if ( v3 )
    sub_18001060C(v3);
  return v4;
}
