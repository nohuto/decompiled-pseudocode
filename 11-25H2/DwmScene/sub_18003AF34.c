/*
 * XREFs of sub_18003AF34 @ 0x18003AF34
 * Callers:
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_18003DE00 @ 0x18003DE00 (sub_18003DE00.c)
 *     sub_18003ECEC @ 0x18003ECEC (sub_18003ECEC.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003931C @ 0x18003931C (sub_18003931C.c)
 *     sub_180039D50 @ 0x180039D50 (sub_180039D50.c)
 *     sub_18003AB54 @ 0x18003AB54 (sub_18003AB54.c)
 *     sub_18003B990 @ 0x18003B990 (sub_18003B990.c)
 *     sub_18003BA44 @ 0x18003BA44 (sub_18003BA44.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18003E4F4 @ 0x18003E4F4 (sub_18003E4F4.c)
 *     sub_18003F0EC @ 0x18003F0EC (sub_18003F0EC.c)
 */

// Hidden C++ exception states: #wind=9
unsigned __int64 __fastcall sub_18003AF34(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  bool v9; // r15
  char v10; // r12
  __int64 *v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  __int64 *v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-8h]
  _QWORD v41[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v42[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+140h] [rbp+40h] BYREF

  v31 = a2;
  sub_18003BD1C();
  sub_180011C64((__int64)(a1 + 1), &v20);
  if ( !a1[46] )
  {
    std::string::string(
      v42,
      "SceneNode::SetParent() -- Unique ID zero is reserved for root-level nodes -- this node must not be given a parent.");
    v4 = std::string::string(
           v41,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v42, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a2 )
  {
    v6 = unknown_libname_81(&v32, a2);
    if ( (unsigned __int8)sub_18003B990(a1, v6) )
    {
      std::string::string(
        v41,
        "SceneNode::SetParent() -- A node's parent cannot be set to node that is within the node's own tree (cyclic graph prohibited).");
      v7 = std::string::string(
             v42,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
      sub_180038A58(pExceptionObject, (__int64)v7, v8, (__int64)v41, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180012554((__int64)a1, &v29);
  sub_18001258C((__int64)a1, &v27);
  v26 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( v29 )
  {
    v9 = *a2 == 0;
  }
  else
  {
    if ( !*a2 )
      goto LABEL_12;
    v10 = 1;
  }
  if ( v29 )
    sub_18003AB54(v29, &v20);
LABEL_12:
  if ( *a2 )
  {
    sub_18003931C((__int64 *)*a2, &v20);
    v11 = (__int64 *)sub_18001258C(*a2, &v33);
    sub_180011010(&v26, v11);
    if ( v34 )
      sub_18001050C(v34);
  }
  sub_180028938(a1 + 7, a2);
  v12 = v26;
  if ( v27 != (_QWORD)v26 )
  {
    sub_18003BAF0(a1);
    unknown_libname_81(&v24, &v20);
    while ( v24 )
    {
      sub_180028938((__int64 *)(v24 + 72), &v26);
      v13 = sub_180039D50(v20, &v35, &v24);
      sub_180011010(&v24, v13);
      if ( v36 )
        sub_18001050C(v36);
    }
    if ( v25 )
      sub_18001050C(v25);
    sub_18003BA44(a1);
  }
  unknown_libname_81(&v22, &v20);
  while ( v22 )
  {
    if ( v10 && v12 )
    {
      v14 = unknown_libname_81(&v37, &v22);
      sub_18003F0EC(v12, v14);
    }
    if ( v9 && v27 )
    {
      v15 = unknown_libname_81(&v38, &v22);
      sub_18003E4F4(v27, v15);
    }
    v16 = sub_180039D50(v20, &v39, &v22);
    sub_180011010(&v22, v16);
    if ( v40 )
      sub_18001050C(v40);
  }
  if ( v23 )
    sub_18001050C(v23);
  v17 = _InterlockedIncrement64(&qword_1801C2BB0);
  a1[26] = v17;
  result = a1[27];
  if ( v17 < result )
    v17 = a1[27];
  a1[27] = v17;
  if ( *((_QWORD *)&v26 + 1) )
    result = sub_18001050C(*((__int64 *)&v26 + 1));
  if ( v28 )
    result = sub_18001050C(v28);
  if ( v30 )
    result = sub_18001050C(v30);
  if ( v21 )
    result = sub_18001050C(v21);
  v19 = a2[1];
  if ( v19 )
    return sub_18001050C(v19);
  return result;
}
