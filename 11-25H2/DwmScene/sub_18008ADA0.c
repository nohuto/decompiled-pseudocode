/*
 * XREFs of sub_18008ADA0 @ 0x18008ADA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180016890 @ 0x180016890 (sub_180016890.c)
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_18008AAC0 @ 0x18008AAC0 (sub_18008AAC0.c)
 *     sub_18008AB8C @ 0x18008AB8C (sub_18008AB8C.c)
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008ADA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 *v8; // rax
  _QWORD *v9; // rsi
  void *v10; // rcx
  _QWORD *v11; // rdi
  _BYTE *v12; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  char v16; // [rsp+30h] [rbp-89h]
  __int128 v17; // [rsp+38h] [rbp-81h] BYREF
  __int64 v18; // [rsp+48h] [rbp-71h]
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+58h] [rbp-61h]
  __int64 v21; // [rsp+60h] [rbp-59h] BYREF
  __int64 v22; // [rsp+68h] [rbp-51h]
  _QWORD *v23; // [rsp+80h] [rbp-39h]
  _QWORD v24[4]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-11h] BYREF

  v4 = a4;
  v23 = a2;
  v8 = sub_180040728(a4, &v21);
  sub_180039F04(*v8, (__int64)&v19);
  if ( v22 )
    sub_18001050C(v22);
  v17 = 0LL;
  v18 = 0LL;
  v21 = v19;
  LODWORD(v22) = v20;
  sub_18008AF4C(a1, v4, (unsigned int)&v21, (unsigned int)&v17, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      std::string::string(v24, "Unsupported sorting order");
      v14 = std::string::string(
              &v21,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\dist"
              "ancefromcamerascenenodetraversal.cpp");
      sub_180068508(pExceptionObject, (__int64)v14, v15, (__int64)v24, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18008AAC0((char *)v17, *((float **)&v17 + 1), v16);
  }
  else
  {
    sub_18008AB8C((char *)v17, *((float **)&v17 + 1), v16);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = (_QWORD *)*((_QWORD *)&v17 + 1);
  v10 = (void *)v17;
  if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
  {
    v11 = (_QWORD *)(v17 + 8);
    do
    {
      v12 = (_BYTE *)a2[1];
      if ( v12 == (_BYTE *)a2[2] )
      {
        sub_180016890((__int64)a2, v12, v11);
      }
      else
      {
        *(_QWORD *)v12 = *v11;
        a2[1] += 8LL;
      }
      v11 += 2;
    }
    while ( v11 - 1 != v9 );
    v10 = (void *)v17;
  }
  if ( v10 )
    sub_180010134(v10, (v18 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  return a2;
}
