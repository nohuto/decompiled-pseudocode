/*
 * XREFs of sub_18002A7C0 @ 0x18002A7C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002A7C0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v4; // eax
  int v5; // r8d
  _BYTE v6[8]; // [rsp+30h] [rbp-A8h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  _QWORD v10[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-48h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v6);
  sub_180011C04(v2, &v8);
  if ( v7 )
    sub_180010644(v7);
  if ( !v8 )
  {
    std::string::string(v11, "RenderDevice was removed");
    v4 = (unsigned int)std::string::string(
                         v10,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\renderoutput.cpp");
    sub_180068668((unsigned int)pExceptionObject, v4, v5, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_18006BAB4(a1[26]);
  if ( v9 )
    return sub_18001060C(v9);
  return result;
}
