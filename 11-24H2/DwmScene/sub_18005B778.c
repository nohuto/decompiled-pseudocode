/*
 * XREFs of sub_18005B778 @ 0x18005B778
 * Callers:
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180032718 @ 0x180032718 (sub_180032718.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180041750 @ 0x180041750 (sub_180041750.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18007BC30 @ 0x18007BC30 (sub_18007BC30.c)
 *     sub_18007E118 @ 0x18007E118 (sub_18007E118.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_18005B778(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 *v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *i; // rdi
  __int64 **v14; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h]
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  __int64 v21; // [rsp+50h] [rbp-49h]
  _BYTE v22[8]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v23; // [rsp+70h] [rbp-29h]
  _QWORD v24[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v4 = sub_18005BDF4(a1, v22);
  sub_180032718(*(_QWORD *)(*(_QWORD *)v4 + 18688LL), &v18, a2);
  if ( v23 )
    sub_18001060C(v23);
  sub_18002894C(v18 + 24, v5);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      v24,
      "ShaderFamily::DetachDevice() -- The family must have finished declaration before detaching device");
    v6 = std::string::string(
           &v20,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v6, v7, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = **(_QWORD **)(a1 + 480);
  v17 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    sub_180011C04(v8 + 32, &v20);
    if ( v20 )
      sub_180041750(v20, a2);
    if ( v21 )
      sub_18001060C(v21);
    sub_18001C420(&v17);
    v8 = v17;
  }
  v9 = (_QWORD *)(a1 + 256);
  v10 = 10LL;
  do
  {
    if ( *v9 )
      sub_18007BC30(*v9, a2);
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v11 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v11 + 25) )
  {
    v12 = (_QWORD *)v11[5];
    for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
      sub_18007E118(i[2], a2);
    v14 = (__int64 **)v11[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( j = (__int64 *)v11[1]; !*((_BYTE *)j + 25) && v11 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v11 = j;
      v11 = j;
    }
    else
    {
      v11 = (__int64 *)v11[2];
      for ( k = *v14; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v11 = k;
    }
  }
  if ( v19 )
    sub_18001060C(v19);
}
