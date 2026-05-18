/*
 * XREFs of sub_180048200 @ 0x180048200
 * Callers:
 *     sub_180049924 @ 0x180049924 (sub_180049924.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180049CD8 @ 0x180049CD8 (sub_180049CD8.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800782A0 @ 0x1800782A0 (sub_1800782A0.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180048200(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h]
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h]
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h]
  _QWORD *v20; // [rsp+60h] [rbp-49h]
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-21h] BYREF
  __int64 v24; // [rsp+90h] [rbp-19h]
  _BYTE pExceptionObject[56]; // [rsp+A8h] [rbp-1h] BYREF

  v20 = a3;
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    std::string::string(&v23, "Out of range");
    v5 = (unsigned int)std::string::string(
                         &v21,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180068668((unsigned int)pExceptionObject, v5, v6, (unsigned int)&v23, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_180049CD8();
  unknown_libname_81(&v23, (_QWORD *)(*a3 + 96LL));
  v8 = (__int64 *)sub_180079CB0(v23, &v18);
  sub_180011110(v7 + 3, v8);
  if ( v19 )
    sub_18001060C(v19);
  unknown_libname_81(&v18, (_QWORD *)(*a3 + 144LL));
  v9 = (__int64 *)sub_180079CB0(v18, &v16);
  sub_180011110(v7 + 5, v9);
  if ( v17 )
    sub_18001060C(v17);
  unknown_libname_81(&v16, (_QWORD *)(*a3 + 208LL));
  v10 = (__int64 *)sub_180079CB0(v16, &v14);
  sub_180011110(v7 + 7, v10);
  if ( v15 )
    sub_18001060C(v15);
  unknown_libname_81(&v14, (_QWORD *)(*a3 + 224LL));
  v11 = (__int64 *)sub_180079CB0(v14, &v21);
  sub_180011110(v7 + 9, v11);
  if ( v22 )
    sub_18001060C(v22);
  result = sub_1800782A0(a1);
  if ( v15 )
    result = sub_18001060C(v15);
  if ( v17 )
    result = sub_18001060C(v17);
  if ( v19 )
    result = sub_18001060C(v19);
  if ( v24 )
    result = sub_18001060C(v24);
  v13 = a3[1];
  if ( v13 )
    return sub_18001060C(v13);
  return result;
}
