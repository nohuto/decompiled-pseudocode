/*
 * XREFs of sub_18003AC70 @ 0x18003AC70
 * Callers:
 *     sub_1800143FC @ 0x1800143FC (sub_1800143FC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 *     unknown_libname_6 @ 0x180038660 (unknown_libname_6.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003AC70(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // r8
  unsigned int v6; // eax
  int v7; // r8d
  __int64 result; // rax
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  sub_18003BD1C();
  v4 = *(__int64 **)(a1 + 384);
  v5 = *(__int64 **)(a1 + 376);
  if ( v5 == v4 )
    goto LABEL_5;
  do
  {
    if ( *v5 == *a2 )
      break;
    v5 += 2;
  }
  while ( v5 != v4 );
  if ( v5 == v4 )
  {
LABEL_5:
    std::string::string(v11, "Attempt to remove component that has not been added to scene node.");
    v6 = (unsigned int)std::string::string(
                         v10,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\scenenode.cpp");
    sub_180068508((unsigned int)pExceptionObject, v6, v7, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  unknown_libname_6(v5 + 2, v4, v5);
  sub_180030AA0(*(_QWORD *)(a1 + 384) - 16LL);
  *(_QWORD *)(a1 + 384) -= 16LL;
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v9 = a2[1];
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
