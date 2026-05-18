/*
 * XREFs of sub_1800487F0 @ 0x1800487F0
 * Callers:
 *     sub_180049924 @ 0x180049924 (sub_180049924.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180049CD8 @ 0x180049CD8 (sub_180049CD8.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800487F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int128 v6; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    std::string::string(v8, "Out of range");
    v2 = (unsigned int)std::string::string(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180068668((unsigned int)pExceptionObject, v2, v3, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v4 = (_QWORD *)sub_180049CD8();
  v6 = 0LL;
  sub_180011110(v4 + 3, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_18001060C(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  sub_180011110(v4 + 5, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_18001060C(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  sub_180011110(v4 + 7, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_18001060C(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  result = sub_180011110(v4 + 9, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    return (_QWORD *)sub_18001060C(*((__int64 *)&v6 + 1));
  return result;
}
