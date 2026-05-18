/*
 * XREFs of sub_18008AF00 @ 0x18008AF00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180016990 @ 0x180016990 (sub_180016990.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 *     sub_18008B0AC @ 0x18008B0AC (sub_18008B0AC.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008AF00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
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
  v8 = sub_180040888(a4, &v21);
  sub_18003A064(*v8, (__int64)&v19);
  if ( v22 )
    sub_18001060C(v22);
  v17 = 0LL;
  v18 = 0LL;
  v21 = v19;
  LODWORD(v22) = v20;
  sub_18008B0AC(a1, v4, (unsigned int)&v21, (unsigned int)&v17, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      std::string::string(v24, "Unsupported sorting order");
      v14 = std::string::string(
              &v21,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\dist"
              "ancefromcamerascenenodetraversal.cpp");
      sub_180068668(pExceptionObject, (__int64)v14, v15, (__int64)v24, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18008AC20((char *)v17, *((float **)&v17 + 1), v16);
  }
  else
  {
    sub_18008ACEC((char *)v17, *((float **)&v17 + 1), v16);
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
        sub_180016990((__int64)a2, v12, v11);
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
    sub_180010234(v10, (v18 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  return a2;
}
